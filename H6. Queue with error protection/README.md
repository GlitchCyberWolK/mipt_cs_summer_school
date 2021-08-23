# H6. Queue with error protection


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

Write a program that simulates the operation of the queue, implementing all the methods specified here. The program reads a sequence of commands and, depending on the command, performs a particular operation. After executing each command, the program should output one line. Possible commands for the program:

push n-Add the number n to the queue (the value of n is set after the command). The program should output ok.
pop - Remove the first item from the queue. The program should output its value.
The front program should output the value of the first element without deleting it from the queue.
size-The program should output the number of items in the queue.
clear-The program should clear the queue and output ok.
exit-The program should output bye and exit.
It is guaranteed that the set of input commands meets the following requirements: the maximum number of elements in the queue at any time does not exceed 100, all pop and front commands are correct, that is, when they are executed, at least one element is contained in the queue.

Before executing the front and pop operations, the program must check whether there is at least one element in the queue. If the front or pop operation occurs in the input data, and the queue is empty, the program should output the error string instead of a numeric value.

## **Input format**

Enter queue management commands, one per line.

## **Output format**

It is required to output the protocol of working with the queue, one message per line.


| Example    | Output        |
| ------------- |:-------------:|
| push 1 back exit | ok 1 bye|



