# Install script for directory: /home/user/ros2_ws/src/robot_patrol

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/ros2_ws/src/install/robot_patrol")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/robot_patrol")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_c/robot_patrol/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_typesupport_fastrtps_c/robot_patrol/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:/home/user/ros2_ws/src/build/robot_patrol:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_typesupport_fastrtps_cpp/robot_patrol/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_typesupport_introspection_c/robot_patrol/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/user/ros2_ws/src/build/robot_patrol:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_cpp/robot_patrol/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/robot_patrol" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_typesupport_introspection_cpp/robot_patrol/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/librobot_patrol__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/user/ros2_ws/src/install/robot_patrol/lib/python3.8/site-packages/robot_patrol/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/srv" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/srv/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol:/home/user/ros2_ws/src/build/robot_patrol:/opt/ros/foxy/lib:/opt/ros/foxy/share/sensor_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol:/home/user/ros2_ws/src/build/robot_patrol:/opt/ros/foxy/lib:/opt/ros/foxy/share/sensor_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol:/home/user/ros2_ws/src/build/robot_patrol:/opt/ros/foxy/lib:/opt/ros/foxy/share/sensor_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/robot_patrol/robot_patrol_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_generator_py/robot_patrol/librobot_patrol__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so"
         OLD_RPATH "/home/user/ros2_ws/src/build/robot_patrol:/opt/ros/foxy/share/sensor_msgs/cmake/../../../lib:/opt/ros/foxy/share/builtin_interfaces/cmake/../../../lib:/opt/ros/foxy/share/geometry_msgs/cmake/../../../lib:/opt/ros/foxy/share/std_msgs/cmake/../../../lib:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librobot_patrol__python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/srv" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_adapter/robot_patrol/srv/GetDirection.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/srv" TYPE FILE FILES "/home/user/ros2_ws/src/robot_patrol/srv/GetDirection.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/srv" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_cmake/srv/GetDirection_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/srv" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_cmake/srv/GetDirection_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_patrol" TYPE EXECUTABLE FILES "/home/user/ros2_ws/src/build/robot_patrol/patrol_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_patrol" TYPE EXECUTABLE FILES "/home/user/ros2_ws/src/build/robot_patrol/direction_server_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node"
         OLD_RPATH "/opt/ros/foxy/lib:/home/user/ros2_ws/src/build/robot_patrol:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_server_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_patrol" TYPE EXECUTABLE FILES "/home/user/ros2_ws/src/build/robot_patrol/direction_test_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node"
         OLD_RPATH "/opt/ros/foxy/lib:/home/user/ros2_ws/src/build/robot_patrol:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/direction_test_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/robot_patrol" TYPE EXECUTABLE FILES "/home/user/ros2_ws/src/build/robot_patrol/patrol_client_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node"
         OLD_RPATH "/opt/ros/foxy/lib:/home/user/ros2_ws/src/build/robot_patrol:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/robot_patrol/patrol_client_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/" TYPE DIRECTORY FILES "/home/user/ros2_ws/src/robot_patrol/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/robot_patrol")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/robot_patrol")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/environment" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_index/share/ament_index/resource_index/packages/robot_patrol")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport.cmake"
         "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/CMakeFiles/Export/share/robot_patrol/cmake/robot_patrol__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES "/home/user/ros2_ws/src/build/robot_patrol/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol/cmake" TYPE FILE FILES
    "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_core/robot_patrolConfig.cmake"
    "/home/user/ros2_ws/src/build/robot_patrol/ament_cmake_core/robot_patrolConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/robot_patrol" TYPE FILE FILES "/home/user/ros2_ws/src/robot_patrol/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/user/ros2_ws/src/build/robot_patrol/robot_patrol__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/user/ros2_ws/src/build/robot_patrol/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
