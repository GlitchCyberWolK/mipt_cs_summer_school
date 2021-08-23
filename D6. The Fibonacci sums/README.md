# D6. The Fibonacci sums


| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 512Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

The Fibonacci numbers are defined as follows: F1 = 1, F2 = 2, and for n > 2, Fn = Fn - 2 + Fn - 1 is fulfilled. Thus, the beginning of the sequence of Fibonacci numbers looks like this 1, 2, 3, 5, 8, 13, 21, ....
You are given the numbers n and k. It is required to find all ways to represent the number n as a sum of non-decreasing Fibonacci numbers, and each number is allowed to be used no more than k times.

## **Input format**

The first line of input contains the number n (1 ≤ n ≤ 100).
The second line of input contains the number k (1 ≤ k ≤ 20).

## **Output format**

Output all the required views, one per line. Separate the numbers with a " + " sign, do not use spaces.
Partitions should be ordered by the first term, if the first term is equal, by the second, if the first two are equal, by the third, and so on.


| Example    | Output        |
| ------------- |:-------------:|
| 6 2| 1+1+2+2 1+2+3 1+5 3+3|
| 1 1| 1 |




