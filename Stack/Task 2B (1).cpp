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

int main(){
    char queue[50];
    int choice=1;
    int front=0, rear=0;
    int size=50;
    char ele;
    
    do{
        cout<<"\nEnqueue (1)      Dequeue (2)     Show Front (3)      Show Rear (4)       Show Queue (5)      Exit (0)\n";
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
                cout<<"Front: "<<queue[front];
                break;
                
            case 4:
                cout<<"Rear: "<<queue[rear-1];
                break;
                
            case 5:
                for(int i=front; i<rear; ++i)
                    cout<<queue[i];
                break;
                
            default:
                break;
        }
    }while (choice!=0);
    
    return 0;
}