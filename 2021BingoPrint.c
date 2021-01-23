#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 18

#define ROWS 5
#define COLS 5
#define TEXT_LINES 3

int main(int argc, char* argv[])
{
    char body_text[(ROWS * COLS * TEXT_LINES)][MAX_STRING_SIZE] =
    { 
        "|      UFO      |",
        "|       or      |",
        "|     Aliens    |",
        "|               |",
        "|    Nuclear    |",
        "|      War      |",
        "|               |",
        "|     Famine    |",
        "|               |",
        "|               |",
        "|    Flooding   |",
        "|               |",
        "|               |",
        "|     COVID     |",
        "|      over     |",
        "|               |",
        "|      New      |",
        "|     Disease   |",
        "|     text19    |",
        "|     text20    |",
        "|     text21    |",
        "|     text22    |",
        "|     text23    |",
        "|     text24    |",
        "|     text0     |",
        "|     text1     |",
        "|     text2     |",
        "|     text3     |",
        "|     text4     |",
        "|     text5     |",
        "|     text6     |",
        "|     text7     |",
        "|     text8     |",
        "|               |",
        "|  Assassinaton |",
        "|               |",
        "|      2021     |",
        "|  Free  Space  |",
        "|      Bingo    |",
        "|     text15    |",
        "|     text16    |",
        "|     text17    |",
        "|     text19    |",
        "|     text20    |",
        "|     text21    |",
        "|     text22    |",
        "|     text23    |",
        "|     text24    |",        
        "|     text0     |",
        "|     text1     |",
        "|     text2     |",
        "|     text3     |",
        "|     text4     |",
        "|     text5     |",
        "|     text6     |",
        "|     text7     |",
        "|     text8     |",
        "|     text9     |",
        "|     text10    |",
        "|     text11    |",
        "|     text12    |",
        "|     text13    |",
        "|     text14    |",
        "|     text15    |",
        "|     text16    |",
        "|     text17    |",
        "|     text19    |",
        "|     text20    |",
        "|     text21    |",
        "|     text22    |",
        "|     text23    |",
        "|     text24    |",
        "|     text1     |",
        "|     text2     |",
        "|     text3     |"
    };
    
    char top[MAX_STRING_SIZE] = " _______________ ";
    char mid[MAX_STRING_SIZE] = "|               |";
    char bot[MAX_STRING_SIZE] = "|_______________|";
    
    int print_me;
    int row_count;

    print_me = 0;
    row_count = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for(int i = 0; i < COLS; i++)
	    {
		    printf("%s", top);
	    }
	    printf("\n");
	        
	    for(int i = 0; i < COLS ; i++)
	    {
		    printf("%s", mid);
	    }
	    printf("\n");
	       
	    for (int i = 0; i < TEXT_LINES; i++)
	    {
		    for (int i = 0; i < COLS; i++)
		    {
		         printf("%s", body_text[print_me]);
		         print_me = print_me + TEXT_LINES;
		    }
	  	    printf("\n");
		    print_me = (print_me - (TEXT_LINES * COLS)) + 1;
	     }
	         
	     for(int i = 0; i < COLS ; i++)
	     {
		     printf("%s", bot);
		 }
	     printf("\n");
	     
	     row_count = row_count + 1;
	     print_me = TEXT_LINES * COLS * row_count;
    }
    printf("%d",print_me);
}







