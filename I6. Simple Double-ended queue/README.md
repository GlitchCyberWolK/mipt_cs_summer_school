# I6. Simple Double-ended queue


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

Write a program that simulates the operation of the soundboard, implementing all the methods listed here. The program reads a sequence of commands and, depending on the command, performs a particular operation. After executing each command, the program should output one line. Possible commands for the program:

push_front - Add a new element to the beginning of the soundboard. The program should output ok.
push_back - Add a new element to the end of the deck. The program should output ok.
pop_front-Extract the first element from the soundboard. The program should output its value.
pop_back-Extract the last element from the soundboard. The program should output its value.
front-Find out the value of the first element (without deleting it). The program should output its value.
back-Find out the value of the last element (without deleting it). The program should output its value.
size-Print the number of elements in the deck.
clear-Clear the deck (remove all elements from it) and output ok.
exit-The program should output bye and exit.
It is guaranteed that the number of elements in the deck at any time does not exceed 100. All operations pop_front, pop_back, front, back are always correct.

## **Input format**

Enter the double-ended queue management commands, one per line.

## **Output format**

It is required to output the protocol of working with the double-ended queue, one message per line.


| Example    | Output        |
| ------------- |:-------------:|
| push 1 back exit | ok 1 bye|



