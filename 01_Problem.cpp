/*
Create a class called Book with the following attributes:
title (string)
author (string)
year (int)
Then create two objects of the class and print their attribute values.
*/
#include <bits/stdc++.h>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int year;
};
int main() {
    Book object_01;
    object_01.title={"Harry Potter"};
    object_01.author={"J K Rowling"};
    object_01.year=1998;

    cout<<"Object 1\n";
    cout<<object_01.title<<"\n";
    cout<<object_01.author<<"\n";
    cout<<object_01.year<<"\n";

    Book object_02;
    object_02.title={"1984"};
    object_02.author={"George Orwell"};
    object_02.year=1996;

    cout<<"Object 2\n";
    cout<<object_02.title<<"\n";
    cout<<object_02.author<<"\n";
    cout<<object_02.year<<"\n";

  
  return 0;
}