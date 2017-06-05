#include<iostream.h>

int main()
{
	vector<int> a,b,c;
	vector<int>::iterator it1,it2;
	int n,x,i,y,f,f1,choice,pos=0,temp=10;
	char ch='y';
	while(ch=='y')
	{   f=1,f1=1;
		cout<<"enter choice"<<endl<<"1.simulation 1"<<endl<<"2.simulation 2"<<endl<"3.simulation 3";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"SIMULATION 1....."<<endl;
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
					 break;
			case 2: cout<<"SIMULATION 2....."<<endl;
		            cout<<"enter the number of clothes ";
		            cin>>n;
		            cout<<endl<<"enter the sizes of clothes in the stack";
		             for(i=0;i<n;i++)
		             {
			          cin>>x;
	                  b.push_back(x);
		             }
                      cout<<endl<<"the stack of clothes present is";
                      cout<<endl;
                     for(i=n-1;i>=0;i--)
		             {
			           cout<<b[i]<<endl;
		              }
		                 cout<<endl<<"enter the required length of cloth";
		                 cin>>y;
                     for(i=n-1;i>=0;i--)
					 {   
                        if(b[i]>=y)
						{
							if(b[i]<temp)
							{temp=b[i];
						     pos=i;
							}
							f1=0;
						}
					 }
                       cout<<endl<<"the cloth should be chosen from "<<pos+1<<" position";
                      if(f1==0)
					  {
                         b[pos]=b[pos]-y;
                           	cout<<"the updated stack is"<<endl; 
							
                            for(i=n-1;i>=0;i--)							
                            {
								cout<<b[i]<<endl;
							}
					  }
					  else
						  cout<<"the updated stack is"<<endl;
					    for(i=n-1;i>=0;i--)
						{
							cout<<b[i]<<endl;
						}
						cout<<"do you want to continue (y/n)?";
		             cin>>ch;
					 break;
		}

			  
	}
return 0;
}
			 
			 