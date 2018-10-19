#include<iostream>
using namespace std;
int counter=0;
class queue
{
	public:
		int front=0;
		int rear=0;
		int arr[6];
		enque(int a)
		{
			if(counter!=6)
			{
				if(front==6)
				{
					front=0;
					arr[front]=a;
					front++;
					counter++;
				}
				else
				{
					arr[front]=a;
					front++;
					counter++;
				}
				
			}
			else 
			cout<<"\nOverflow";
		}
		deque()
		{
			if(counter!=0)
			{
				if(rear==5)
				rear=0;
				else
				rear++;
				counter--;
			}
			else 
			cout<<"\nEmpty";
		}
		int peek()
		{
			if(counter!=0)
			return arr[rear];
			else cout<<"\n Empty";
		}
		void display()
		{
			if(rear<front)
			{
				for(int i=rear;i<front;i++)
				cout<<"  "<<arr[i];
			}
			else
			{
				for(int i=rear;i<6;i++)
				cout<<"  "<<arr[i];
				for(int i=0;i<front;i++)
				cout<<"  "<<arr[i];
			}
		}
		
};
int main()
{
			int i,j;
			queue q;
	do
	{
		cout<<"\nPRESS CORRECT OPTION 1.enque 2.deque 3.peek 4.display 5.exit\n";
		cin>>i;
		switch(i)
		{
			case 1:
				{    
				    cout<<"\nEnter any number:";
				    cin>>j;
					q.enque(j);
					break;
				}
			case 2:
				{
					q.deque();
					break;
				}
			case 3:
				{
					cout<<q.peek();
					break;
				}
			case 4:
				{
					q.display();
					break;
				}
			default:
				cout<<" ";
		}
	}while(i!=5);
}

