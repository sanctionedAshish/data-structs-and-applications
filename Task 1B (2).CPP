#include <iostream>
using namespace std;

int top = -1;


//PUSH
void push(int stack[ ], int element, int n){
    if (top == n-1)   cout<<"Stack Overflow\n";
    else{
        top = top +1 ;
        stack[top] = element ;
    }
    
}


//DISPLAY
void display(int stack[]){
    if(top == -1)   cout<<"Empty Stack!\n";
    else    for(int i=0;i<=top;i++) cout<<stack[i]<<" ";
}


int main()
{
    int stack[100];
    int arr[100],len;
    
    cout<<"Enter array length and elements: \n";
    cin>>len;
    for(int i=0;i<len;i++)  cin>>arr[i];
    for(int i=len-1;i>=0;i--)   push(stack,arr[i],100);
    cout<<"\nDone! Reversed String:\n";
    display(stack);
}