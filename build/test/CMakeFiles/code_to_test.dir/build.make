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
CMAKE_BINARY_DIR = C:\TillerProject\build

# Include any dependencies generated for this target.
include test/CMakeFiles/code_to_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/code_to_test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/code_to_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/code_to_test.dir/flags.make

test/CMakeFiles/code_to_test.dir/codegen:
.PHONY : test/CMakeFiles/code_to_test.dir/codegen

test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/flags.make
test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/includes_CXX.rsp
test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj: C:/TillerProject/src/sensors/potentiometer_sensor.cpp
test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj -MF CMakeFiles\code_to_test.dir\__\src\sensors\potentiometer_sensor.cpp.obj.d -o CMakeFiles\code_to_test.dir\__\src\sensors\potentiometer_sensor.cpp.obj -c C:\TillerProject\src\sensors\potentiometer_sensor.cpp

test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.i"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\src\sensors\potentiometer_sensor.cpp > CMakeFiles\code_to_test.dir\__\src\sensors\potentiometer_sensor.cpp.i

test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.s"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\src\sensors\potentiometer_sensor.cpp -o CMakeFiles\code_to_test.dir\__\src\sensors\potentiometer_sensor.cpp.s

test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/flags.make
test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/includes_CXX.rsp
test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj: C:/TillerProject/src/sensors/encoder_sensor.cpp
test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj: test/CMakeFiles/code_to_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj -MF CMakeFiles\code_to_test.dir\__\src\sensors\encoder_sensor.cpp.obj.d -o CMakeFiles\code_to_test.dir\__\src\sensors\encoder_sensor.cpp.obj -c C:\TillerProject\src\sensors\encoder_sensor.cpp

test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.i"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\src\sensors\encoder_sensor.cpp > CMakeFiles\code_to_test.dir\__\src\sensors\encoder_sensor.cpp.i

test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.s"
	cd /d C:\TillerProject\build\test && C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\src\sensors\encoder_sensor.cpp -o CMakeFiles\code_to_test.dir\__\src\sensors\encoder_sensor.cpp.s

# Object files for target code_to_test
code_to_test_OBJECTS = \
"CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj" \
"CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj"

# External object files for target code_to_test
code_to_test_EXTERNAL_OBJECTS =

test/libcode_to_test.a: test/CMakeFiles/code_to_test.dir/__/src/sensors/potentiometer_sensor.cpp.obj
test/libcode_to_test.a: test/CMakeFiles/code_to_test.dir/__/src/sensors/encoder_sensor.cpp.obj
test/libcode_to_test.a: test/CMakeFiles/code_to_test.dir/build.make
test/libcode_to_test.a: test/CMakeFiles/code_to_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libcode_to_test.a"
	cd /d C:\TillerProject\build\test && $(CMAKE_COMMAND) -P CMakeFiles\code_to_test.dir\cmake_clean_target.cmake
	cd /d C:\TillerProject\build\test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\code_to_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/code_to_test.dir/build: test/libcode_to_test.a
.PHONY : test/CMakeFiles/code_to_test.dir/build

test/CMakeFiles/code_to_test.dir/clean:
	cd /d C:\TillerProject\build\test && $(CMAKE_COMMAND) -P CMakeFiles\code_to_test.dir\cmake_clean.cmake
.PHONY : test/CMakeFiles/code_to_test.dir/clean

test/CMakeFiles/code_to_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\TillerProject C:\TillerProject\test C:\TillerProject\build C:\TillerProject\build\test C:\TillerProject\build\test\CMakeFiles\code_to_test.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : test/CMakeFiles/code_to_test.dir/depend

