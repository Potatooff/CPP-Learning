#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int answer, length;

    while(true)
    {
        std::string password = "";
        cout << "Enter the password length: ";
        cin >> length;
        for (int i=0; i < length; i++)
        {
            password += characters[rand() % characters.length()];
        }
        cout << "Generated Password: " << password << endl;
        cout << "\nGenerate again?\n1- Yes\n2- No\nUser: ";
        cin >> answer;
        if (answer == 2) {break;}
    }
    return 0;
}
