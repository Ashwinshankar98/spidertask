#include<iostream.h>

int main()
{
	vector<int> a,b,c;
	int n,x,i,y,f=1;
	char ch='y';
	while(ch=='y')
	{
		cout<<"SIMULATION 1....."<<endl;
		cout<<"enter the number of clothes ";
		cin>>n;
		cout<<endl<<"enter the sizes of clothes in the stack";
		for(i=0;i<n;i++)
		{
			cin>>x;
	        a.push_back(x);
		}
        cout<<endl<<"the stack of clothes present is";
        cout<<endl;
        for(i=n-1;i>=0;i--)
		{
			cout<<a[i]<<endl;
		}
		cout<<endl<<"enter the required length of cloth";
		cin>>y;
		for(i=n-1;i>=0;i--)
		{
			if(a[i]>=y)
			{
				f=0;
			break;
			}
		}
         if(f==0)
		 {
			 cout<<endl<<"then cloth must be chosen from "<<i+1<<" position";
         	 cout<<endl<<"the updated stack is"<<endl;
			 a[i]=a[i]-y;
			 for(i=n-1;i>=0;i--)
		    {
			cout<<a[i]<<endl;
		     }
		 }
		 else
		 { cout<<endl<<"suitable cloth not found"<<endl;
		     cout<<endl<<"the updated stack is "<<endl;
			 for(i=n-1;i>=0;i--)
		{
			cout<<a[i]<<endl;
		}
		 }
		 cout<<"do you want to continue (y/n)?";
		 cin>>ch;
	}
return 0;
}
			 
			 