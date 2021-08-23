# F6. Stack with error protection


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

Write a program that simulates the operation of the stack. The program reads a sequence of commands and, depending on the command, performs a particular operation. After executing each command, the program should output one line. Possible commands for the program:

push n-Add the number n to the stack (the value of n is set after the command). The program should output ok.
pop-Remove the last element from the stack. The program should output its value.
The back program should output the value of the last element without removing it from the stack.
size-The program should output the number of elements in the stack.
clear-The program should clear the stack and output ok.
exit-The program should output bye and exit.

**Before executing the back and pop operations, the program must check whether there is at least one element in the stack. If a back or pop operation occurs in the input data, and the stack is empty, the program should output the error string instead of a numeric value.**

## **Input format**

Stack management commands are entered in the format described earlier, 1 per line.
It is guaranteed that the set of input commands meets the following requirements: the maximum number of elements in the stack at any time does not exceed 100, all pop and back commands are correct, that is, when they are executed, at least one element is contained in the stack.

## **Output format**

It is required to output the protocol of working with the stack, 1 message per line.


| Example    | Output        |
| ------------- |:-------------:|
| push 1 back exit | ok 1 bye|



