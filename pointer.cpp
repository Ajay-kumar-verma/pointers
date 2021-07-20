#include <iostream>
using namespace std;
void swap1(int *a , int *b);
void swap2(int a , int b);

int main(){

cout<<"Array pointer "<<endl;


int a= 20;  // value of a is 20 
cout<<a<<endl; // it will print value of a 
int *ptr=&a; // assigning address of a to ptr
cout<<ptr<<endl; // printing address of a 

cout<<"pointer of Array"<<endl;

// Array behaves like pointer 

int arr[]={56,2,3,4,5,34};
cout<<arr<<endl;//it will print address of first ele, not its value  
cout<<&arr[0]<<endl;  //;;
cout<<sizeof(arr)<<endl; // it will print sizeof an array

int *aryptr=arr;// arry i saddress itself no need to use '&' here 

for (int i = 0; i<6; i++)
{
    cout<<*(aryptr)<<endl;
    aryptr++; // it will move 4 bytes 
   
    // arr++  it will trow an error it behave like a pointer ,but  not a pointer 

}


for (int i = 0; i<6; i++)
{
    cout<<*(arr+i)<<endl;
    // arr is indexing arr after adding 1 it point to next ele
     // arr+i will return the addres of (arr+i)th position
    
    // arr++  it will trow an error it behave like a pointer ,but  not a pointer 
}


cout<<"Pointer of pointer "<<endl;


int x=20;
int *ptr3=&x;

int **ptr4=&ptr3;

int ***ptr5=&ptr4;

cout<<*ptr3<<endl;

cout<<**ptr4<<endl;

cout<<***ptr5<<endl;

cout<<"Implementation of pointer "<<endl;
int m=2;
int n=8;

swap1(&n,&m); // swaping 
cout<<m<<" "<<n<<endl;

swap1(&n,&m);// swapping again 

swap2(n,m);
cout<<m<<" "<<n<<endl;

}

void swap1(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}

void swap2(int a,int b){
int temp=a;
a=b;
b=temp;
}