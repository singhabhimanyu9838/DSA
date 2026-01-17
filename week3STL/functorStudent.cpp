#include<iostream>
using namespace std;

class Student{
    public:
        int marks;
        string name;
        student(){

        }
        student(int m , string n){
            this -> marks =m;
            this -> name =n;
        }
};

//functor
class StudentComparator{
    public:
        bool operator()(Student a ,Student b){
            return a.marks < b.marks;
        }
};

int main(){

    Student s1;
    Student s2;

    s1.marks =93;
    s1.name = "babar";

    s2.marks =97;
    s2.name = "lakshay";

    StudentComparator cmp;
    if(cmp(s1,s2)){
        cout<<"Love ka marks lakshya se kam hai";
    }else{
        cout<<"Lakshay k marks love se kam hai";
    }

    return 0;
}