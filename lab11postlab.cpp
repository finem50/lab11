#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

//We will choose 30 students as an arbitrary number that can be changed later
int maxStudents = 30;
string dummyLine;

int main(){

  //8 fields total to record
  struct Student{
    string laName[15];
    string fiName[15];
    string emAddress[30];
    string stAddress[20];
    string city[20];
    string state[2];
    string zip[5];
    string phoNumber[10];

  }stuRecords[3];

  //Database of students stored in array studentRecords
  ifstream inStream("students.txt");

  //Get the first line of the file and set to maxStudents
  getline(inStream, dummyLine, '\n');
  //Continue with the rest of the file after the first line
  while(!inStream.eof()){
  for(int i = 0; i <= 4; '\n'){
    cin.getline(stuRecords[i].laName, )

    stuRecords[i].laName << getline(inStream, '\n');
    stuRecords[i].fiName << getline(inStream, '\n');
    stuRecords[i].emAddress << getline(inStream, '\n');
    stuRecords[i].stAddress << getline(inStream, '\n');
    stuRecords[i].city << getline(inStream, '\n');
    stuRecords[i].state << getline(inStream, '\n');
    stuRecords[i].zip << getline(inStream, '\n');
    stuRecords[i].phoNumber << getline(inStream, '\n');

  }

}

  for(int i = 0; i < maxStudents; i++){
    cout << stuRecords[i].laName << endl;
    cout << stuRecords[i].fiName << endl;
    cout << stuRecords[i].emAddress << endl;
    cout << stuRecords[i].stAddress << endl;
    cout << stuRecords[i].city << endl;
    cout << stuRecords[i].state << endl;
    cout << stuRecords[i].zip << endl;
    cout << stuRecords[i].phoNumber << endl;

  }

  return 0;

}
