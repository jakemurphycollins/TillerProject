# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\TillerProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\TillerProject

# Include any dependencies generated for this target.
include test/CMakeFiles/tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/tests.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/tests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/tests.dir/flags.make

test/CMakeFiles/tests.dir/codegen:
.PHONY : test/CMakeFiles/tests.dir/codegen

test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj: test/CMakeFiles/tests.dir/flags.make
test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj: test/CMakeFiles/tests.dir/includes_CXX.rsp
test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj: test/sensors/gtest_potentiometer_sensor.cpp
test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj: test/CMakeFiles/tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj"
	cd /d C:\TillerProject\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj -MF CMakeFiles\tests.dir\sensors\gtest_potentiometer_sensor.cpp.obj.d -o CMakeFiles\tests.dir\sensors\gtest_potentiometer_sensor.cpp.obj -c C:\TillerProject\test\sensors\gtest_potentiometer_sensor.cpp

test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.i"
	cd /d C:\TillerProject\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\test\sensors\gtest_potentiometer_sensor.cpp > CMakeFiles\tests.dir\sensors\gtest_potentiometer_sensor.cpp.i

test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.s"
	cd /d C:\TillerProject\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\test\sensors\gtest_potentiometer_sensor.cpp -o CMakeFiles\tests.dir\sensors\gtest_potentiometer_sensor.cpp.s

# Object files for target tests
tests_OBJECTS = \
"CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj"

# External object files for target tests
tests_EXTERNAL_OBJECTS =

test/tests.exe: test/CMakeFiles/tests.dir/sensors/gtest_potentiometer_sensor.cpp.obj
test/tests.exe: test/CMakeFiles/tests.dir/build.make
test/tests.exe: test/libcode_to_test.a
test/tests.exe: lib/libgtest_main.a
test/tests.exe: lib/libgmock_main.a
test/tests.exe: lib/libgmock.a
test/tests.exe: lib/libgtest.a
test/tests.exe: test/CMakeFiles/tests.dir/linkLibs.rsp
test/tests.exe: test/CMakeFiles/tests.dir/objects1.rsp
test/tests.exe: test/CMakeFiles/tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\TillerProject\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tests.exe"
	cd /d C:\TillerProject\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tests.dir\link.txt --verbose=$(VERBOSE)
	cd /d C:\TillerProject\test && "C:\Program Files\CMake\bin\cmake.exe" -D TEST_TARGET=tests -D TEST_EXECUTABLE=C:/TillerProject/test/tests.exe -D TEST_EXECUTOR= -D TEST_WORKING_DIR=C:/TillerProject/test -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=tests_TESTS -D CTEST_FILE=C:/TillerProject/test/tests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_DISCOVERY_EXTRA_ARGS= -D TEST_XML_OUTPUT_DIR= -P "C:/Program Files/CMake/share/cmake-4.0/Modules/GoogleTestAddTests.cmake"

# Rule to build all files generated by this target.
test/CMakeFiles/tests.dir/build: test/tests.exe
.PHONY : test/CMakeFiles/tests.dir/build

test/CMakeFiles/tests.dir/clean:
	cd /d C:\TillerProject\test && $(CMAKE_COMMAND) -P CMakeFiles\tests.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/tests.dir/clean

test/CMakeFiles/tests.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\TillerProject C:\TillerProject\test C:\TillerProject C:\TillerProject\test C:\TillerProject\test\CMakeFiles\tests.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/tests.dir/depend

