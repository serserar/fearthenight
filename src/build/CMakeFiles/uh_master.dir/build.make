# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/serserar/projects/cpp/undeadhunter/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/serserar/projects/cpp/undeadhunter/src/build

# Include any dependencies generated for this target.
include CMakeFiles/uh_master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uh_master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uh_master.dir/flags.make

CMakeFiles/uh_master.dir/shared/crypto.cpp.o: CMakeFiles/uh_master.dir/flags.make
CMakeFiles/uh_master.dir/shared/crypto.cpp.o: ../shared/crypto.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uh_master.dir/shared/crypto.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uh_master.dir/shared/crypto.cpp.o -c /home/serserar/projects/cpp/undeadhunter/src/shared/crypto.cpp

CMakeFiles/uh_master.dir/shared/crypto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uh_master.dir/shared/crypto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serserar/projects/cpp/undeadhunter/src/shared/crypto.cpp > CMakeFiles/uh_master.dir/shared/crypto.cpp.i

CMakeFiles/uh_master.dir/shared/crypto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uh_master.dir/shared/crypto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serserar/projects/cpp/undeadhunter/src/shared/crypto.cpp -o CMakeFiles/uh_master.dir/shared/crypto.cpp.s

CMakeFiles/uh_master.dir/shared/stream.cpp.o: CMakeFiles/uh_master.dir/flags.make
CMakeFiles/uh_master.dir/shared/stream.cpp.o: ../shared/stream.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/uh_master.dir/shared/stream.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uh_master.dir/shared/stream.cpp.o -c /home/serserar/projects/cpp/undeadhunter/src/shared/stream.cpp

CMakeFiles/uh_master.dir/shared/stream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uh_master.dir/shared/stream.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serserar/projects/cpp/undeadhunter/src/shared/stream.cpp > CMakeFiles/uh_master.dir/shared/stream.cpp.i

CMakeFiles/uh_master.dir/shared/stream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uh_master.dir/shared/stream.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serserar/projects/cpp/undeadhunter/src/shared/stream.cpp -o CMakeFiles/uh_master.dir/shared/stream.cpp.s

CMakeFiles/uh_master.dir/shared/tools.cpp.o: CMakeFiles/uh_master.dir/flags.make
CMakeFiles/uh_master.dir/shared/tools.cpp.o: ../shared/tools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/uh_master.dir/shared/tools.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uh_master.dir/shared/tools.cpp.o -c /home/serserar/projects/cpp/undeadhunter/src/shared/tools.cpp

CMakeFiles/uh_master.dir/shared/tools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uh_master.dir/shared/tools.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serserar/projects/cpp/undeadhunter/src/shared/tools.cpp > CMakeFiles/uh_master.dir/shared/tools.cpp.i

CMakeFiles/uh_master.dir/shared/tools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uh_master.dir/shared/tools.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serserar/projects/cpp/undeadhunter/src/shared/tools.cpp -o CMakeFiles/uh_master.dir/shared/tools.cpp.s

CMakeFiles/uh_master.dir/engine/command.cpp.o: CMakeFiles/uh_master.dir/flags.make
CMakeFiles/uh_master.dir/engine/command.cpp.o: ../engine/command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/uh_master.dir/engine/command.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uh_master.dir/engine/command.cpp.o -c /home/serserar/projects/cpp/undeadhunter/src/engine/command.cpp

CMakeFiles/uh_master.dir/engine/command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uh_master.dir/engine/command.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serserar/projects/cpp/undeadhunter/src/engine/command.cpp > CMakeFiles/uh_master.dir/engine/command.cpp.i

CMakeFiles/uh_master.dir/engine/command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uh_master.dir/engine/command.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serserar/projects/cpp/undeadhunter/src/engine/command.cpp -o CMakeFiles/uh_master.dir/engine/command.cpp.s

CMakeFiles/uh_master.dir/engine/master.cpp.o: CMakeFiles/uh_master.dir/flags.make
CMakeFiles/uh_master.dir/engine/master.cpp.o: ../engine/master.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/uh_master.dir/engine/master.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uh_master.dir/engine/master.cpp.o -c /home/serserar/projects/cpp/undeadhunter/src/engine/master.cpp

CMakeFiles/uh_master.dir/engine/master.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uh_master.dir/engine/master.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serserar/projects/cpp/undeadhunter/src/engine/master.cpp > CMakeFiles/uh_master.dir/engine/master.cpp.i

CMakeFiles/uh_master.dir/engine/master.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uh_master.dir/engine/master.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serserar/projects/cpp/undeadhunter/src/engine/master.cpp -o CMakeFiles/uh_master.dir/engine/master.cpp.s

# Object files for target uh_master
uh_master_OBJECTS = \
"CMakeFiles/uh_master.dir/shared/crypto.cpp.o" \
"CMakeFiles/uh_master.dir/shared/stream.cpp.o" \
"CMakeFiles/uh_master.dir/shared/tools.cpp.o" \
"CMakeFiles/uh_master.dir/engine/command.cpp.o" \
"CMakeFiles/uh_master.dir/engine/master.cpp.o"

# External object files for target uh_master
uh_master_EXTERNAL_OBJECTS =

uh_master: CMakeFiles/uh_master.dir/shared/crypto.cpp.o
uh_master: CMakeFiles/uh_master.dir/shared/stream.cpp.o
uh_master: CMakeFiles/uh_master.dir/shared/tools.cpp.o
uh_master: CMakeFiles/uh_master.dir/engine/command.cpp.o
uh_master: CMakeFiles/uh_master.dir/engine/master.cpp.o
uh_master: CMakeFiles/uh_master.dir/build.make
uh_master: third_party/libenet.a
uh_master: /usr/lib/x86_64-linux-gnu/libz.so
uh_master: CMakeFiles/uh_master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable uh_master"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uh_master.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uh_master.dir/build: uh_master

.PHONY : CMakeFiles/uh_master.dir/build

CMakeFiles/uh_master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uh_master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uh_master.dir/clean

CMakeFiles/uh_master.dir/depend:
	cd /home/serserar/projects/cpp/undeadhunter/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serserar/projects/cpp/undeadhunter/src /home/serserar/projects/cpp/undeadhunter/src /home/serserar/projects/cpp/undeadhunter/src/build /home/serserar/projects/cpp/undeadhunter/src/build /home/serserar/projects/cpp/undeadhunter/src/build/CMakeFiles/uh_master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uh_master.dir/depend

