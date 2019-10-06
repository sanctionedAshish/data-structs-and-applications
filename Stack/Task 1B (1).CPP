#include <iostream>
using namespace std;

int top = -1;


//PUSH
void push(int stack[ ], int n){
    int element;
    cout<<"\nEnter integer element: ";
    cin>>element;
    if (top == n-1)   cout<<"Stack Overflow\n";
    else{
        top = top +1 ;
        stack[top] = element ;
    }
    
}


//POP
void pop(){
    if(top == -1)   cout<<"Stack Underflow\n";
    else top-=1;
}


//DISPLAY
void display(int stack[]){
    if(top == -1)   cout<<"Empty Stack!\n";
    else{
        cout<<"Bottom to Top:\n";
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<"--";
        }
        cout<<"Top\n";
    }
}



int main()
{
    int stack[100];
    int operation=0;
    
    while(1){
        int run;
        cout<<"Define action: \nPush:1  Pop:2   Display All:3\n";
        cin>>operation;
        switch(operation) { 
            case 1: 
                push(stack,100);
                break; 
            case 2: 
                pop();
                break;
            case 3: 
                display(stack);
                break;
            default:
                cout<<"Invalid Argument!";
        }
        cout<<"\n\n\nEdit Stack?\nYes:1  No:0\n\n\n";
        cin>>run;
        if(run==0){
            cout<<"Final Stack Is:\n";
            display(stack);
            exit(1);
        }
    }
}