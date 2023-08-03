# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sensorsorsor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sensorsorsor_autogen.dir\\ParseCache.txt"
  "sensorsorsor_autogen"
  )
endif()
