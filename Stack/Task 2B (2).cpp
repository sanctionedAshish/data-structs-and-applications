#include <iostream>

using namespace std;

void enqueue(char queue[], char element, int& rear, int size){
    if(rear == size)
        cout<<"Overflow\n";
    else{
        queue[rear]=element;
        rear++;
    }
}


void dequeue(char queue[], int& front, int rear){
    if(front == rear)
        cout<<"Underflow\n";
    else{
        queue[front]=0;
        front++;
    }
}

void reverse(char queue[], int& front, int& rear, int size){        //2 loops increase time efficiency
    int i, t;
    for(i=front; i<rear && i<(rear-(size/2)); ++i)
        queue[size-i-1]=queue[i];
        
    for(i; i<size/2; i++){
        t=queue[i];
        queue[i]=queue[size-i-1];
        queue[size-i-1]=t;
    }
    
    t=front;
    front = size-rear;
    rear = size-t;
}

int main(){
    char queue[10];
    int choice=1;
    int front=0, rear=0;
    int size=10;
    char ele;
    bool r = false;
    
    do{
        cout<<"\nEnqueue (1)      Dequeue (2)       Reverse (3)       Show Queue (4)      Exit (0)\n";
        cin>>choice;
        
        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>ele;
                enqueue(queue, ele, rear, size);
                break;
                
            case 2:
                dequeue(queue, front, rear);
                break;
                
            case 3:
                reverse(queue, front, rear, size);
                r = !r;
                break;
            
            case 4:
                for(int i=front; i<rear; ++i)
                    cout<<queue[i];
                break;
                
            default:
                break;
        }
    }while (choice!=0);
    
    return 0;
}