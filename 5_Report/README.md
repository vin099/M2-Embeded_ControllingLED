# Requirements
# Introduction
  LED is a semiconductor device used in many electronic devices, mostly used for indication purposes. It is used widely as indicator during test for checking the validity of results at different stages.

It is very cheap and easily available in variety of shape, color and size. The LEDs are also used in designing of message display boards and traffic control signal lights etc.
# Objective
   The main objective is to control the led using ATmega328.
# Components used
1.ATmega328   

2.Two LED 

3.Controller

4.Resistor
# software used
1.simulIDe

2.Visual Studie Code


# Features
   It has simple features.
       
    1.It can switch off the LED's when controller is in off state.
    2.It can switch on the LED's when controller is in on state.
# 4W's and 1 H's
   ## Why
    1.To control two LED's using a switch in ATmega328.
    2.To understand basic concepts in ATmega328.
   ## Where
    1. It can be used anywhere.
    2. Connect the LED controller to the LED strip light.
   ## Who
    1.It can be used by students.
    2.It can be used by anyone who are new to embedded programming language.
   ## When
    1.People are trying to learn an embedded programming language.
    2.In schools and colleges it can be implemented.
   ## How
    1.A device that can convert incoming AC power to the proper DC voltage, and regulate the current flowing through
    the LED during operation.
    2.By using softwares to exceute the program.
    
# SWOT Analysis
   ## Strengths
    1.Simple program to understand.
    2.Cost effective.
   ## Weakness
    1.Basic program.
   ## Opportunities
    1.Program can be made more complex by adding more components.
   ## Threats
    1.There are advanced programs which are simple to learn is out already.
# High Level Requirements
| Id    	| Description     	| Status      	|
|-------	|-----------------	|-------------	|
| HLR_1 	| Microcontroller 	| Implemented 	|
| HlR_2 	| controller        | Implemented 	|
| HLR_3 	| Two LED         	| Implemented 	|
| HLR_4 	| Software        	| Implemented 	|
# Low Level Requirements
| Id    	| Description              	| Status      	|
|-------	|--------------------------	|-------------	|
| LLR_1 	| ATmega328                	| Implemented 	|
| LLR_2 	| controller               	| Implemented 	|
| LLR_3 	| Two LED                  	| Implemented 	|
| LLR_4 	| Visual studio & SimulIDE 	| Implemented 	|

# Design
1.This project uses ATmega328.
 
2.This system uses swtich to blink LED.

# Behavior Diagram
![Behavior Diagram](https://user-images.githubusercontent.com/94450629/144365752-daf119ac-7681-4c36-b8d0-be3bf86e8102.jpeg)
# Structural Diagram
![Structural Diagram](https://user-images.githubusercontent.com/94450629/144365791-074fe81e-f995-4336-9d72-a63a8dc2043e.jpeg)
# Block Diagram
![Block Diagram](https://user-images.githubusercontent.com/94450629/144365818-23711a6b-0e17-4b6d-ae23-a79719deb60d.jpeg)
# Simulation



# Implementation
## Folder Structure
| Folder   |      Description     |
|----------|:-------------:|
| document | Doxygen documentation |
| inc | All header files |
| simulation | simulation files |
| src | Main source code for controllingLED |

# Test Plan
# High Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| HLR_1 	| Controller On   	| High power   	| LED On       	| LED On     	| Rquirement   	|
| HLR_2 	| Controller Off  	| No power     	| LED Off      	| LED Off    	| Requirement  	|
# Low Level Requirement
| Id    	| Description 	| Expected I/P 	| Expected O/P 	| Actual O/P 	| Type Of Test 	|
|-------	|-------------	|--------------	|--------------	|:----------:	|--------------	|
| LLR_1 	| Controller On   	| value 1      	| LED On       	| LED On     	| Rquirement   	|
| LLR_2 	| Controller Off  	| value 0      	| LED Off      	| LED Off    	| Requirement  	|
