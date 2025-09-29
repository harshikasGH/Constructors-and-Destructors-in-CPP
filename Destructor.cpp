// Harshika Kamwal
// 25070123508

#include<iostream>
using namespace std;

int count=0;

class Student{
    public:
    Student(){
        count++;
       
        cout<<"No of objects created: " <<count<<endl;
       
    }
     ~ Student(){
        count--;
       
        cout<<"No of objects destroyed: " <<count<<endl;
       
    }
   
};
int main(){
Student aa , bb ,cc;
{
    Student dd;
}
    return 0;
}

// OUTPUT
// No of objects created: 1
// No of objects created: 2
// No of objects created: 3
// No of objects created: 4
// No of objects destroyed: 3
// No of objects destroyed: 2
// No of objects destroyed: 1
// No of objects destroyed: 0