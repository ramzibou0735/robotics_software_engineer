# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build

# Include any dependencies generated for this target.
include CMakeFiles/tsk3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tsk3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tsk3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tsk3.dir/flags.make

CMakeFiles/tsk3.dir/src/task3.cpp.o: CMakeFiles/tsk3.dir/flags.make
CMakeFiles/tsk3.dir/src/task3.cpp.o: /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/src/task3.cpp
CMakeFiles/tsk3.dir/src/task3.cpp.o: CMakeFiles/tsk3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tsk3.dir/src/task3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tsk3.dir/src/task3.cpp.o -MF CMakeFiles/tsk3.dir/src/task3.cpp.o.d -o CMakeFiles/tsk3.dir/src/task3.cpp.o -c /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/src/task3.cpp

CMakeFiles/tsk3.dir/src/task3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tsk3.dir/src/task3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/src/task3.cpp > CMakeFiles/tsk3.dir/src/task3.cpp.i

CMakeFiles/tsk3.dir/src/task3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tsk3.dir/src/task3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/src/task3.cpp -o CMakeFiles/tsk3.dir/src/task3.cpp.s

# Object files for target tsk3
tsk3_OBJECTS = \
"CMakeFiles/tsk3.dir/src/task3.cpp.o"

# External object files for target tsk3
tsk3_EXTERNAL_OBJECTS =

tsk3: CMakeFiles/tsk3.dir/src/task3.cpp.o
tsk3: CMakeFiles/tsk3.dir/build.make
tsk3: CMakeFiles/tsk3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tsk3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tsk3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tsk3.dir/build: tsk3
.PHONY : CMakeFiles/tsk3.dir/build

CMakeFiles/tsk3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tsk3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tsk3.dir/clean

CMakeFiles/tsk3.dir/depend:
	cd /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build /home/p/assignment_ws/src/robotics_software_engineer/module_1_assignment/build/CMakeFiles/tsk3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tsk3.dir/depend

