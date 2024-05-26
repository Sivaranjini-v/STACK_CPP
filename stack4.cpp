#include<iostream>
using namespace std;
template<class type>
class stack{
	type st[5];
	int i;
	public:
	stack()
	{
		i=-1;
	}
	void stack_init()
	{
		i=-1;
	}
	void push(type t)
	{
		if(i==4)
		{
			cout<<"stack overflow"<<endl;
			return;
		}
		i++;
		st[i]=t;
		cout<<"pushed:"<<st[i]<<endl;
	}
	void pop()
	{
		if(i==-1)
		{
			cout<<"stack underflow"<<endl;
			return;
		}
		cout<<st[i]<<"-is poped"<<endl;
		i--;
	}
	void display_stack()
	{
		int m;
		for(m=0;m<=i;m++)
			cout<<st[m]<<endl;
	}
};
int main()
{
	stack<int> obj1;
	stack<char>obj2;
	stack<float>obj3;
	stack<double>obj4;
	stack<string>obj5;
	int k,c=0,c1=0,l,c2=0,c3=0,c4=0,c5=0;
	int j;
	char ch;
	float f;
	double d;
        string s;
	L1:
	while(1)
	{
		cout<<" \033[33m choose an option\033[0m"<<endl;
		cout<<"\033[36m 1)int  2)char  3)float 4)double 5)string 6)exit \033[0m "<<endl;
		cin>>k;
		switch(k)
		{
			case 1:cout<<"\033[34m int stack application ready to use\033[0m"<<endl;
			       c1++;
			       if(c1>1)
				{
				cout<<"\033[35m 1)continue_old_stack 2)new_stack\033[0m"<<endl;
				cin>>l;
				switch(l)
				{
					case 1:break;
					case 2:obj1.stack_init();
					       break;
					default:cout<<"wrong command"<<endl;
				}
				}
			while(1)
			{
			       cout<<"\033[32m 1.push 2.pop 3.display_stack 4)main_menu\033[0m"<<endl;
			       cin>>j;
			       c=0;
			       switch(j)
			       {
				       case 1:int a;
				       cin>>a;
				       obj1.push(a);
				       break;
				       case 2:obj1.pop();
				       break;
				       case 3:obj1.display_stack();
				       break;
				       case 4:goto L1;
				       break;
			       }
			}
			       break;

			case 2:cout<<"\033[34m char stack application ready to use\033[0m"<<endl;
		        	c2++;
			      if(c2>1)
				{
				cout<<"\033[34m 1)continue_old_stack 2)new_stack\033[0m"<<endl;
				cin>>l;
				switch(l)
				{
					case 1:break;
					case 2:obj2.stack_init();
					       break;
					default:cout<<"wrong command"<<endl;
				}
				}
			while(1)
			{
			       cout<<"\033[32m1.push 2.pop 3.display_stack 4)main_menu\033[0m"<<endl;
			       cin>>j;
			       c=0;
			       switch(j)
			       {
				       case 1:char a;
				              cin>>a;
				              obj2.push(a);
				              break;
				       case 2:obj2.pop();
				              break;
				       case 3:obj2.display_stack();
				              break;
				       case 4:goto L1;
			       
			       
			       }
			       }
			       break;
			case 3:cout<<"\033[34m float stack application ready to use\033[0m "<<endl;
			       c3++;
			      if(c3>1)
				{
				cout<<"\033[34m 1)continue_old_stack 2)new_stack\033[0m"<<endl;
				cin>>l;
				switch(l)
				{
					case 1:break;
					case 2:obj3.stack_init();
					       break;
					default:cout<<"wrong command"<<endl;
				}
				}
			       while(1)
			       {
				       cout<<"\033[32m 1.push 2.pop 3.display_stack 4)main_menu\033[0m"<<endl;
			       cin>>j;
			       c=0;
			       switch(j)
			       {
				       case 1:
				       cin>>f;
				       obj3.push(f);
				       break;
				       case 2:obj3.pop();
				       break;
				       case 3:obj3.display_stack();
				       break;
				       case 4:goto L1;
			       }
			       }
			       break;

			case 4:cout<<"\033[34m double stack application ready to use\033[0m "<<endl;
			      c4++;
			      if(c4>1)
				{
				cout<<"\033[35m 1)continue_old_stack 2)new_stack\033[0m"<<endl;
				cin>>l;
				switch(l)
				{
					case 1:break;
					case 2:obj4.stack_init();
					break;
					default:cout<<"wrong command"<<endl;
				}
				}
			       while(1)
			       {
				       cout<<"\033[32m 1.push 2.pop 3.display_stack 4)main_menu\033[0m"<<endl;
			       cin>>j;
			       c=0;
			       switch(j)
			       {
				       case 1:
				       cin>>d;
				       obj4.push(d);
				       break;
				       case 2:obj4.pop();
				       break;
				       case 3:obj4.display_stack();
				       break;
				       case 4:goto L1;
			       }
			       }
			       break;
          		case 5:cout<<"\033[34m string stack application ready to use\033[0m"<<endl;
		         	c5++;
		        	if(c5>1)
				{
				cout<<"\033[35m 1)continue_old_stack 2)new_stack\033[0m"<<endl;
				cin>>l;
				switch(l)
				{
					case 1:break;
					case 2:obj5.stack_init();
					break;
					default:cout<<"wrong command"<<endl;
				}
				}
			       while(1)
			       {
				       cout<<"\033[32m 1.push 2.pop 3.display_stack 4)main_menu\033[0m"<<endl;
			       cin>>j;
			       c=0;
			       switch(j)
			       {
				       case 1:
				       cin>>s;
				       obj5.push(s);
				       break;
				       case 2:obj5.pop();
				       break;
				       case 3:obj5.display_stack();
				       break;
				       case 4:goto L1;
			       }
			       }
			       break;
			case 6:c=0; 
			       exit(0);
			default:c++;
			       if(c==1)
			         cout<<"\033[35m please read the option carefully\033[0m "<<endl;
			
				 else if(c==2)
						 cout<<"\033[31m last chance please take care\033[0m "<<endl;
				else if(c>=3)
				{
					cout<<"\033[31m Thanks for using our application.Please read the manual and come back properly\033[0m"<<endl;
					exit (0);
				}
		}
}
}


		
