# Project Timeline **6 Week**

**Created project as**
```
Neural_Engine/
├── include
│   └── matrix.hpp
├── src
│   └── matrix.cpp
├── README.md
├── architechture.md
├── main.cpp
└── test.cpp   <!-- This is test file. -->
```
- Project divide into 6 parts

## Week 1
- Implement the structure of project how file system will use.
- Created `Matrix class` using `1D Vector`

**Operations on Matrix** 
- Creating matrix
- Matrix Addition/Substraction, scalar multiplication, transpose.














```
Neural_Engine/
├── Makefile                (Build instructions and compiler flags)
├── main.cpp                (Entry point: XOR dataset setup, training loop, and evaluation)
├── include/                (Header files: Class definitions and function signatures)
│   ├── matrix.hpp          
│   ├── activations.hpp     
│   ├── layer.hpp           
│   ├── loss.hpp            
│   ├── sequential.hpp      
│   └── optimizer.hpp       
└── src/                    (Source files: Implementation logic)
    ├── matrix.cpp          
    ├── activations.cpp     
    ├── layer.cpp           
    ├── loss.cpp            
    ├── sequential.cpp      
    └── optimizer.cpp
```