
#include <iostream>
#include<string>
using namespace std;

// f(x) = x*x + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

 class Employee {
        public:
        string name;
        int salary;
        
        Employee(string name, int salary)
        {
             this->name = name;
             this->salary = salary;
            
        }
        
        void printDetails()
        {
           cout<<"The name of our first Employee is "<<this->name<< " The salary is "<<this->salary<<endl; 
        }
        
        void getsecretpassword()
        {
            cout<<"The secrest password of employee is "<<this->secretpassword;
        }
        
    private:
    int secretpassword;
        
    };

int main() {
    
    //cout<<"Hello World Rohit"<<endl;
    // cout<<"Hello Computer";
    
    //int a, b, c;
    //a = 55;
    //cout<<a;
    
    //Camelcase Notaion 
    //int marksinMaths = 83;
    
    // cout<<"The Markes in Maths : "<<marksinMaths;
    //float const a = 45.2; // const keyword use for placing the fix value of verieble
    //float a = 46.32
    //cout<<a;
    //int a, b;
    //int sum = a + b;
    //cout<<"Enter the Number :";
    //cin>>a;
    //cout<<"Enter the Number :";
    //cin>>b;
    //int sum = a + b;
    //cout<<"The sum is:" << sum;
    
    //int a, b;
    
    //cout<<"Enter the Number :";
    //cin>>a;
    //cout<<"Enter the number :";
    //cin>>b;
    
    // cout<<"a + b is : "<<a + b<<endl;
    // cout<<"a - b is : "<<a - b<<endl;
    // cout<<"a * b is : "<<a * b<<endl;
    // cout<<"a / b is : "<<a / b<<endl;
    
    // int age;
    // cout<<"Enter Your Age : ";
    // cin>>age;
    
    // if (age > 150){
    //     cout<<"Invalide Age";
    // }
    // else if (age >= 18){
    //     cout<<"You are Vote";
    // }
    // else {
    //     cout<<"You Cannot Vote";
    // }
    
   //int index = 1;
    
    //while ( index < 22)
    //{
      //  cout<<"We are at index Number "<<index<<endl;
        //index = index + 2;
    //}
    
    // do{
    //     cout<<"We are at index Number "<<index<<endl;
    //     index = index + 2;
    // }while (index < 34);
    
    // for( int i = 0; i < 34; i++)
    // {
    //     cout<<"The value is i is :"<<i<<endl;
    // }
    
    // int a, b;
    // cout<<"Enter the number : "<<endl;
    // cin>>a;
    // cout<<"Enter the Number : "<<endl;
    // cin>>b;
    // cout<<"The function returned : "<<add(a,b);
    
    
    // int arr[3] = {1,2,3};
    // cout<<arr[2];
    
    // int marks[6];
    
    // for(int i =0; i < 6; i++)
    // { 
    //     cout<<"Enter the marks of "<<i<<"th student "<<marks[i]<<endl;
    //     cin>>marks[i];
        
    // }
    
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of "<<i<<"th student "<<marks[i]<<endl;
    // }
    
    
    // int arr2d[2][3] = {
    //     {1,2,3},
    //     {4,5,6}
    // };
    
    // for(int i =0; i < 2; i++)
    // {
    //     for(int j =0; j < 2; j++)
    //     {
    //         cout<<"The value at "<<i<<","<<j<<arr2d[i][j]<<endl;
    //     }
    // }
    
    // int a = 343;
    // float b = 87.36;
    // cout<<(float) a/34<<endl;
    
    // string name = "Rohit";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(0,3)<<endl;
    // cout<<"The name is "<<name.substr(2,3);
    
    // # Pointers # //
    
    // int a = 89;
    // int* ptra;
    // ptra = &a;
    // cout<<ptra<<endl;
    // cout<<*ptra;
    
    // float a = 89.52;
    // float* ptra;
    // ptra = &a;
    // cout<<ptra<<endl;
    // cout<<*ptra;
    
    // # Class & Objects # // 
    
    // class Employee {
    //     public:
    //     string name;
    //     int salary;
        
    // }
    
    // Employee har;
    // har.name = "Rohit";
    // har.salary = 10000;
    // cout<<"The name of our first Employee is "<<har.name<< " The salary is "<<har.salary<<endl;
    
    Employee har("harry", 10000);
    //har.printDetails();
    har.getsecretpassword();
    
    return 0;
}

