//Student Management system
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class A
{       int r;
	float per,t,e,p,c,cp,m;
	char s1[2000],s2[2000],s3[2000],s4[2000];
	public:
	void B()
	{ cout<<"Enter Name of Student: ";
	  gets(s1);
	  cout<<"Enter Father's name: ";
	  gets(s2);
	  cout<<"Enter Mother's Name: ";
	  gets(s3);
	  cout<<"Enter Class: ";
	  cin>>s4;
	  cout<<"Enter Roll Number: ";
	  cin>>r;
	  cout<<"Enter 5 Subject Marks(out of 100):\n";
	  cout<<"English: ";
	  cin>>e;
	  cout<<"Physics: ";
	  cin>>p;
	  cout<<"Chemisrty: ";
	  cin>>c;
	  cout<<"Maths: ";
	  cin>>m;
	  cout<<"Computer: ";
	  cin>>cp;
	}
	void C()
	{ cout<<"Name of Student: "<<s1<<"\n";
	  cout<<"Father's name: "<<s2<<"\n";
	  cout<<"Mother's Name: "<<s3<<"\n";
	  cout<<"Class: "<<s4<<"\n";
	  cout<<"Roll Number: "<<r<<"\n";
	  cout<<"Subject Marks(out of 100):\n";
	  cout<<"English: "<<e<<"\n";
	  cout<<"Physics: "<<p<<"\n";
	  cout<<"Chemisrty: "<<c<<"\n";
	  cout<<"Maths: "<<m<<"\n";
	  cout<<"Computer: "<<cp<<"\n";
	}
	int D()
	{ return(r);
	}
	int E()
	{ char ch;
	  int b,l=0;
	  cout<<"\nYou are Modifying this Record\n\n";
	  cout<<"Name of Student: "<<s1<<"\n";
	  cout<<"Father's name: "<<s2<<"\n";
	  cout<<"Mother's Name: "<<s3<<"\n";
	  cout<<"Class: "<<s4<<"\n";
	  cout<<"Subjects Marks(out of 100):\n";
	  cout<<"English: "<<e<<"\n";
	  cout<<"Physics: "<<p<<"\n";
	  cout<<"Chemisrty: "<<c<<"\n";
	  cout<<"Maths: "<<m<<"\n";
	  cout<<"Computer: "<<cp<<"\n";
	  cout<<"\nAre you sure to modify the record(Y/N): ";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	  { cout<<"\nWhat you want to change\n";
	    cout<<"1.Name of Student\n2.Father's Name\n3.Mother's Name\n4.Subjects Marks\n\n";
	    cout<<"Enter your choice: ";
	    cin>>b;
	    switch(b)
	    { case 1: cout<<"\nEnter New Name of Student:";
		      gets(s1);
		      break;
	      case 2: cout<<"\nEnter Father's Name: ";
		      gets(s2);
		      break;
	      case 3: cout<<"\nEnter Mother's Name: ";
		      gets(s3);
		      break;
	      case 4: cout<<"Enter New Subjects Marks:\n";
		      cout<<"English: ";
		      cin>>e;
		      cout<<"Physics: ";
		      cin>>p;
		      cout<<"Chemisrty: ";
		      cin>>c;
		      cout<<"Maths: ";
		      cin>>m;
		      cout<<"Computer: ";
		      cin>>cp;
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
	void F()
	{ cout<<"Name of Student: "<<s1;
	  cout.width(30);
	  cout<<"Roll Number: "<<r<<"\n";
	  cout<<"Father's name  : "<<s2;
	  cout.width(30);
	  cout<<"Class: "<<s4<<"\n";
	  cout<<"Mother's Name  : "<<s3<<"\n\n";
	  cout<<"___________________________________________________________\n";
	  cout<<"-----------------------------------------------------------\n";
	  cout<<"NAME OF SUBJECTS";
	  cout.width(18);
	  cout<<"MAXIMUM MARKS";
	  cout.width(23);
	  cout<<"MARKS OBTAINED\n";
	  cout<<"___________________________________________________________\n";
	  cout<<"-----------------------------------------------------------\n";
	  cout<<"\n";
	  cout<<"English ";
	  cout.width(17);
	  cout<<"100";
	  cout.width(25);
	  cout<<e<<"\n";
	  cout<<"Physics ";
	  cout.width(17);
	  cout<<"100";
	  cout.width(25);
	  cout<<p<<"\n";
	  cout<<"Chemisrty ";
	  cout.width(15);
	  cout<<"100";
	  cout.width(25);
	  cout<<c<<"\n";
	  cout<<"Maths ";
	  cout.width(19);
	  cout<<"100";
	  cout.width(25);
	  cout<<m<<"\n";
	  cout<<"Computer  ";
	  cout.width(15);
	  cout<<"100";
	  cout.width(25);
	  cout<<cp<<"\n";
	  cout<<"---------------------------------------------------------------\n";
	  t=e+p+c+m+cp;
	  cout.width(27);
	  cout<<"Total= 500";
	  cout.width(22);
	  cout<<"Total= "<<t<<"\n";
	  cout<<"_______________________________________________________________\n";
	  per=t/5;
	  cout<<"\n\n";
	  cout.precision(2);
	  cout<<"Percentage= "<<per<<"%\n";
	  if(per>=85)
	  cout<<"Result: Excellent";
	  else if(per>=75&&per<85)
	  cout<<"Result: Very Good";
	  else if(per>=65&&per<75)
	  cout<<"Result: Good";
	  else
	  cout<<"Result: fair";
	}
};
void main()
{       int x,r,rn,r1,rn1,r2,rn2,k;
	long pos;
	clrscr();
	A obj;
	while(x!=5)
	{ clrscr();
	  cout<<"\t\t\t*************************\n";
	  cout<<"\t\t\tSTUDENT MANAGEMENT SYSTEM\n";
	  cout<<"\t\t\t**************************\n\n\n";
	  cout<<"MENU\n\n";
	  cout<<"1.Press 1 for Add a New Record of Studemt\n";
	  cout<<"2.Press 2 for Search a Record of Student\n";
	  cout<<"3.Press 3 for Edit Record of Student\n";
	  cout<<"4.Press 4 for Delete the Record of Student\n";
	  cout<<"5.Press 5 for Exit\n\n";
	  cout<<"Enter your choice: ";
	  cin>>x;
	  switch(x)
	  { case 1: clrscr();
		    cout<<"Adding a New Record\n\n";
		    ofstream outfile1;
		    outfile1.open("sms.dat",ios::app|ios::binary);
		    obj.B();
		    outfile1.write((char*)&obj,sizeof(obj));
		    outfile1.close();
		    cout<<"\n\nDetails that you have added\n\n";
		    obj.C();
		    getch();
		    break;
	    case 2: int f=0;
		    clrscr();
		    cout<<"Searching the Details of Student\n\n";
		    ifstream infile1;
		    infile1.open("sms.dat",ios::in|ios::binary);
		    cout<<"Enter Student Roll Number: ";
		    cin>>r2;
		    while(infile1.read((char*)&obj,sizeof(obj)))
		    { rn2=obj.D();
		      if(rn2==r2)
		      { cout<<"\nRecord found !!!\n\n";
			obj.F();
			f=1;
			getch();
			break;
		      }
		    }
		    infile1.close();
		    if(f==0)
		    cout<<"\nSorry ! Record Not Found\n";
		    getch();
		    break;
	    case 3: int y=0;
		    clrscr();
		    cout<<"Editing the Student Record\n\n";
		    fstream inout;
		    inout.open("sms.dat",ios::out|ios::in|ios::binary);
		    cout<<"\nEnter Roll No. of Student: ";
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
			  obj.F();
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
	    case 4: int g=0;
		    char d;
		    clrscr();
		    cout<<"Deleting the Student Record\n\n";
		    ofstream outfile3;
		    outfile3.open("temp.dat",ios::out|ios::binary);
		    ifstream infile4;
		    infile4.open("sms.dat",ios::out|ios::binary);
		    cout<<"Enter Student Roll no. you want to delete from record: ";
		    cin>>r2;
		    while(infile4.read((char*)&obj,sizeof(obj)))
		    { rn2=obj.D();
		      if(rn2==r2)
		      { g=1;
			cout<<"\nThe record you want to delete is:\n\n";
			obj.C();
			cout<<"\nAre you sure to delete the record(Y/N):";
			cin>>d;
			if(d=='n'||d=='N')
			{ outfile3.write((char*)&obj,sizeof(obj));
			  cout<<"\nThe Record is not deleted";
			}
			else
			cout<<"\nStudent Record successfully Deleted";
		      }
		      else
		      outfile3.write((char*)&obj,sizeof(obj));
		    }
		    if(g==0)
		    cout<<"\nSorry ! The Record you want to delete is not Found";
		    outfile3.close();
		    infile4.close();
		    remove("sms.dat");
		    rename("temp.dat","sms.dat");
		    getch();
		    break;
	    case 5: cout<<"EXIT";
		    break;
	  default:  cout<<"Wrong choice";
		    getch();
		    break;
	 }
       }
       getch();
}