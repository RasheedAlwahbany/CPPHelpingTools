#include <iostream>	//the c++ lebrary of output and input.
#include <math.h>		//the c++ lebrary of math.
#include <bitset>
#include <string>
int main();
int disk();
int ext();
void bck();
using namespace std;
	int a,b,sec,csc,cot,m,w,d,p,h,u,f,g;		//define the variabels
	float sum,x,z;	
	char y;
	string v,s;
		
class calc									//this is class about the calc.
{
	public:
	void cl()
	{
		switch(y)
		{
			case '+':
				sum=x+z;
				cout<<"\nthe ( x + z ) = \t"<<sum<<endl;
			break;
			case '-':
				sum=x-z;
				cout<<"\nthe ( x - z ) = \t"<<sum<<endl;
			break;
			case '*':
				sum=x*z;
				cout<<"\nthe ( x * z ) = \t"<<sum<<endl;
			break;
			case '/':
				sum=x/z;
				cout<<"\nthe ( x / z ) = \t"<<sum<<endl;
			break;
			default:
				cout<<"\nerror choose please try again : "<<endl;	
			break;
		}
		
	}
	void sc()	
	{
	x = (x*3.141592654)/180;
	if(d == 1)
		{
			en();
			cout<<"the sin for number is : \t"<<sin (x)<<endl;

		}
		else if(d == 2)
		
		{
			en();
			cout<<"the cos for number is : \t"<<cos (x)<<endl;
		}
		else if(d == 3)
		{
			en();
			cout<<"the tan for number is : \t"<<tan (x)<<endl;
		}
		else if(d == 4)
		{
			en();
			sec = 1/sin(x);
			cout<<"the sec for number is : \t"<<sec<<endl;
		}
		else if(d == 5)
		{
			en();
			csc = 1/cos(x);
			cout<<"the csc for number is : \t"<<csc<<endl;
		}
		else if(d == 6)
		{
			en();
			cot = 1 / tan (x);
			cout<<"the cot for number is : \t"<<cot<<endl;
		}
		else if(d == 7)
		{
			cout<<"please enter the number :"<<endl;
			cin>>x;	
			cout<<"please enter the power :"<<endl;
			cin>>z;
			
			cout<<"the number is : "<<x<<"after power is : "<<pow(x,z)<<endl;
		}
		else if(d == 8)
		{
			
			cout<<"please enter the number to squer it :"<<endl;
			cin>>x;
			cout<<"the number is : "<<x<<"after squer is : "<<sqrt(x)<<endl;
		}
		else if(d == 9)
		{
			
				cout<<"please enter the string : ";
				cin>>v;
			for(int i=0;i<v.length();i++)
			{
				cout<<"the string in binary system is : \t"<<bitset<8>(v[i])<<endl;
	
	
			}
		}
		
		else if(d == 10)
		{
			int a=0;
			cout<<"Please enter the string : ";
			cin>>v;	
			for(int i=0;i<v.length();i++)	
			a=a+int(v[i]);
			cout<<"the string in ascii system is : \t"<<a<<endl;
		}
		else if(d == 11)
		{
			cout<<"please enter the number to convert it to hexdecimal,octal,decimal and binary systems : "<<endl;
			cin>>v;	
			for(int b=0;b < v.length();b++)
			{
				int a=0,x;
				cout<<"the number is: ( "<<v[b]<<" )"<<endl;
				cout<<"the number in binary system is : \t"<<bitset<8>(v[b])<<a<<endl;
				cout<<"the number in decimal system is : \t"<<int(v[b])<<endl;
				x=int(v[b]);
				for(int i2=0;x>0;i2++)
				{
				
				a=a+x%8;
				x=x/8;
				}
				cout<<"the number in octal system is : \t"<<a<<endl;
				x=int(v[b]);
				a=0;
				
				for(int i2=0;x>0;i2++)
				{
				
				a=a+x%16;
				x=x/16;
				}
				cout<<"the number in hexdecimal system is : \t"<<a<<endl;
			
			}
		}
		else if(d == 12)
		{
			system("cls");
			main();			

		}
		else
		{
			ext();
		}		
	}
	void en()
	{
		cout<<"please enter the (x) number : ";
		cin>>x;
	}
};
void cls()										//this is function about the my name.
{
	cout<<"\a\t\t <**************************Rasheed * Adnan * Abdu * Al-fattah***************************>\n\a"<<endl;
}
void sys()										//this is function to change the color .
{
		system("cls");
		system("color 9");

}	
int ext()										//this is function about the exit .	
{
	system("cls");
	cls();
	system("color c");
	cout<<"\a do you want to exit or continue,\n \t\t\t\t1) yes.  or    0) no. "<<endl;
	cin>>u;
	if(u == 1)
	{
		system("cls");
		cout<<"I wish you are stey funny time with us. \n\n\t\t\t\t\tthanks for use our programes ...\n"<<endl;
		
		cls();
		system("color c");
		exit;
	}
	else 	
	{
		sys();
		main();
	}
		
}
void bck()
{
	cout<<"\apress any key to continue... *******-------->"<<endl;
	cin>>s;
		if(s == s)
		{
			main();
		}
}
int main()									//the programes will begines always from her.
{

	cls();
cout<<"\n\t\t\tplease choose whate you want to do from this programes. \n\n";		//to learn the user what he can chos from this programes.
cout<<"1: open calculation.\t|\t 2: fix disk.\t|\t3: network command."<<endl;
cout<<"4: power manue.\t\t|\t 5: programes.\t|\t6: to exit. ---************>"<<endl;
cin>>a;
	if(a == 1)
{
		sys();
		cls();
		cout<<"please choose the best from this manue :"<<endl;
		cout<<"1:Windows calculation.\t|\t 2:my calculation\t|\t 3:back to main manue"<<endl;
		cin>>b;
	if(b == 1)
	{
	
		sys();
		cls();
		system("calc");
		main();
	}
	else if(b == 2) 
	{
		sys();
		cls();	
		cout<<"please choose the best from this manue :"<<endl;
		cout<<"1:simple calculation. \t|\t 2:scicens calculation. \t | \t 3:back to main minue.\n\t\t\t\t 4: to exit ---************>."<<endl;
		cin>>w;
		if(w == 1)
		{
			for(;;)
			{
			cls();
			system("color A");
			vv:
		cout<<"please enter the first number : ";
		cin>>x;
		cout<<"please enter the function number : ";
		cin>>y;
		cout<<"please enter the second number : ";
		cin>>z;
		calc k;
		k.cl();
		cout<<"if you want to back to main manue press . 1) yes. \t\t2) no"<<endl;
			cin>>g;
			if(g == 1)
				{
				continue;
				}
			else 
				{
				bck();
				}
			}
		}
	
		else if(w == 2)
		{
			sys();
			cls();
			for(f=1;;f++)
			{
			cls();
			system("color A");
			cout<<"please choose the best from this manue :"<<endl;
			cout<<"please enter the function number : "<<endl;
			cout<<"1: sin x. \t | \t 2: cos x. \t | \t 3: tan x."<<endl;
			cout<<"4: sec x. \t | \t 5: csc x. \t | \t 6: cot x."<<endl;
			cout<<"7: power. \t | \t 8: squer x.\t | \t 9:to binary "<<endl;
			cout<<"10:to ascii.\t | \t 11:from number to hex ,binary,decimal and octal systems."<<endl;
			cout<<"12:back to main minue.\t|\t13: to exit ---************>"<<endl;
			cin>>d;
		
			calc g;
			g.sc();
			f=f%2;
			if(f == 0)
			{
				bck();
				sys();
			}
		}
		}
		else if (w == 3)
		{
			sys();
			main();
		}	
		else if(w == 4)
		{
			ext();
		}
	}
	else if(b == 3)
	{
		main();
	}	
}
 else if(a == 2)
{
	sys();
	cls();
	 cout<<"please choose the best from this manue :"<<endl;
 	 cout<<"1: fix USB disk.\t \t\t|\t2: defragement disks.\t\t|\t3: format USB disk."<<endl;
	 cout<<"4: all informatin about hard drive.\t|\t5: to back to main manue.\t|\t6: to exit ---************>"<<endl;
	 cin>>f;
	 disk();
	  
}
else if(a == 3)
{
	sys();
	cls();
	cout<<"please choose the best from this manue :"<<endl;
	cout<<"1: have IP Adress of networkes.\t|\t2: netowrkes problems.\t\t|\t 3: to know your IP ."<<endl;
	cout<<"4: back to main manue.\t\t|\t 5: to exit ---************>"<<endl;
	cin>>d;

	 if(d == 1)
	{
		sys();
		cls();
		cout<<" at first you must make sure you are connect to the networks."<<endl;
		system("arp -a");
		bck();
	
	}
	else if(d == 2)
	{
		sys();
		cls();
		system("netstat ");	
		cout<<"now you will take the dynamic IP and open your CMD to write (ping the IP of networke.\nnow you can see if you done your jop or not.\n\t\t\t\t\tthanks for use our programes..."<<endl;
	bck();
	}
	 else if(d == 3)
	{
		sys();
		cls();
		system(" ipconfig /all ");	
	bck();
	}
	else if(d == 4)
	{
		sys();
		main();	
	}
	else 
	{
		system("exit");
	}
}


 else if(a == 4)
{
	cls();
	sys();
	cout<<"please shoose from this :\n1: power off.\t\t\t|\t2: power hibernate.\t\t|\t3: power restart."<<endl;
	cout<<"4: fix system and shutdown.\t|\t5: back to main manue.\n\t\t\t\t|\t6: to exit ---************>."<<endl;
	cin>>u;
	if(u == 1)
	{
		
		system("shutdown /s /c your PC will shutdown now.");
	}
	else if (u == 2) 
	{
		system("shutdown /h");
		main();
	}
	else if (u == 3) 
	{
		system("shutdown /r");
		main();
	}
	
	else if (u == 4) 
	{
		system("shutdown /hybrid");
		main();
	}
	else if (u == 5) 
	{
		main();
	}
	else if (u == 6) 
	{
		ext();	
	}
}


	else if(a == 5)
{
	sys();
	cls();
	cout<<"please choose the best from this manue :"<<endl;
	cout<<"1: the painter.\t\t\t|\t2: the notepade.\t|\t3: chrome."<<endl;
	cout<<"4: control panel.\t\t|\t5: back to main manue."<<endl;
	cout<<"\t\t \t\t|\t6: to exit ---************>."<<endl;
	cin>>d;
	
	 if(d == 1)
	{
		system("mspaint");
		main();	
	}
	else if(d == 2)
	{
		system("notepad");
		main();	
	}	
	else if(d == 3)
	{
		system("chrome");
		main();	
	}
	else if(d == 4)
	{
		system("control");
		main();	
	}
	else if(d == 5)
	{
	
		main();		
	}
	else 
	{
		ext();
	}
}

 else if(a == 6)
{
	ext();
}
else
{
	system("cls");
	system("color c");
	cout<<"\n\n\a\n\t\t\t\t\t error choice please try again later ...\n\a"<<endl;
	bck();
	main();
	
}
system("pause");
return 0;

}
int disk()
{
		if(f == 1)
		{
			sys();
			cls();
			system("chkdsk /x /f D:");	
		bck();
		}
		if(f == 2)
		{
			system("diskmgmt.msc ");
			main();	
			bck();
		}
		else if(f == 3)
		{
			sys();
			cls();
			cout<<"\a are you sure you wante format diske?.\n\t\t\t\t\t1)yes. \t\t or  \t\t0)no. "<<endl;
			cin>>g;
		if(g == 1)
		{
		
			system("format /q D:");
			bck();
		}
		else 
		{
			system("cls");
			main();
		}
		}
		
	 	else if(f == 4)
		{
			sys();
			cls();
			system("dir");
		bck();
		}
		else if(f == 5)
		{
			main();
		}
		else 
		{
			ext();
		}
}
