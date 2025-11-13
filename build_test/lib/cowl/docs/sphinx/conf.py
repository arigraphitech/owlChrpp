# Project metadata

project = 'Cowl'
copyright = '2019-2024, SisInf Lab, Polytechnic University of Bari'
author = 'SisInf Lab, Polytechnic University of Bari'
version = '0.7.2'
release = '0.7.2'
logo = '/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/docs/img/cowl_logo.png'
git_url = 'https://github.com/sisinflab-swot/cowl'
poliba_url = 'http://www.poliba.it'
sisinflab_url = 'http://sisinflab.poliba.it'
swot_url = 'http://swot.sisinflab.poliba.it'

# Sphinx

primary_domain = 'c'
default_role = 'any'
toc_object_entries = False
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
extensions = ['breathe', 'sphinx.ext.intersphinx']
rst_prolog = f':github_url: {git_url}'
rst_epilog = (
    f'.. _git_url: {git_url}\n'
    f'.. |git_url| replace:: {git_url}.git\n'
    f'.. _swot_url: {swot_url}\n'
    f'.. _poliba_url: {poliba_url}\n'
)

# HTML

html_theme = 'sphinx_rtd_theme'
html_theme_options = {'logo_only': False}
templates_path = ['/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/docs/_templates']
html_static_path = ['/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/docs/_static', '/home/etud/Téléchargements/stage/stage_labo/ParserProject/lib/cowl/docs/img']
html_css_files = ['style.css']
html_logo = logo
html_short_title = f'{project} docs'
html_context = {
    'poliba_url': poliba_url,
    'sisinflab_url': sisinflab_url,
    'swot_url': swot_url
}
html_copy_source = False
html_show_sphinx = False
html_use_index = False

# Intersphinx

intersphinx_mapping = {
    'ulib': ('https://ivanobilenchi.com/docs/ulib', '/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/lib/ulib/docs/sphinx/html/objects.inv')
}

# Breathe

breathe_projects = {project: '/home/etud/Téléchargements/stage/stage_labo/ParserProject/build_test/lib/cowl/docs/doxygen/xml'}
breathe_default_project = project
breathe_default_members = ('members', 'undocmembers')
breathe_domain_by_extension = {
    "h": "c",
}
