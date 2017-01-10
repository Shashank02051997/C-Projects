//Perodic Table
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class A
{       int a;
	float am;
	char s1[20],s2[5];
	public:
	void B()
	{ cout<<"Enter Name of Element: ";
	  cin>>s1;
	  cout<<"Enter Symbol of Element: ";
	  cin>>s2;
	  cout<<"Enter Atomic Number: ";
	  cin>>a;
	  cout<<"Enter Atomic Mass: ";
	  cin>>am;
	}
	void C()
	{ cout<<"Name of Element: "<<s1<<"\n";
	  cout<<"Symbol of Element: "<<s2<<"\n";
	  cout<<"Atomic Number: "<<a<<"\n";
	  cout<<"Atomic Mass: "<<am<<"\n";
	}
	int D()
	{ return(a);
	}
	int E()
	{ char ch;
	  int b,l=0;
	  cout<<"\nYou are Modifying this Record\n\n";
	  cout<<"Name of Element: "<<s1<<"\n";
	  cout<<"Symbol of Element: "<<s2<<"\n";
	  cout<<"Atomic Mass: "<<am<<"\n";
	  cout<<"\nAre you sure to modify the record(Y/N): ";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	  { cout<<"\nWhat you want to change\n";
	    cout<<"1.Name of Element\n2.Symbol of Element\n3.Atomic Mass\n\n";
	    cout<<"Enter your choice: ";
	    cin>>b;
	    switch(b)
	    { case 1: cout<<"\nEnter New Name of Elment:";
		      cin>>s1;
		      break;
	      case 2: cout<<"\nEnter New Symbol of Element: ";
		      cin>>s2;
		      break;
	      case 3: cout<<"\nEnter New Atomic Mass: ";
		      cin>>am;
		      break;
	     default: cout<<"\nWrong Choice";
		      break;
	    }
	  }
	  else
	  { cout<<"\nRecord not Modify";
	    l=1;
	  }
	  return(l);
	}
	char F()
	{ return(s2[0]);
	}
	char G()
	{ return(s2[1]);
	}
};
void main()
{       int x,r,rn,p,r1,rn1,k;
	char s3[5],s4[5];
	long pos;
	clrscr();
	A obj;
	while(x!=4)
	{ clrscr();
	  cout<<"\t\t\t**********************\n";
	  cout<<"\t\t\t    PERODIC TABLE\n";
	  cout<<"\t\t\t**********************\n\n\n";
	  cout<<"MENU\n\n";
	  cout<<"1.Press 1 for Add a New Element\n";
	  cout<<"2.Press 2 for Search a Element\n";
	  cout<<"3.Press 3 for Edit given Element\n";
	  cout<<"4.Press 4 for Exit\n\n";
	  cout<<"Enter your choice: ";
	  cin>>x;
	  switch(x)
	  { case 1: clrscr();
		    cout<<"Adding a New Element\n\n";
		    ofstream outfile1;
		    outfile1.open("perodictable.dat",ios::app|ios::binary);
		    obj.B();
		    outfile1.write((char*)&obj,sizeof(obj));
		    outfile1.close();
		    cout<<"\n\nDetails that you have added\n\n";
		    obj.C();
		    getch();
		    break;
	    case 2: int f=0;
		    clrscr();
		    cout<<"Searching the Details of Element\n\n";
		    ifstream infile1;
		    infile1.open("perodictable.dat",ios::in|ios::binary);
		    cout<<"What you want to Search Element: \n";
		    cout<<"1.By Symbol\n2.By Atomic Number\n\n";
		    cout<<"Enter your Choice: ";
		    cin>>p;
		    if(p==1)
		    { cout<<"Enter Symbol: ";
		      cin>>s3;
		      while(infile1.read((char*)&obj,sizeof(obj)))
		      { s4[0]=obj.F();
			s4[1]=obj.G();
			s4[2]='\0';
			if(strcmp(s3,s4)==0)
			{ cout<<"\nRecord found !!!\n\n";
			  obj.C();
			  f=1;
			  getch();
			  break;
			}
		      }
		      infile1.close();
		      if(f==0)
		      cout<<"\nSorry ! Record Not Found\n";
		      getch();
		    }
		    else if(p==2)
		    { cout<<"Enter Atomic Number: ";
		      cin>>r;
		      while(infile1.read((char*)&obj,sizeof(obj)))
		      { rn=obj.D();
			if(r==rn)
			{ cout<<"\nRecord found !!!\n\n";
			  obj.C();
			  f=1;
			  getch();
			  break;
			}
		      }
		      infile1.close();
		      if(f==0)
		      cout<<"\nSorry ! Record Not Found\n";
		      getch();
		    }
		    else
		    { cout<<"\nWrong Choice";
		      getch();
		    }
		    break;
	    case 3: int y=0;
		    clrscr();
		    cout<<"Editing the exiting Element\n\n";
		    fstream inout;
		    inout.open("perodictable.dat",ios::out|ios::in|ios::binary);
		    cout<<"\nEnter Atomic Number: ";
		    cin>>r1;
		    while(inout)
		    { pos=inout.tellg();
		      inout.read((char*)&obj,sizeof(obj));
		      rn1=obj.D();
		      if(rn1==r1)
		      { k=obj.E();
			y=1;
			inout.seekg(pos);
			inout.write((char*)&obj,sizeof(obj));
			getch();
			if(k==0)
			{ cout<<"\nRecord Modified Successfully";
			  getch();
			  clrscr();
			  cout<<"Modify Record is shown below-\n\n";
			  obj.C();
			  getch();
			}
			break;
		      }
		    }
		    inout.close();
		    if(y==0)
		    cout<<"\nSorry ! Record not Found";
		    getch();
		    break;
	    case 4: cout<<"EXIT";
		    break;
	  default:  cout<<"Wrong choice";
		    getch();
		    break;
	 }
       }
       getch();
}