#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp_action::rclcpp_action" for configuration "None"
set_property(TARGET rclcpp_action::rclcpp_action APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(rclcpp_action::rclcpp_action PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/librclcpp_action.so"
  IMPORTED_SONAME_NONE "librclcpp_action.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp_action::rclcpp_action )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp_action::rclcpp_action "${_IMPORT_PREFIX}/lib/librclcpp_action.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
