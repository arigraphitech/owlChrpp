#pragma once

#include <chrpp.hh>
#include <functional>
#include <string>
#include <unordered_set>

using LogicalVar = chr::Logical_var<int>;

// The parser interns one variable per URI; these variables are never unified
// with %=. Hashing and equality must use the same stable identity.
struct LogicalVarHash {
    std::size_t operator()(const LogicalVar& value) const noexcept {
        return std::hash<const void*>{}(value.address());
    }
};

struct LogicalVarEqual {
    bool operator()(const LogicalVar& lhs, const LogicalVar& rhs) const noexcept {
        return lhs.address() == rhs.address();
    }
};

using LogicalVarSet = std::unordered_set<LogicalVar, LogicalVarHash, LogicalVarEqual>;
using LogicalVarSetIterator = LogicalVarSet::const_iterator;

namespace chr {
template <>
struct XXHash<LogicalVarSet> {
    static void update(const LogicalVarSet& values) {
        std::size_t hash = 0;
        for (const auto& value : values) hash += LogicalVarHash{}(value);
        // Equal sets must hash equally, regardless of insertion/bucket order.
        XXHash<std::size_t>::update(values.size());
        XXHash<std::size_t>::update(hash);
    }
};

template <>
struct Type_instruction_wrapper<LogicalVarSet, false> {
    static std::string to_string(const LogicalVarSet& values) {
        return "LogicalVarSet(size=" + std::to_string(values.size()) + ")";
    }
    static void update_hash(const LogicalVarSet& values) {
        XXHash<LogicalVarSet>::update(values);
    }
    static bool is_equal(const LogicalVarSet& lhs, const LogicalVarSet& rhs) {
        if (lhs.size() != rhs.size()) return false;
        for (const auto& value : lhs) {
            if (rhs.find(value) == rhs.end()) return false;
        }
        return true;
    }
};

template <>
struct XXHash<LogicalVarSetIterator> {
    static void update(const LogicalVarSetIterator&) {
        // end() is a valid CHR argument but cannot be dereferenced. A constant
        // hash is safe for opaque iterators; equality still compares positions.
        XXHash<unsigned int>::update(0);
    }
};

template <>
struct Type_instruction_wrapper<LogicalVarSetIterator, false> {
    static std::string to_string(const LogicalVarSetIterator&) {
        return "LogicalVarSetIterator";
    }
    static void update_hash(const LogicalVarSetIterator& it) {
        XXHash<LogicalVarSetIterator>::update(it);
    }
    static bool is_equal(const LogicalVarSetIterator& lhs,
                         const LogicalVarSetIterator& rhs) {
        return lhs == rhs;
    }
};
}
