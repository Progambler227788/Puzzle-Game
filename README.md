# Puzzle-Game-in-C-
The given code is an implementation of a word search puzzle solver in C++. It takes a 10x10 grid of characters as input and allows the user to enter a word to search for. The program then searches for the word in the grid, and if found, it prints the row and column

Word Search Puzzle Solver
This is a simple program written in C++ that allows you to find a word in a 10x10 word search puzzle. It uses recursion to search for the word horizontally and vertically.

Requirements
To run this program, you will need to have a C++ compiler installed on your computer.

How to use
Clone or download the source code from the GitHub repository.
Open the project in your C++ IDE.
Run the program.
Enter the word you want to search for.
The program will search for the word horizontally and vertically in the puzzle.
If the word is found, the program will display the row and column where it was found and its direction.
If the word is not found, the program will display a message stating that it was not found.

Example:
Your grid is :
a s j l i x a p e
j h b x e e n p p
h o t t h b s w y
r o a i n u y z h
p t f x r d z k q
t p n l q o y j y
a n h a p f g b g
h x a s h w a b s
a b c d e f m c e
x y e u p d q b a
Enter word to find : hot
h o t
Found At Row : 2 and Column : 1
Direction : Vertical


Limitations
The program can only search for words horizontally and vertically.
The program is case-sensitive, so it will only find words that match exactly in case.
The program assumes that the puzzle is a 10x10 grid.
The program does not check for the validity of the puzzle, so it may crash if the puzzle is not valid.
Conclusion
This program is a simple demonstration of how recursion can be used to search for words in a puzzle. 
It can be improved by adding more features such as searching diagonally, making it case-insensitive, and checking for the validity of the puzzle.
