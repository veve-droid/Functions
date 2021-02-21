# Functions
Functions Galore + Once more, with Functions

/////////////////////////// Functions Galore ///////////////////////////
Implement the following functions. 

int logBase10Estimate(int n) - returns the log of a number base 10. Just give the integer part. Example: n = 1002, ans = 3; n = 54, ans = 1; n = 456789, ans = 5

int floor(float x) - returns the biggest integer less than x.

int ceiling(float x) - returns the smallest integer greater than x.

int isAlNum(char ch) - returns true if the character is a letter or a digit, false otherwise.

int isAlpha(char ch) - returns true if the character is a letter, false otherwise.

int isUpper(char ch) - returns true if the character is an uppercase letter, false otherwise.

int isLower(char ch) - returns true if the character is a lowercase letter, false otherwise.

char toUpper(char ch) - returns the uppercase equivalent if the character is a lower case letter, otherwise, return the character itself.

char toLower(char ch) - - returns the lower case equivalent if the character is an uppercase letter, otherwise, return the character itself.

int isPunctuation(char ch) - returns true if ch is a punctuation, false otherwise. For the purpose of this exercise, we only consider the following as punctuation marks: period, comma, semi-colon, colon, question mark, and the exclamation point. 

int toInteger(char st[]) - returns the integer equivalent of st. Assume that st is a valid numerical string.

float toFloat(char st[]) - returns the float equivalent of st. Assume that st is a valid string representation of a float value.

int abs(int x) - returns the absolute value of x.

void stringCopy(char src[], char dest[]) - copies the contents of src to dest character by character.

bool substring(char s1[], char s2[]) - returns true if s2 is a substring of s1, false otherwise.

int stringCompare(char s1[], char s2[]) - returns 0 if s1 and s2 are the same, -1 if s1 comes before s2 in dictionary ordering and 1 if s1 comes after s2 in dictionary ordering.

void camelCase(char st[]) - displays st in camel case. The characters are displayed in upper case and lower case alternately. Example: st = "apple", output = "ApPlE"

void reverse(char st[]) - reverses the contents of the string. Do not use a temporary string.

bool humbleNumber(int x) - determines if x is a humble number or not. A number whose only prime factors are 2, 3, 5 or 7. 1 is an exception (it is considered humble). The following are the first 20 humble numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 16, 18, 20, 21, 24, 25, 27.

int reverse(int x) - returns the reverse equivalent of a number. Sample: if x = 158, return 851.



/////////////////////////// Once more, with Functions ///////////////////////////
Prompt the user with a menu with the following items:

Perfect Number or Not

X Raised to Y

Factorial

Fibonacci

Summation

Decimal to Octal

Exit


For all items, implement functions that will perform the desired task. Inputs should be asked in the main function and computations should be done in the functions. Items 5 and 6 should be implemented recursively.


For item 1, ask the user to enter a positive number and determine if it is a perfect number or not. Refer to your notes.


For item 2, ask the user to enter two integers, x and y.  Compute and display for the power when x is raised to y.  Note that for this problem, x and y are integers.


For item 3, ask the user to enter a non-negative number, say n.  Compute and display for the factorial of n. Sample: The factorial of 5 (written as 5!) is 5*4*3*2*1 which is 120.


For item 4, ask the user to enter a positive number, say n.  Display the nth element in the Fibonacci sequence.


For item 5, ask the user to enter a positive number, say n.  Compute for the summation from 1 to n. Implement this recursively.


For item 6, ask the user to enter a positive number, say n.  Display its equivalent in octal. Implement this recursively.


For item 7, terminates the program.
