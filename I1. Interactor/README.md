# I1. Interactor


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 256Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

Lena leads the development of a testing system that implements interactive tasks.
Before the completion of the next stage of the project, it remains to write a module that determines the final verdict of the system for an interactive task. The final verdict is determined from the task completion code, the interactor verdict and the checker verdict according to the following rules:
Checker verdict and interactor verdict are integers from 0 to 7, inclusive.
The task completion code is an integer between -128 and 127, inclusive.
If the interactor issued verdict 0, the final verdict is 3 if the program terminated with a nonzero code, and the checker verdict otherwise.
If the interactor issued verdict 1, the final verdict is equal to the checker's verdict.
If the interactor returned verdict 4, the final verdict is 3 if the program terminated with a nonzero code, and 4 otherwise.
If the interactor returned verdict 6, the final verdict is 0.
If the interactor returned verdict 7, the final verdict is 1.
In other cases, the final verdict is equal to the verdict of the interactor.
Your task is to implement this module.

## **Input format**

The input file consists of three lines. The first contains an integer
r (−128 ≤ r ≤ 127) - task completion code, in the second - an integer
i (0 ≤ i ≤ 7) - verdict of the interactor, in the third - integer c (0 ≤ c ≤ 7) - verdict of the checker.

## **Output format**

Print one integer from 0 to 7 inclusive - the final verdict of the system.
