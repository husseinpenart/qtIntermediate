# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appqtIntermediate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appqtIntermediate_autogen.dir\\ParseCache.txt"
  "appqtIntermediate_autogen"
  )
endif()
