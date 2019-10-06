#include <iostream>
#include <cstring>
using namespace std;
int top;

void checkbalance(char str[], int n, char stack[]){
    for(int i=0;i<n;i++){
        
        if (str[i]=='('){
            top=top+1;
            stack[top]='(';
        }
        
        if(str[i]==')'){
            if(top==-1){
                top-=1;
                break;
             }
            else    top-=1;
        }
    }
    
    if(top==-1) cout<<"Balanced Expression\n";
    else    cout<<"Unbalanced Expression\n";
}

int main() 
{
    char stack[100];
    
    while(1){
        char str[100];
        cout<<"\nEnter Expression:\n";
        cin>>str;
        top=-1;
        checkbalance(str,strlen(str),stack);
        cout<<"Check more expressions?  Yes:1   No:0";
        int a;  cin>>a; if(a==0)  exit(0);
        
    }
} 