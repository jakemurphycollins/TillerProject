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
include CMakeFiles/_Tiller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/_Tiller.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/_Tiller.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_Tiller.dir/flags.make

CMakeFiles/_Tiller.dir/codegen:
.PHONY : CMakeFiles/_Tiller.dir/codegen

CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj: CMakeFiles/_Tiller.dir/flags.make
CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj: CMakeFiles/_Tiller.dir/includes_CXX.rsp
CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj: C:/TillerProject/src/sensors/potentiometer_sensor.cpp
CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj: CMakeFiles/_Tiller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj -MF CMakeFiles\_Tiller.dir\src\sensors\potentiometer_sensor.cpp.obj.d -o CMakeFiles\_Tiller.dir\src\sensors\potentiometer_sensor.cpp.obj -c C:\TillerProject\src\sensors\potentiometer_sensor.cpp

CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.i"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\src\sensors\potentiometer_sensor.cpp > CMakeFiles\_Tiller.dir\src\sensors\potentiometer_sensor.cpp.i

CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.s"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\src\sensors\potentiometer_sensor.cpp -o CMakeFiles\_Tiller.dir\src\sensors\potentiometer_sensor.cpp.s

CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj: CMakeFiles/_Tiller.dir/flags.make
CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj: CMakeFiles/_Tiller.dir/includes_CXX.rsp
CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj: C:/TillerProject/src/sensors/combination_sensor.cpp
CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj: CMakeFiles/_Tiller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj -MF CMakeFiles\_Tiller.dir\src\sensors\combination_sensor.cpp.obj.d -o CMakeFiles\_Tiller.dir\src\sensors\combination_sensor.cpp.obj -c C:\TillerProject\src\sensors\combination_sensor.cpp

CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.i"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\src\sensors\combination_sensor.cpp > CMakeFiles\_Tiller.dir\src\sensors\combination_sensor.cpp.i

CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.s"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\src\sensors\combination_sensor.cpp -o CMakeFiles\_Tiller.dir\src\sensors\combination_sensor.cpp.s

CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj: CMakeFiles/_Tiller.dir/flags.make
CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj: CMakeFiles/_Tiller.dir/includes_CXX.rsp
CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj: C:/TillerProject/src/sensors/encoder_sensor.cpp
CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj: CMakeFiles/_Tiller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj -MF CMakeFiles\_Tiller.dir\src\sensors\encoder_sensor.cpp.obj.d -o CMakeFiles\_Tiller.dir\src\sensors\encoder_sensor.cpp.obj -c C:\TillerProject\src\sensors\encoder_sensor.cpp

CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.i"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\src\sensors\encoder_sensor.cpp > CMakeFiles\_Tiller.dir\src\sensors\encoder_sensor.cpp.i

CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.s"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\src\sensors\encoder_sensor.cpp -o CMakeFiles\_Tiller.dir\src\sensors\encoder_sensor.cpp.s

CMakeFiles/_Tiller.dir/main.cpp.obj: CMakeFiles/_Tiller.dir/flags.make
CMakeFiles/_Tiller.dir/main.cpp.obj: CMakeFiles/_Tiller.dir/includes_CXX.rsp
CMakeFiles/_Tiller.dir/main.cpp.obj: C:/TillerProject/main.cpp
CMakeFiles/_Tiller.dir/main.cpp.obj: CMakeFiles/_Tiller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/_Tiller.dir/main.cpp.obj"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/_Tiller.dir/main.cpp.obj -MF CMakeFiles\_Tiller.dir\main.cpp.obj.d -o CMakeFiles\_Tiller.dir\main.cpp.obj -c C:\TillerProject\main.cpp

CMakeFiles/_Tiller.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/_Tiller.dir/main.cpp.i"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\TillerProject\main.cpp > CMakeFiles\_Tiller.dir\main.cpp.i

CMakeFiles/_Tiller.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/_Tiller.dir/main.cpp.s"
	C:\w64devkit\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\TillerProject\main.cpp -o CMakeFiles\_Tiller.dir\main.cpp.s

# Object files for target _Tiller
_Tiller_OBJECTS = \
"CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj" \
"CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj" \
"CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj" \
"CMakeFiles/_Tiller.dir/main.cpp.obj"

# External object files for target _Tiller
_Tiller_EXTERNAL_OBJECTS =

lib_Tiller.a: CMakeFiles/_Tiller.dir/src/sensors/potentiometer_sensor.cpp.obj
lib_Tiller.a: CMakeFiles/_Tiller.dir/src/sensors/combination_sensor.cpp.obj
lib_Tiller.a: CMakeFiles/_Tiller.dir/src/sensors/encoder_sensor.cpp.obj
lib_Tiller.a: CMakeFiles/_Tiller.dir/main.cpp.obj
lib_Tiller.a: CMakeFiles/_Tiller.dir/build.make
lib_Tiller.a: CMakeFiles/_Tiller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\TillerProject\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library lib_Tiller.a"
	$(CMAKE_COMMAND) -P CMakeFiles\_Tiller.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\_Tiller.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_Tiller.dir/build: lib_Tiller.a
.PHONY : CMakeFiles/_Tiller.dir/build

CMakeFiles/_Tiller.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\_Tiller.dir\cmake_clean.cmake
.PHONY : CMakeFiles/_Tiller.dir/clean

CMakeFiles/_Tiller.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\TillerProject C:\TillerProject C:\TillerProject\build C:\TillerProject\build C:\TillerProject\build\CMakeFiles\_Tiller.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/_Tiller.dir/depend

