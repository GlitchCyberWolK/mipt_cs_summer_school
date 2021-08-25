# L6. The Drunkard's Game

| Time limit     | 1 second           |
| ------------- |:-------------:|
|  Memory limitation   | 64Mb| 
| Input  | standard input or input.txt | 
| Output | standard output or output.txt | 

In the game of drunkard, the card deck is distributed equally to two players. 
Then they open one top card each, and the one whose card is older takes both of the opened cards, which are placed under the bottom of his deck. 
The one who remains without cards loses.
For simplicity, we assume that all the cards of different denominations, and that the lowest card wins the highest card ("six takes ACE").
The player who takes the cards, first lays underneath your deck map of the first player, then the second player map (i.e. the map of the second player is at the bottom of the deck).
Write a program that simulates a drunkard game and determines who wins. The game involves 10 cards with values from 0 to 9, the larger card defeats the smaller one, the card with a value of 0 defeats the card 9.

## **Input format**

The program receives two lines for input: the first line contains 5 numbers separated by spaces — the numbers of the cards of the first player, the second – similarly 5 cards of the second player. The cards are listed from top to bottom, that is, each row begins with the card that will be opened first.

## **Output format**

The program must determine who wins in this hand, and output the word first or second, and then output the number of moves made before winning. If the game does not end within 106 moves, the program should output the word botva.


| Example    | Output        |
| ------------- |:-------------:|
| 1 3 5 7 9 2 4 6 8 0| second 5|
|2 4 6 8 0 1 3 5 7 9| first 5|
| 1 7 3 9 4 5 8 0 2 6| second 23|



