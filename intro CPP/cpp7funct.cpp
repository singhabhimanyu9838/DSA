 #include<iostream>
 using namespace std;

 void printCount(){
    for(int i=1;i<=5;i++){
        cout << i << " ";
    }
    cout << endl;
 }
 int sum(int a,int b){
    int totalSum = a+b;
    return totalSum;
 }
 void myNameTenTimes(){
    for(int i = 0;i<10;i++){
        cout << "Abhimanyu Singh" << endl;
    }
 }
 int multiplication(int x,int y ,int z){
    int result =x*y*z;
    return result;
 }
 int conertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
 }
 char convertIntoUpperCase(char ch){
    char answer = ch -'a'+'A';
    return answer;
 }

 int main(){
    printCount() ;
    cout<<sum(98,345) << endl;
    myNameTenTimes();cout << endl;
   cout << multiplication(8,98,9867) <<endl;
   cout << conertIntoCelcius(87) <<endl;
   cout << convertIntoUpperCase('y') << endl;



    return 0;
 }