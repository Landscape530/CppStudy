# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\huang\code\c++\CppStudy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\huang\code\c++\CppStudy\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/homework.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/homework.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework.dir/flags.make

CMakeFiles/homework.dir/class/test_clock.cpp.obj: CMakeFiles/homework.dir/flags.make
CMakeFiles/homework.dir/class/test_clock.cpp.obj: C:/Users/huang/code/c++/CppStudy/class/test_clock.cpp
CMakeFiles/homework.dir/class/test_clock.cpp.obj: CMakeFiles/homework.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\huang\code\c++\CppStudy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework.dir/class/test_clock.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/homework.dir/class/test_clock.cpp.obj -MF CMakeFiles\homework.dir\class\test_clock.cpp.obj.d -o CMakeFiles\homework.dir\class\test_clock.cpp.obj -c C:\Users\huang\code\c++\CppStudy\class\test_clock.cpp

CMakeFiles/homework.dir/class/test_clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/homework.dir/class/test_clock.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\huang\code\c++\CppStudy\class\test_clock.cpp > CMakeFiles\homework.dir\class\test_clock.cpp.i

CMakeFiles/homework.dir/class/test_clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/homework.dir/class/test_clock.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\huang\code\c++\CppStudy\class\test_clock.cpp -o CMakeFiles\homework.dir\class\test_clock.cpp.s

CMakeFiles/homework.dir/class/clock.cpp.obj: CMakeFiles/homework.dir/flags.make
CMakeFiles/homework.dir/class/clock.cpp.obj: C:/Users/huang/code/c++/CppStudy/class/clock.cpp
CMakeFiles/homework.dir/class/clock.cpp.obj: CMakeFiles/homework.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\huang\code\c++\CppStudy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework.dir/class/clock.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/homework.dir/class/clock.cpp.obj -MF CMakeFiles\homework.dir\class\clock.cpp.obj.d -o CMakeFiles\homework.dir\class\clock.cpp.obj -c C:\Users\huang\code\c++\CppStudy\class\clock.cpp

CMakeFiles/homework.dir/class/clock.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/homework.dir/class/clock.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\huang\code\c++\CppStudy\class\clock.cpp > CMakeFiles\homework.dir\class\clock.cpp.i

CMakeFiles/homework.dir/class/clock.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/homework.dir/class/clock.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\huang\code\c++\CppStudy\class\clock.cpp -o CMakeFiles\homework.dir\class\clock.cpp.s

# Object files for target homework
homework_OBJECTS = \
"CMakeFiles/homework.dir/class/test_clock.cpp.obj" \
"CMakeFiles/homework.dir/class/clock.cpp.obj"

# External object files for target homework
homework_EXTERNAL_OBJECTS =

homework.exe: CMakeFiles/homework.dir/class/test_clock.cpp.obj
homework.exe: CMakeFiles/homework.dir/class/clock.cpp.obj
homework.exe: CMakeFiles/homework.dir/build.make
homework.exe: CMakeFiles/homework.dir/linkLibs.rsp
homework.exe: CMakeFiles/homework.dir/objects1.rsp
homework.exe: CMakeFiles/homework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\huang\code\c++\CppStudy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homework.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\homework.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework.dir/build: homework.exe
.PHONY : CMakeFiles/homework.dir/build

CMakeFiles/homework.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\homework.dir\cmake_clean.cmake
.PHONY : CMakeFiles/homework.dir/clean

CMakeFiles/homework.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\huang\code\c++\CppStudy C:\Users\huang\code\c++\CppStudy C:\Users\huang\code\c++\CppStudy\cmake-build-debug C:\Users\huang\code\c++\CppStudy\cmake-build-debug C:\Users\huang\code\c++\CppStudy\cmake-build-debug\CMakeFiles\homework.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/homework.dir/depend

