# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/muhle/DataStructures_git/Lab04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/muhle/DataStructures_git/Lab04/build

# Include any dependencies generated for this target.
include CMakeFiles/runMain.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/runMain.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/runMain.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runMain.dir/flags.make

CMakeFiles/runMain.dir/main.cpp.o: CMakeFiles/runMain.dir/flags.make
CMakeFiles/runMain.dir/main.cpp.o: ../main.cpp
CMakeFiles/runMain.dir/main.cpp.o: CMakeFiles/runMain.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/muhle/DataStructures_git/Lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runMain.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/runMain.dir/main.cpp.o -MF CMakeFiles/runMain.dir/main.cpp.o.d -o CMakeFiles/runMain.dir/main.cpp.o -c /mnt/c/Users/muhle/DataStructures_git/Lab04/main.cpp

CMakeFiles/runMain.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runMain.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/muhle/DataStructures_git/Lab04/main.cpp > CMakeFiles/runMain.dir/main.cpp.i

CMakeFiles/runMain.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runMain.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/muhle/DataStructures_git/Lab04/main.cpp -o CMakeFiles/runMain.dir/main.cpp.s

# Object files for target runMain
runMain_OBJECTS = \
"CMakeFiles/runMain.dir/main.cpp.o"

# External object files for target runMain
runMain_EXTERNAL_OBJECTS =

runMain: CMakeFiles/runMain.dir/main.cpp.o
runMain: CMakeFiles/runMain.dir/build.make
runMain: libapplibrary.so
runMain: CMakeFiles/runMain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/muhle/DataStructures_git/Lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runMain"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runMain.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runMain.dir/build: runMain
.PHONY : CMakeFiles/runMain.dir/build

CMakeFiles/runMain.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runMain.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runMain.dir/clean

CMakeFiles/runMain.dir/depend:
	cd /mnt/c/Users/muhle/DataStructures_git/Lab04/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/muhle/DataStructures_git/Lab04 /mnt/c/Users/muhle/DataStructures_git/Lab04 /mnt/c/Users/muhle/DataStructures_git/Lab04/build /mnt/c/Users/muhle/DataStructures_git/Lab04/build /mnt/c/Users/muhle/DataStructures_git/Lab04/build/CMakeFiles/runMain.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runMain.dir/depend

