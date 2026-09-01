#1 Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -Iinclude 

#2 Target Executable name
Target = engine

#3 src files
src = main.cpp src/matrix.cpp src/activations.cpp

#4 objects file
objects = $(src:.cpp=.o)

#5 default build target
all: $(Target)

#6 linking step: combine all .o files into final executable file.
$(Target): $(objects)
	$(CXX) $(CXXFLAGS) -o $(Target) $(objects)

#7 Compilation step: compile each .cpp file into a .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#8 command to build and run immediately
run: $(Target)
	./$(Target)

#9 cleanup command
clean: 
	rm -f $(objects) $(Target)