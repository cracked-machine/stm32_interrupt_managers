include(FetchContent)

# fetch and build "embedded_utils" code repo
FetchContent_Populate(
  embedded_utils
  GIT_REPOSITORY https://github.com/cracked-machine/embedded_utils.git
  GIT_TAG main
  SOURCE_DIR embedded_utils
)