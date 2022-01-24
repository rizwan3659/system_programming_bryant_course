// The stdio . h library gives us access to printf and scanf .
# include <stdio.h>
// The stdlib . h library gives us access to atoi .
# include <stdlib.h>


int changeNumber ( int number )
{
// Add 15 to the number .
int newNumber = number + 15;
// Multiply the number by 12.
newNumber = newNumber * 12;
// Subtract 15 from the number .
newNumber = newNumber - 15;
// Divide the number by 5. This acts as integer division !
newNumber = newNumber / 5;
// Find the remainder of the number divided by 150.
newNumber = newNumber % 150;
// Return the new number after calculations .
return newNumber ;
}

int main ( int argc , char ** argv )
{
// Create four integer variables .
int one , two , three , four ;
// Alert the user that they have to enter some numbers .
printf (" Enter four integers : ") ;
// Retrieve four integers separated by spaces from stdin .
scanf ("%d %d %d %d" , &one , &two , &three , &four ) ;
// Print the four integers to the screen .
printf ("Numbers Received :%d %d %d %d \n " , one , two , three , four ) ;
// Update each number using the changeNumber function .
one= changeNumber ( one ) ;
two= changeNumber ( two ) ;
three = changeNumber ( three ) ;
four = changeNumber ( four ) ;
// Print the updated numbers to the screen .
printf ( " Updated Numbers: %d %d %d %d \n " , one , two , three , four ) ;
// Create four string variables , each of length 10.
char s1 [10] , s2 [10] , s3 [10] , s4 [10];
// Convert the four integers to strings , stored in our string variables .
printf ( " Converting integers to strings ... " ) ;
sprintf ( s1 , " %d " , one ) ;
sprintf ( s2 , " %d " , two ) ;
sprintf ( s3 , " %d " , three ) ;
sprintf ( s4 , " %d " , four ) ;
printf ( " Done .\n " ) ;
// Print the integers from various sources , including a original integer ,
// a string , and two strings converted back to integers .
printf ( " Testing AtoI Output : %d %s %d %d \n " , atoi(s1) , s2 , atoi(s3) , four ) ;
// Explicit successful exit code 0.
return 0;
}
