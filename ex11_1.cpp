#include <iostream>
#include <cstring>
#include <cstdlib>

//The functions atoi, atol, and atof can be used to
//convert a C-string of digits to the corresponding numeric value

//strcat for concatenation?

using namespace std;

int main(){

  char s1[8], s2[8], cs1[16];
  int length1, length2;
  int count = 0;

  while(count <=1){
    if(count >= 0){
      //After the first time ask the user to enter them
      cout << "Enter two strings below: \n";
      cout << "Enter the first string, then the second \n";
      //Another way to initialize the two strings
      cin >> s1 >> s2;
    }

    cout << "The strings that have been entered are: \n" << s1 << " and " << s2 << endl;
    cout << "The strings appended together: " << strcat(s1, s2) << endl;

    if(strcmp(strcat(s1, s2), strcat(s2, s1)) == 0){
      cout << "The appended string is a palendrome.\n";

    } else{
      cout << "The appended string is NOT a palendrome.\n";

    }

    count++;
  }

  return 0;
}
