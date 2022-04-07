//Student Name: Dan Bui

//Teacher: Dr. Tyson McMillan

//Date: 4/6/22

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

/*

Research Input data: go to http://www.weather.com (Links to an external site.)

Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.

//Fort Worth = 1, Watauga = 2  

//Data Table

//City X, Day X: Temp

Fort Worth, Day 1: 70

Fort Worth, Day 2: 71

Fort Worth, Day 3: 86

Fort Worth, Day 4: 87

Fort Worth, Day 5: 85

Fort Worth, Day 6: 89

Fort Worth, Day 7: 89

Watauga, Day 1: 70

Watauga, Day 2: 70

Watauga, Day 3: 86

Watauga, Day 4: 87

Watauga, Day 5: 85

Watauga, Day 6: 89

Watauga, Day 7: 88

*/
 

int main()
{
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];
  int fortWorth[7];
  int watauga[7];

  //Note your input data from the above

  cout << "Enter all temperature for a week of first city and then second city. \n";

  // Inserting the values into the temperature array

  //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
      if (i == 0)    //City 1 input
      {
        cin >> fortWorth[j];
      }
      else    //City 2 input
      {
        cin >> watauga[j];
      }
    }
  }

  //Storing the two 1D arrays into the 2D array

  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      if (i == 0)
      {
        temperature[i][j] = fortWorth[j];
      }
      else
      {
        temperature[i][j] = watauga[j];
      }
    }
  }

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array

  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
    }
  }
  
  return 0;
}