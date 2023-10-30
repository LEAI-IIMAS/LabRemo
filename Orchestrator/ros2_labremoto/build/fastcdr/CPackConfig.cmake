# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/src/eProsima/Fast-CDR;/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "headers;licenses;libraries;cmake")
set(CPACK_COMPONENTS_ALL_SET_BY_USER "TRUE")
set(CPACK_COMPONENT_CMAKE_HIDDEN "1")
set(CPACK_COMPONENT_HEADERS_DESCRIPTION "eProsima Fast CDR C++ Headers")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers")
set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "eProsima Fast CDR libraries")
set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Libraries")
set(CPACK_COMPONENT_LICENSES_HIDDEN "1")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "fastcdr built using CMake")
set(CPACK_GENERATOR "TGZ")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr;fastcdr;ALL;/")
set(CPACK_INSTALL_PREFIX "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/install/fastcdr")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "fastcdr 1.0.7")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "fastcdr 1.0.7")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "eProsima Support <support@eprosima.com>")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION "eProsima Fast CDR library provides two serialization mechanisms. One is the standard CDR serialization mechanism, while the other is a faster implementation that modifies the standard.")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "fastcdr - C++ library for serialize using CDR serialization")
set(CPACK_PACKAGE_FILE_NAME "fastcdr-1.0.7-Linux")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "fastcdr 1.0.7")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "fastcdr 1.0.7")
set(CPACK_PACKAGE_NAME "fastcdr")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "eProsima")
set(CPACK_PACKAGE_VERSION "1.0.7")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "7")
set(CPACK_PROJECT_CONFIG_FILE "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr/cmake/packaging/linux/LinuxPackaging.cmake")
set(CPACK_RESOURCE_FILE_LICENSE "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/src/eProsima/Fast-CDR/LICENSE")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.22/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr/CPackSourceConfig.cmake")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/ffelix07/Documents/LabRemo/Orchestrator/ros2_labremoto/build/fastcdr/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()