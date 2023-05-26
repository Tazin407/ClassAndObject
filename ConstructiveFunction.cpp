//This is somewhat the shortcut of the intro file
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char sec;
    //This is the constructive function
    Student(char *n, int r, char s){
        roll=r;
        sec=s;
        strcpy(name, n);
    }
};
int main(){
    //Calling the constructive function
    Student Karma("Karma Kouzuki", 43, 'N');
    cout<<Karma.name<<endl;
    cout<<Karma.roll<<endl;
    cout<<Karma.sec<<endl;
   
return 0;
}
