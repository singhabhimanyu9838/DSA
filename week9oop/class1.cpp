#include<iostream>
#include<string>
using namespace std;

class Student{
private:
    // Attribute
    int id;
    int age;
    string name;
    int nos;


    float *gpa;
    string gf;

    // //constructor : Default constructor
    // Student(){
    //     cout<<"Student Default ctor called"<<endl;
    // }


public:

    void setGpa(float a){
        //layer of authentication
        *this->gpa = a;
    }

    float getGpa() const
    {
        return *this->gpa;
    }

     float getAge() const
    {
        return this->age;
    }

    //ctor : Parameterised ctor
    Student(int id ,int age , string name , int nos,float gpa,string gf){
        cout<<"Student Parameterised ctor called"<<endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }

    //copy ctor

    Student(const Student &srcobj){ //srcobj => A
        cout<<"Student copy ctor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos; 
    }


    //Behavior /Method / Functions
    void study(){
        cout<<this->name<<" Study" << endl;
    }
    void sleep(){
        cout<<this->name<<" Sleeping"<<endl; 
    }
    void bunk(){
        cout<<this->name<<" Bunking"<<endl;
    }

    //destructor : Default dtor
    ~Student(){
        cout<<" Student Default dtor called"<<endl;
        delete this->gpa;
    }

private:
    void gfchatting(){
        cout<<this->name<<" chatting with gf"<<endl;
    }

};

int main(){

    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Ranu";
    // A.nos = 6;

    // A.study();

    // Student B;
    // A.id = 2;
    // A.age = 17;
    // A.name = "Sahil";
    // A.nos = 5;

    // A.bunk();

    // Student A(1,15,"Abhi",4);//stack
    // Student B(3,16,"Ravi",5);
    // Student C(5,25,"Mukul",7);
    // Student D(6,17,"Janu",3);

    // cout<<A.name<<" "<<A.age<<endl;

    // A.bunk();
    // B.sleep();

    //copy ctor
    // Student C =A;
    // Student C(A);
    // cout<<C.name<<" "<<A.name<<endl;


    //Dyanamic Allocation , or Student pointer


    // Student *A = new Student(1,14,"Baban",9,9.8);
    // cout<<A->name<<endl;
    // cout<<A->age<<endl;
    // A->study();
    // delete A;


    Student A(1,12,"Ram",5,7.8,"Sita");
    // cout<<A.age<<endl;
    // cout<<A.gf<<endl;
    // cout<<A.gfchatting()<<endl;
    cout<<A.getGpa()<<endl;
    A.setGpa(6.7);
    cout<<A.getGpa()<<endl;

    cout<<A.getAge()<<endl;

     

    return 0;
}