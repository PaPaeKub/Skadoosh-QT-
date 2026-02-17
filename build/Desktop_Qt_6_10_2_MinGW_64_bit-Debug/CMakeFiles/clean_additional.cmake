# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Skadoosh_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Skadoosh_autogen.dir\\ParseCache.txt"
  "Skadoosh_autogen"
  )
endif()
