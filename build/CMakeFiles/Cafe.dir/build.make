# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ptumulty/Developer/GitHub/Cafe_plusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ptumulty/Developer/GitHub/Cafe_plusplus/build

# Include any dependencies generated for this target.
include CMakeFiles/cafe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cafe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cafe.dir/flags.make

CMakeFiles/cafe.dir/src/main.cpp.o: CMakeFiles/cafe.dir/flags.make
CMakeFiles/cafe.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cafe.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cafe.dir/src/main.cpp.o -c /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/main.cpp

CMakeFiles/cafe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cafe.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/main.cpp > CMakeFiles/cafe.dir/src/main.cpp.i

CMakeFiles/cafe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cafe.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/main.cpp -o CMakeFiles/cafe.dir/src/main.cpp.s

CMakeFiles/cafe.dir/src/cafe.cpp.o: CMakeFiles/cafe.dir/flags.make
CMakeFiles/cafe.dir/src/cafe.cpp.o: ../src/cafe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cafe.dir/src/cafe.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cafe.dir/src/cafe.cpp.o -c /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/cafe.cpp

CMakeFiles/cafe.dir/src/cafe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cafe.dir/src/cafe.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/cafe.cpp > CMakeFiles/cafe.dir/src/cafe.cpp.i

CMakeFiles/cafe.dir/src/cafe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cafe.dir/src/cafe.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/cafe.cpp -o CMakeFiles/cafe.dir/src/cafe.cpp.s

CMakeFiles/cafe.dir/src/interface.cpp.o: CMakeFiles/cafe.dir/flags.make
CMakeFiles/cafe.dir/src/interface.cpp.o: ../src/interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cafe.dir/src/interface.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cafe.dir/src/interface.cpp.o -c /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/interface.cpp

CMakeFiles/cafe.dir/src/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cafe.dir/src/interface.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/interface.cpp > CMakeFiles/cafe.dir/src/interface.cpp.i

CMakeFiles/cafe.dir/src/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cafe.dir/src/interface.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/interface.cpp -o CMakeFiles/cafe.dir/src/interface.cpp.s

CMakeFiles/cafe.dir/src/item.cpp.o: CMakeFiles/cafe.dir/flags.make
CMakeFiles/cafe.dir/src/item.cpp.o: ../src/item.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cafe.dir/src/item.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cafe.dir/src/item.cpp.o -c /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/item.cpp

CMakeFiles/cafe.dir/src/item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cafe.dir/src/item.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/item.cpp > CMakeFiles/cafe.dir/src/item.cpp.i

CMakeFiles/cafe.dir/src/item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cafe.dir/src/item.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ptumulty/Developer/GitHub/Cafe_plusplus/src/item.cpp -o CMakeFiles/cafe.dir/src/item.cpp.s

# Object files for target cafe
cafe_OBJECTS = \
"CMakeFiles/cafe.dir/src/main.cpp.o" \
"CMakeFiles/cafe.dir/src/cafe.cpp.o" \
"CMakeFiles/cafe.dir/src/interface.cpp.o" \
"CMakeFiles/cafe.dir/src/item.cpp.o"

# External object files for target cafe
cafe_EXTERNAL_OBJECTS =

cafe: CMakeFiles/cafe.dir/src/main.cpp.o
cafe: CMakeFiles/cafe.dir/src/cafe.cpp.o
cafe: CMakeFiles/cafe.dir/src/interface.cpp.o
cafe: CMakeFiles/cafe.dir/src/item.cpp.o
cafe: CMakeFiles/cafe.dir/build.make
cafe: CMakeFiles/cafe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable cafe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cafe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cafe.dir/build: cafe

.PHONY : CMakeFiles/cafe.dir/build

CMakeFiles/cafe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cafe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cafe.dir/clean

CMakeFiles/cafe.dir/depend:
	cd /Users/ptumulty/Developer/GitHub/Cafe_plusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ptumulty/Developer/GitHub/Cafe_plusplus /Users/ptumulty/Developer/GitHub/Cafe_plusplus /Users/ptumulty/Developer/GitHub/Cafe_plusplus/build /Users/ptumulty/Developer/GitHub/Cafe_plusplus/build /Users/ptumulty/Developer/GitHub/Cafe_plusplus/build/CMakeFiles/cafe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cafe.dir/depend

