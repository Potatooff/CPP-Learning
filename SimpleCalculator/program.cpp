#include <iostream>

using namespace std;

// Function declarations
double add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

int main()
{
  std::string first_value, second_value;
  int choice;

  cout << "Hello User!" << endl;
  cout << "Choose a choice\n1- Addition\n2- Subtraction\n3- Multiplication\n4- Division\nUser: ";
  cin >> choice;
  cout << "First value: ";
  cin >> first_value;
  cout << "Second value: ";
  cin >> second_value;


  switch (choice)
  {
    case 1:
      cout << "Result: " << add(stof(first_value), stof(second_value)) << endl;
      break;

    case 2:
      cout << "Result: " << subtract(stof(first_value), stof(second_value)) << endl;
      break;

    case 3:
      cout << "Result: " << multiply(stof(first_value), stof(second_value)) << endl;
      break;

    case 4:
      cout << "Result: " << divide(stof(first_value), stof(second_value)) << endl;
      break;

    default:
      cout << "Invalid choice!" << endl;
      break;
  }

  return 0;
}

// Calculator methods core

double add(float x, float y)
{
  return x + y;
}

float subtract(float x, float y)
{
  return x - y;
}

float multiply(float x, float y)
{
  return x * y;
}

float divide(float x, float y)
{
  return x / y;
}
