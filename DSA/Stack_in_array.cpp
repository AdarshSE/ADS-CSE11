#include <iostream>
using namespace std;
int n=5;
int Stack[5];
int top = -1;
bool isEmpty() {
	    return top<=-1;
	}
	bool isFull() {
	    return top>=n-1;
	}
	void push(int ITEM)
	{
	    if(isFull())
	    {
	        cout<<"overflow"<<endl;
	    }
	    else{
	        top++;
	        Stack[top] = ITEM;
	    }
	}
	void pop() {
	    if (isEmpty())
	    {
	        cout<<"underflow"<<endl;
	    }
	    else {
	        cout<<"The element is "<<Stack[top]<<endl;
	        top--;
	    }
	}
	    void traverse()
	    {
	        if(isEmpty())
	        {
	            cout<<"Stack elements are: ";
	            for(int i=top; i>=0; i--)
	            cout<<Stack[i]<<" ";
	            cout<<endl;
	            cout<<"Top element is: "<<Stack[top]<<endl;
	        }
	        else{
	            cout<<"Stack is empty"<<endl;
	        }
	    }
int main() {
	int ch,ITEM;
	cout<<"1) Push"<<endl;
	cout<<"2) Pop"<<endl;
	cout<<"3) Traverse"<<endl;
	cout<<"4) Exit"<<endl;
	do{
	    cout<<"Enter choice: ";
	    cin>>ch;
	    switch(ch)
	    {
	        case 1:
	        {
	            cout<<"Enter ITEM: "<<endl;
	            cin>>ITEM;
	            push(ITEM);
	            break;
	        }
	        case 2:
	        {
	            pop();
	            break;
	        }  
	        case 3:
	        {
	            traverse();
	            break;
	        }
	        case 4:
	        {
	            cout<<"Exit"<<endl;
	            break;
	        }
	        default:
	        {
	            cout<<"Invalid Choice"<<endl;
	        }
	    }
	}
	while(ch != 4);
	return 0;
}
