/*This program is designed to ask the user a number of terms by which she or he will want to recreate the
 * Fibonacci Numeric Sequence. The sequence per se is an infinite addition, ergo, and infinite loop.
 * Each term is the sum of the previous two terms; parting from 0 (firstTerm) and 1(secondTerm).
 *
 * For this program, the way we are recreating the Fibonacci Succession is with the usage of five variables. The first
 * one is call "terms" and refers to the number of terms of the series that the user wants the program to print. The
 * second and third one are call "firstTerm" and "secondTerm" respectively and hold the values of 0 and 1, respectively,
 * because those are the default starting terms of the succession. The fourth variable is call "newTerm" and refers to
 * the term that comes after the one that has just been printed. The fifth variable is call "i" and makes reference to
 * the position in which our program will start to print the succession. As default value, "i" has the value of 3 since
 * the first and second term are the values of the variables "firstTerm" and "secondTerm". As a condition for the "for"
 * loop cycle, "i" cannot be smaller than or equal to 3 because then the values will collide with the default ones and
 * the succession will not be printed correctly. Also, since the next term has to be printed next to the previous value
 * the post-incrementation value of the for is the new value of the variable "i" (++i).
 *
 * Author: Soraya Lizeth Maqueda Gutiérrez
 * Date: 31/August/2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>

int main() {
    int terms; //The number of terms that the user wants to print of the succession.
    int firstTerm; //The first term of the series has as default values 0.
    int secondTerm; //The second term of the series has as default value 1.
    int newTerm; //This term is the result of adding the previous two terms in the succession.
    firstTerm = 0; //Necessary value to start the sequence.
    secondTerm = 1; //Necessary value to start the sequence.

    printf ("Tell me how long you want the Succession to be:\n"); //Here we ask the user how long does he want the sequence to be.
    scanf ("%i", &terms); //This saves the value entered by the user into the variable terms.
    printf("0, 1"); //This lines prints the first two values which are by default 0 then 1.

    for (int i=3; i<=terms; ++i) { //This begins the loop cycle in which the terms that are to be displayed will be calculates following the Fibonacci Sequence Formula.

        newTerm = firstTerm + secondTerm; //The value of the new term is the addition of the previous two terms.
        printf(", %i", newTerm);
        firstTerm = secondTerm; //Therefore the values assigned to the first term passes on to the second.
        secondTerm = newTerm; //And just the same the value that was assigned to the first term goes to the second.
    }
}