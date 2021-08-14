# M3. Tolya-Carp is shocked by snails


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

Tolya-Carp does not have a lot of snails (n pieces). Each snail has its own fixed weight ai (where).
Tolya karp allocated a place for two groups of snails:
1) sorted in non-ascending order;
2) in the order in which they are initially.
The first group is empty, and in the second there are all the snails. Each time, Tolya-Carp looks through all the snails of the second group, if the current snail is heavier than the one that is ahead of the second group, then Tolya-Karp swaps them. After that, the Carp moves the very first snail of the second group to the end of the first group.
After Tolya-Karp performed these actions n-1 times, he admitted to you that he forgot what the first and second groups looked like at each step of his algorithm. Help Tolya-Karp, write him a program that displays the state of groups of snails at each step.

## **Input format**

In the first line, you are given the number n-the number of snails (1 ≤ n ≤ 1000). The second one shows the weight of each of the snails (1 ≤ ai ≤ 109).

## **Output format**

Print n-1 lines in each of which are separated by a space:
1) algorithm step;
2) the weight of snails in the first group;
3) the weight of snails in the second group;

| Example    | Output        |
| ------------- |:-------------:|
|  5 18 1 9 8 10| 1 18 1 9 8 10  2 18 10 1 8 9  3 18 10 9 1 8 4 18 10 9 8 1 |
| 5 1 2 3 4 5| 1 5 1 2 3 4 2 5 4 1 2 3 3 5 4 3 1 2 4 5 4 3 2 1|



