# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab26.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab26.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab26.dir/flags.make

CMakeFiles/Lab26.dir/main.c.o: CMakeFiles/Lab26.dir/flags.make
CMakeFiles/Lab26.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lab26.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab26.dir/main.c.o   -c /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/main.c

CMakeFiles/Lab26.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab26.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/main.c > CMakeFiles/Lab26.dir/main.c.i

CMakeFiles/Lab26.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab26.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/main.c -o CMakeFiles/Lab26.dir/main.c.s

CMakeFiles/Lab26.dir/stack_dynamic.c.o: CMakeFiles/Lab26.dir/flags.make
CMakeFiles/Lab26.dir/stack_dynamic.c.o: ../stack_dynamic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Lab26.dir/stack_dynamic.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Lab26.dir/stack_dynamic.c.o   -c /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/stack_dynamic.c

CMakeFiles/Lab26.dir/stack_dynamic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lab26.dir/stack_dynamic.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/stack_dynamic.c > CMakeFiles/Lab26.dir/stack_dynamic.c.i

CMakeFiles/Lab26.dir/stack_dynamic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lab26.dir/stack_dynamic.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/stack_dynamic.c -o CMakeFiles/Lab26.dir/stack_dynamic.c.s

# Object files for target Lab26
Lab26_OBJECTS = \
"CMakeFiles/Lab26.dir/main.c.o" \
"CMakeFiles/Lab26.dir/stack_dynamic.c.o"

# External object files for target Lab26
Lab26_EXTERNAL_OBJECTS =

Lab26: CMakeFiles/Lab26.dir/main.c.o
Lab26: CMakeFiles/Lab26.dir/stack_dynamic.c.o
Lab26: CMakeFiles/Lab26.dir/build.make
Lab26: CMakeFiles/Lab26.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Lab26"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab26.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab26.dir/build: Lab26

.PHONY : CMakeFiles/Lab26.dir/build

CMakeFiles/Lab26.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab26.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab26.dir/clean

CMakeFiles/Lab26.dir/depend:
	cd /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26 /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26 /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug /Users/kot_mapku3/Yandex.Disk.localized/MAI/Informatics/Labs/Lab26/cmake-build-debug/CMakeFiles/Lab26.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab26.dir/depend

