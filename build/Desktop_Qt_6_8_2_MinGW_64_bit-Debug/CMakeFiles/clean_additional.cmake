# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appqtIntermediate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appqtIntermediate_autogen.dir\\ParseCache.txt"
  "appqtIntermediate_autogen"
  "movies\\CMakeFiles\\moviesLib_autogen.dir\\AutogenUsed.txt"
  "movies\\CMakeFiles\\moviesLib_autogen.dir\\ParseCache.txt"
  "movies\\CMakeFiles\\moviesLibplugin_autogen.dir\\AutogenUsed.txt"
  "movies\\CMakeFiles\\moviesLibplugin_autogen.dir\\ParseCache.txt"
  "movies\\CMakeFiles\\moviesLibplugin_init_autogen.dir\\AutogenUsed.txt"
  "movies\\CMakeFiles\\moviesLibplugin_init_autogen.dir\\ParseCache.txt"
  "movies\\moviesLib_autogen"
  "movies\\moviesLibplugin_autogen"
  "movies\\moviesLibplugin_init_autogen"
  )
endif()
