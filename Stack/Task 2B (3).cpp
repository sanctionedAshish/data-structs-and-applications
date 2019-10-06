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
    char queue[5][10];
    int choice=1, currentQueue=0;
    int front[5]={0}, rear[5]={0};
    int size=10;
    char ele;
    
    do{
        cout<<"\nSelect Queue (1-5)         Exit (0)\n";
        cin>>currentQueue;
        if(currentQueue!=0 && currentQueue>0 && currentQueue<6){
            do{
                cout<<"\nEnqueue (1)      Dequeue (2)     Show Front (3)      Show Rear (4)       Show Queue (5)      Change Queue (0)\n";
                cin>>choice;
                
                switch(choice){
                    case 1:
                        cout<<"Enter element: ";
                        cin>>ele;
                        enqueue(queue[currentQueue-1], ele, rear[currentQueue-1], size);
                        break;
                        
                    case 2:
                        dequeue(queue[currentQueue-1], front[currentQueue-1], rear[currentQueue-1]);
                        break;
                        
                    case 3:
                        cout<<"Front: "<<queue[currentQueue-1][front[currentQueue-1]];
                        break;
                        
                    case 4:
                        cout<<"Rear: "<<queue[currentQueue-1][rear[currentQueue-1]-1];
                        break;
                        
                    case 5:
                        for(int i=front[currentQueue-1]; i<rear[currentQueue-1]; ++i)
                            cout<<queue[currentQueue-1][i];
                        break;
                        
                    default:
                        break;
                }
            }while (choice!=0);
        }
        
    }while(currentQueue!=0);
    
    return 0;
}