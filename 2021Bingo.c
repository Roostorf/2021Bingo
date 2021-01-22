/*****************************************************************
//
//  NAME:        Constantine Peros
//
//  HOMEWORK:    2
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        January 18, 2021
//
//  FILE:        homework2.c
//
//  DESCRIPTION:
//   Homework 2 Making  table that prints a table of even or odd unbers up to a specified number 
//
****************************************************************/

#include <stdio.h>

void user_interface();
void print_bingo();
void make_row();
void top();
void mid();
void bottom();
void new_line();
void random_body();
void free_space();


/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   The main part of the program
//
//  Parameters:    argc (int) : number of arguments
//                 argv (char*[]): array of arguments
//
//  Return values:  0 : success
//
****************************************************************/

int main(int argc, char* argv[])
{
    user_interface();
    return 0;
}

/*****************************************************************
//
//  Function name: user_interface()
//
//  DESCRIPTION:   The part of the program that accepts user input
//
//  Parameters:    none
//
//  Return values:  none
//
****************************************************************/

void user_interface()
{
    char input;
    int run_interface;
    run_interface = 1;
    while (run_interface < 2)
    {
        printf("Welcome to the 2021 Bingo Card  Generator\n");
        printf("Press any key  to continue or (q) to quit\n");
        scanf(" %c", &input);
        if (input == 113)
        {
            run_interface = 3;
        }
        else
        {
            print_bingo();
            printf("Would you like to print another?\n Press (c) to continue or (q) to quit\n");
            printf("Press any key  to continue or (q) to quit\n");
            scanf(" %c", &input);
            if (input == 113)
            {
                run_interface = 3;
            }
            else
            {
                print_bingo();
            }
            
        }
    }
}

/*****************************************************************
//
//  Function name: print_bingo()
//
//  DESCRIPTION:   Prints a 2021 Bingo Card
//
//  Parameters:  none 
//
//  Return values:  none
//
****************************************************************/

void print_bingo()
{
    int i;
    int row;
    
    rows = 5;

    for (i = 0; i < rows; i = i + 1)
    {
        make_row(rows);
    }
}

void make_row(int row)
{
    int counter;
    int i;  
    col = 5;
    counter = 1

    for (i = 0; i < col; i = i + 1)
    {
        top();
        counter = counter + 1
    }

    new_line();

        
    for (i = 0; i < col; i = i + 1)
    {
        mid();
        counter = counter + 1;
    }
   
    new_line();
    
    for (i = 0; i < col; i = i + 1)
    {
        if (counter == (((row * col)/2)+1))
        {
            free_space();
            counter = counter + 1;
        }
        else
        {
            random_body(); 
            counter = counter + 1;
        }  
    }
    
    new_line();

    {
        bottom();
    }

    new_line();
}

void top()
{
    printf(" _______________ ");
}

void mid()
{
    printf("|               |");
}

void bottom()
{
    printf("|_______________|");
}

void new_line()
{
    printf("\n");
}

void free_space()
{
    mid();
    mid(); 
    printf("|  Free  Space  |");
    mid();
    mid();
}

void random_body()
{

    mid();
    mid(); 
    printf("|    Aliens     |");
    mid();
    mid();

}


