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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ghj/DL/C++/cplus/智能指针/shared_unique

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ghj/DL/C++/cplus/智能指针/shared_unique/build

# Include any dependencies generated for this target.
include src/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.dir/flags.make

src/CMakeFiles/main.dir/convert.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/convert.cpp.o: ../src/convert.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ghj/DL/C++/cplus/智能指针/shared_unique/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/main.dir/convert.cpp.o"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/convert.cpp.o -c /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/convert.cpp

src/CMakeFiles/main.dir/convert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/convert.cpp.i"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/convert.cpp > CMakeFiles/main.dir/convert.cpp.i

src/CMakeFiles/main.dir/convert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/convert.cpp.s"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/convert.cpp -o CMakeFiles/main.dir/convert.cpp.s

src/CMakeFiles/main.dir/main.cpp.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ghj/DL/C++/cplus/智能指针/shared_unique/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/main.dir/main.cpp.o"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/main.cpp

src/CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/main.cpp > CMakeFiles/main.dir/main.cpp.i

src/CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ghj/DL/C++/cplus/智能指针/shared_unique/src/main.cpp -o CMakeFiles/main.dir/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/convert.cpp.o" \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

../bin/main: src/CMakeFiles/main.dir/convert.cpp.o
../bin/main: src/CMakeFiles/main.dir/main.cpp.o
../bin/main: src/CMakeFiles/main.dir/build.make
../bin/main: src/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ghj/DL/C++/cplus/智能指针/shared_unique/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/main"
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.dir/build: ../bin/main

.PHONY : src/CMakeFiles/main.dir/build

src/CMakeFiles/main.dir/clean:
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.dir/clean

src/CMakeFiles/main.dir/depend:
	cd /home/ghj/DL/C++/cplus/智能指针/shared_unique/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ghj/DL/C++/cplus/智能指针/shared_unique /home/ghj/DL/C++/cplus/智能指针/shared_unique/src /home/ghj/DL/C++/cplus/智能指针/shared_unique/build /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src /home/ghj/DL/C++/cplus/智能指针/shared_unique/build/src/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.dir/depend

