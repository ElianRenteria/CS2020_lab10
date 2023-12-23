//Elian Renteria
#include<iostream>
#include"Map.cpp"
#include"MapSet.cpp"
#include <string>
using namespace std;

int main()
{
  int id,idsearch;
  string name;
  Map<int, string> studentDB;
  cout<<"using index operator to insert new pairs:"<<endl;
  do{
    cout << "\nStudent ID? ";
    cin >> id;
    if(id != 0)
    {
      cout <<"Student Name? " << endl;
      cin >> name;
      studentDB.insert(Pair<int, string>(id, name));
    }
  }while(id != 0);
  cout << "\nContent of student database: \n";
  studentDB.printMap();
  cout << "\nWho you want to know?";
  cin >> idsearch;
  cout << "\nThe corresponding name is: " << studentDB[idsearch];
  cout << "\nChange which one? ";
  cin >> idsearch;
  cout << "\n...to what name? ";
  cin >> name;
  studentDB[idsearch] = name;
  cout << endl;
  studentDB.printMap();
  cout << "\nRemove which one? ";
  cin >> idsearch;
  studentDB.remove(idsearch);
  cout << endl;
  studentDB.printMap();
  return 0;
}