# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sinux/Desktop/geant4/test/mySim/mytest1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myTest1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myTest1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myTest1.dir/flags.make

CMakeFiles/myTest1.dir/myTest1.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/myTest1.cc.o: ../myTest1.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myTest1.dir/myTest1.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/myTest1.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/myTest1.cc

CMakeFiles/myTest1.dir/myTest1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/myTest1.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/myTest1.cc > CMakeFiles/myTest1.dir/myTest1.cc.i

CMakeFiles/myTest1.dir/myTest1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/myTest1.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/myTest1.cc -o CMakeFiles/myTest1.dir/myTest1.cc.s

CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o: ../src/MyActionInitialization.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyActionInitialization.cc

CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyActionInitialization.cc > CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.i

CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyActionInitialization.cc -o CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.s

CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o: ../src/MyDetectorConstruction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyDetectorConstruction.cc

CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyDetectorConstruction.cc > CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.i

CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyDetectorConstruction.cc -o CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.s

CMakeFiles/myTest1.dir/src/MyEventAction.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyEventAction.cc.o: ../src/MyEventAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myTest1.dir/src/MyEventAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyEventAction.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyEventAction.cc

CMakeFiles/myTest1.dir/src/MyEventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyEventAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyEventAction.cc > CMakeFiles/myTest1.dir/src/MyEventAction.cc.i

CMakeFiles/myTest1.dir/src/MyEventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyEventAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyEventAction.cc -o CMakeFiles/myTest1.dir/src/MyEventAction.cc.s

CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o: ../src/MyPhysicsList.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPhysicsList.cc

CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPhysicsList.cc > CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.i

CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPhysicsList.cc -o CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.s

CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o: ../src/MyPrimaryGeneratorAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPrimaryGeneratorAction.cc

CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPrimaryGeneratorAction.cc > CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.i

CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyPrimaryGeneratorAction.cc -o CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.s

CMakeFiles/myTest1.dir/src/MyRunAction.cc.o: CMakeFiles/myTest1.dir/flags.make
CMakeFiles/myTest1.dir/src/MyRunAction.cc.o: ../src/MyRunAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/myTest1.dir/src/MyRunAction.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myTest1.dir/src/MyRunAction.cc.o -c /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyRunAction.cc

CMakeFiles/myTest1.dir/src/MyRunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myTest1.dir/src/MyRunAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyRunAction.cc > CMakeFiles/myTest1.dir/src/MyRunAction.cc.i

CMakeFiles/myTest1.dir/src/MyRunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myTest1.dir/src/MyRunAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sinux/Desktop/geant4/test/mySim/mytest1/src/MyRunAction.cc -o CMakeFiles/myTest1.dir/src/MyRunAction.cc.s

# Object files for target myTest1
myTest1_OBJECTS = \
"CMakeFiles/myTest1.dir/myTest1.cc.o" \
"CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o" \
"CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o" \
"CMakeFiles/myTest1.dir/src/MyEventAction.cc.o" \
"CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o" \
"CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o" \
"CMakeFiles/myTest1.dir/src/MyRunAction.cc.o"

# External object files for target myTest1
myTest1_EXTERNAL_OBJECTS =

myTest1: CMakeFiles/myTest1.dir/myTest1.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyActionInitialization.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyDetectorConstruction.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyEventAction.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyPhysicsList.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyPrimaryGeneratorAction.cc.o
myTest1: CMakeFiles/myTest1.dir/src/MyRunAction.cc.o
myTest1: CMakeFiles/myTest1.dir/build.make
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4Tree.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4GMocren.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4visHepRep.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4RayTracer.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4VRML.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4OpenGL.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4OpenInventor.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4interfaces.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4persistency.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4error_propagation.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4readout.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4physicslists.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4parmodels.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4FR.so
myTest1: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.12.8
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4gl2ps.so
myTest1: /usr/lib/x86_64-linux-gnu/libGLU.so
myTest1: /usr/lib/x86_64-linux-gnu/libGL.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4vis_management.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4modeling.so
myTest1: /usr/lib/x86_64-linux-gnu/libXmu.so
myTest1: /usr/lib/x86_64-linux-gnu/libXext.so
myTest1: /usr/lib/x86_64-linux-gnu/libXm.so
myTest1: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.12.8
myTest1: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
myTest1: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
myTest1: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
myTest1: /usr/lib/x86_64-linux-gnu/libXt.so
myTest1: /usr/lib/x86_64-linux-gnu/libSM.so
myTest1: /usr/lib/x86_64-linux-gnu/libICE.so
myTest1: /usr/lib/x86_64-linux-gnu/libX11.so
myTest1: /usr/local/lib/libCoin.so
myTest1: /usr/lib/x86_64-linux-gnu/libGL.so
myTest1: /usr/lib/x86_64-linux-gnu/libGLU.so
myTest1: /usr/local/lib/libSoXt.so
myTest1: /usr/lib/x86_64-linux-gnu/libXm.so
myTest1: /usr/lib/x86_64-linux-gnu/libSM.so
myTest1: /usr/lib/x86_64-linux-gnu/libICE.so
myTest1: /usr/lib/x86_64-linux-gnu/libX11.so
myTest1: /usr/lib/x86_64-linux-gnu/libXext.so
myTest1: /usr/lib/x86_64-linux-gnu/libXpm.so
myTest1: /usr/lib/x86_64-linux-gnu/libxerces-c.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4run.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4event.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4tracking.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4processes.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4analysis.so
myTest1: /usr/lib/x86_64-linux-gnu/libz.so
myTest1: /usr/lib/x86_64-linux-gnu/libexpat.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4digits_hits.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4track.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4particles.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4geometry.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4materials.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4graphics_reps.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4intercoms.so
myTest1: /home/sinux/Desktop/geant4/install/lib/libG4global.so
myTest1: /usr/local/lib/libCLHEP-2.4.1.3.so
myTest1: CMakeFiles/myTest1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable myTest1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myTest1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myTest1.dir/build: myTest1

.PHONY : CMakeFiles/myTest1.dir/build

CMakeFiles/myTest1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myTest1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myTest1.dir/clean

CMakeFiles/myTest1.dir/depend:
	cd /home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sinux/Desktop/geant4/test/mySim/mytest1 /home/sinux/Desktop/geant4/test/mySim/mytest1 /home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug /home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug /home/sinux/Desktop/geant4/test/mySim/mytest1/cmake-build-debug/CMakeFiles/myTest1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myTest1.dir/depend

