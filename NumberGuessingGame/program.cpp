#include <iostream>
#include <stdlib.h>    
#include <time.h>  

using namespace std;
int generated_number(int &max);


int main() 
{
    cout << "Welcome to a guessing game" << endl;
    while (true)
    {
        int max_value, play_again, choice;
        
        cout << "Choose the max number for randomizer (0 - max)\nUser: ";
        cin >> max_value;
        int bot_choice = generated_number(max_value);
        //cout << "Bot chosen: " << bot_choice << endl; // Remove comment to print bot choice

        cout << "Choose a number between 0-" << max_value << "\nUser: ";
        cin >> choice;

        while (bot_choice != choice)
        {
            cout << "Wrong answer\nUser: ";
            cin >> choice;
        }

        if (bot_choice == choice)
        {
            cout << "You won!\nPlay again?\n1- Yes\n2- No\nUser: ";
            cin >> play_again;
        }

        if (play_again == 2)
        {
            cout << "Goodbye!\n";
            exit(EXIT_SUCCESS);
        }
    }
}

int generated_number(int &max) 
{
    srand (time(NULL));
    return rand() % max + 1;
}
