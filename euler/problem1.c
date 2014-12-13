#include <stdio.h>
<<<<<<< HEAD
//Store sum of multiples of 3 and 5 below 1000
int sum = 0;
int i = 0;
int main () {
    //Loop through natural numbers below 1000, adding if divisible by 3 or 5
=======

//Store sum of multiples of 3 and 5 below 1000
int sum = 0;

int main () {
    //Loop through natural numbers below 1000, adding if divisible by 3 or 5 
>>>>>>> 1b485dca156058a3c0bac3ccab8b3bde0f905e18
    for (i = 0; i < 1000; i++) {
        //The 'not' symbol makes a quick test for equality, simply flipping
        //the result of the modulo operation, 0, to a truth value, 1.
        if (!(i % 3) || !(i % 5)) {
            sum += i;
        }
    }
<<<<<<< HEAD
    printf  ("%d\n", sum);
=======
    
    puts (sum);
    
>>>>>>> 1b485dca156058a3c0bac3ccab8b3bde0f905e18
    return 0;
}
