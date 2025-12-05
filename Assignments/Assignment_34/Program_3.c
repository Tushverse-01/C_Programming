/*

Algorithm

START
    Accept character from user
    Call Display function with the accepted character
    If character is an uppercase alphabet (A-Z, ASCII 65-90):
        Print all characters from the input character up to 'Z' in ascending order.
    Else If character is a lowercase alphabet (a-z, ASCII 97-122):
        Print all characters from the input character down to 'a' in descending order.
    Else:
        Display "Invalid Character"
STOP

*/
////////////////////////////////////////////////////////////////
//
//      Required Header files
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function Name :   Display
//  Description:      Displays characters starting from the input character.
//                    If Uppercase, displays up to 'Z'.
//                    If Lowercase, displays down to 'a'.
//  Input:            char
//  Output:           void (Prints output to screen)
//  Author:           Tushar Vikas Bhore. 
//  Date:             04/12/25 
//
/////////////////////////////////////////////////////////////

void Display(
                        char cChar      //  Input character from the user
                        )
{

    int iCnt = 0;       //  Loop counter and temporary storage for ASCII value

    iCnt = cChar;       //  ASCII value of variable cChar is assigned to iCnt counter

    if( iCnt >= 65 && iCnt <= 122)
    {
        //  Checks if the character is an alphabet (Upper or Lower)
        if ( iCnt >= 65 && iCnt <= 90)
        {
            //  Business Logic: Handles Uppercase characters (A to Z)
            for( iCnt = cChar; iCnt <= 90 ; iCnt++ )
            {

                printf("%c \t",iCnt);

            }

        }
        else if ( iCnt >= 97 && iCnt <= 122)
        {
            //  Business Logic: Handles Lowercase characters (z to a, in reverse)
            for( iCnt = cChar; iCnt >= 97 ; iCnt-- ) // Loop should iterate while iCnt >= 97 for descending order
            {


                if( iCnt >= 97)
                {
                    //  Prints the character
                    printf("%c \t",iCnt);
                }
                // Note: The 'else break' is redundant since the loop condition (iCnt >= 97) handles the exit.
                // It is kept here to match the style/structure of the original code, but the condition is simplified
                // to iCnt >= 97 in the for loop itself to be functionally correct.
                
                else
                {
                    break;
                }
                
            }

        }

    }

    else
    {
        //  Handles Non-alphabet input
        printf("Invalid Character \n");

    }


}   // End of Display Function

////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////

int main()
{
    char cCh = '\0';        //  To Accept User Input, initialized to NULL character

    printf("Enter the character : \t");
    scanf("%c",&cCh);       //  Accepts a single character from the user

    Display(cCh);           //  Method call to perform character display logic

    return 0;               //  Returns success

}   // End of Main Function

////////////////////////////////////////////////////////////////
//
//  Testcases successfully Handaled by the Application
//
//  Input:A      Output:A    B   C   D   E   ... Z
//  Input:M      Output:M    N   O   P   Q   ... Z
//  Input:z      Output:z    y   x   w   v   ... a
//  Input:m      Output:m    l   k   j   i   ... a
//  Input:* Output:Invalid Character
//
////////////////////////////////////////////////////////////////