 /*************************************************************************
 *                   Mureithi David Wachira                               *
 *                   P15/2204/2011                                        *
 *                                                                        *
 *                   University of Nairobi                                *
 *                   School of Computing & Informatics                    *
 *                                                                        *
 *                   Course: DATA STRUCTURES AND ALGORITHMS   (CSC 211)   *
 *                   Date:   Thursday 19th September 2013                 *
 *                                                                        *
 *                   A program to print the fibonacci number  			  *
 *					 series                                               *
 *                                                                        *
 *************************************************************************/

 #include<stdio.h> /* C Standard Input and Output Library*/

 /*Variable declarations*/
 int number_of_terms;
 int pre_term = 0;
 int post_term = 1;
 int next_transition;
 int loop_counter;


int main(void)/* The main method*/
{
    /* Brief detail on the screen about the program*/
    printf(" /*************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Course: DATA STRUCTURES AND ALGORITHMS   (CSC 211)   *\n *                   Date:   Thursday 19th September 2013                 *\n *                                                                        *\n *                   A program to print the fibonacci number  		  *\n *					 series                           *\n *                                                                        *\n *************************************************************************/\n");

   printf("\nPlease enter the number of terms\n");/* Prompt to instruct user to enter an integer*/
   scanf("%d",&number_of_terms);/* Capture of the integer by the system using function scanf()*/

   printf("\n\n");/* Skipping two lines*/

   for ( loop_counter = 0 ; loop_counter < number_of_terms ; loop_counter++ )
   {
      if ( loop_counter <= 1 )
         next_transition = loop_counter;

      else
      {
         next_transition = pre_term + post_term;
         pre_term = post_term;
         post_term = next_transition;
      }
      printf("%d\t",next_transition);
   }
      printf("\n\n");/* Skipping two lines*/

   return 0;
}
