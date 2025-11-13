# Project metadata

project = 'uLib'
copyright = '2018-2024, Ivano Bilenchi'
author = 'Ivano Bilenchi'
version = '0.2.6'
release = '0.2.6'
git_url = 'https://github.com/IvanoBilenchi/ulib'

# Sphinx

primary_domain = 'c'
default_role = 'any'
toc_object_entries = False
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
extensions = ['breathe']
rst_prolog = f':github_url: {git_url}'
rst_epilog = (
    f'.. _git_url: {git_url}\n'
    f'.. |git_url| replace:: {git_url}.git\n'
)

# HTML

html_theme = 'sphinx_rtd_theme'
html_theme_options = {'logo_only': False}
html_static_path = ['/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/lib/ulib/docs/_static']
html_css_files = ['style.css']
html_short_title = '{} docs'.format(project)
html_copy_source = False
html_show_sphinx = False
html_use_index = False

# Breathe

breathe_projects = {project: '/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/lib/ulib/docs/doxygen/xml'}
breathe_default_project = project
breathe_default_members = ('members', 'undocmembers')
breathe_domain_by_extension = {
    "h": "c",
}
