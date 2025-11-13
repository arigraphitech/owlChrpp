#include <owlOWL2.hh>
#line 0 "owl.chrpp"
/*
*/

namespace chr {

template <>
struct Type_instruction_wrapper<Value, false> {
    static std::string to_string(const Value& v) {
        return "Value(" + v.val + ")";
    }

    static void update_hash(const Value& v) {
        XXHash<std::string>::update(v.val); // ou adapte selon ta logique de hachage
    }

    static bool is_equal(const Value& a, const Value& b) {
        return a.val == b.val;
    }
};

}


template <typename T>
void print(T& pb)
{

    auto it = pb.chr_store_begin();
    while (!it.at_end())
    {
        std::cout << it.to_string() << std::endl;
        ++it;
    }

}

int main()
{
    TRACE(chr::Log::register_flags(chr::Log::ALL);)
    //std::vector<std::string> classes={"c1","c2","c3"};
    auto space = OWL2::create();

    chr::Logical_var<std::string> c1 ;
    chr::Logical_var<std::string> c2 ;
    chr::Logical_var<std::string> c3 ;
    chr::Logical_var<std::string> x  ;
    chr::Logical_var<std::string> y  ;
    chr::Logical_var<std::string> d  ;
    chr::Logical_var<std::string> f ;
 CHR_RUN(
    space->logicalName(std::string("http://ex.org#c1"), c1);
    space->logicalName(std::string("www.jsp.com#x"), y);
    space->logicalName(std::string("www.jsp.com#y"), y);
    space->logicalName(std::string("http://ex.org#c3"), c3);
    space->owlClass(y);
  //  space->owlNamedIndividual(x);
   // space->owlNamedIndividual(y);
   // space->owlSameIndividual(x,y);
   // space->owlClassAssertion(x, c1);
   // space->queryClassification(y);
  //  space->owlClassAssertion(f, c3);
   // space->owlComplementOf(c1, c2);
   // space->owlClassAssertion(d, c2);
   // space->owlClassAssertion(y, c2);

 )
    print(*space);
    chr::Statistics::print(std::cout);

    return 0;
}
