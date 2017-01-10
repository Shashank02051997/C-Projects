//Bank Management system
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class A
{       int c,wm,d,e;
	double am;
	char s1[20],s2[20],s3[15],s4[20],s5[500],s6[10],s7[15];
	public:
	void B()
	{ cout<<"Enter Name: ";
	  gets(s1);
	  cout<<"Enter Father's Name: ";
	  gets(s2);
	  cout<<"Enter Date of Birth(dd/mm/yyyy): ";
	  cin>>s3;
	  cout<<"Enter Nationality: ";
	  cin>>s4;
	  cout<<"Enter Address of Residance: ";
	  gets(s5);
	  cout<<"Enter Mobile Number: ";
	  cin>>s7;
	  cout<<"Enter Amount to be Deposit: ";
	  cin>>am;
	  cout<<"Enter Type of Account-Saving or Current: ";
	  cin>>s6;
	  cout<<"Enter Citizenship Number :";
	  cin>>c;
	}
	void C()
	{ cout<<"Name: "<<s1<<"\n";
	  cout<<"Father's Name: "<<s2<<"\n";
	  cout<<"Date of Birth: "<<s3<<"\n";
	  cout<<"Nationality: "<<s4<<"\n";
	  cout<<"Address of Residance: "<<s5<<"\n";
	  cout<<"Mobile Number: "<<s7<<"\n";
	  cout<<"Current Balance: "<<am<<"\n";
	  cout<<"Type of Account-Saving or Current: "<<s6<<"\n";
	  cout<<"Citizenship Number: "<<c<<"\n";
	}
	int D()
	{ return(c);
	}
	int E()
	{ char ch;
	  int b,l=0;
	  cout<<"\nYou are Modifying this Record\n\n";
	  cout<<"Name: "<<s1<<"\n";
	  cout<<"Father's Name: "<<s2<<"\n";
	  cout<<"Date of Birth: "<<s3<<"\n";
	  cout<<"Nationality: "<<s4<<"\n";
	  cout<<"Address of Residance: "<<s5<<"\n";
	  cout<<"Mobile Number: "<<s7<<"\n";
	  cout<<"Current balance: "<<am<<"\n";
	  cout<<"Type of Account-Saving or Current: "<<s6<<"\n";
	  cout<<"Citizenship Number: "<<c<<"\n";
	  cout<<"\nAre you sure to modify the record(Y/N): ";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	  { cout<<"\nWhat you want to change\n";
	    cout<<"1.Name\n2.Father's Name\n3.DOB\n4.Address\n5.Mobile Number\n\n";
	    cout<<"Enter your choice: ";
	    cin>>b;
	    switch(b)
	    { case 1: cout<<"\nEnter New Name:";
		      gets(s1);
		      break;
	      case 2: cout<<"\nEnter New Father's Name: ";
		      gets(s2);
		      break;
	      case 3: cout<<"\nEnter Date of Birth: ";
		      cin>>s3;
		      break;
	      case 4: cout<<"\nEnter Address of Residance: ";
		      gets(s5);
		      break;
	      case 5: cout<<"\nEnter Mobile Number: ";
		      cin>>s7;
		      break;
	     default: cout<<"\nWrong Choice";
		      break;
	    }
	  }
	  else
	  { cout<<"\nYou not want to Modify the Record";
	    l=1;
	  }
	  return(l);
	}
	void F()
	{ int z,t,t1;
	  e=0;
	  wm=0;
	  d=0;
	  cout<<"Name: "<<s1<<"\n";
	  cout<<"Father's Name: "<<s2<<"\n";
	  cout<<"Date of Birth: "<<s3<<"\n";
	  cout<<"Nationality: "<<s4<<"\n";
	  cout<<"Address of Residance: "<<s5<<"\n";
	  cout<<"Mobile Number: "<<s7<<"\n";
	  cout<<"Amount Deposited: "<<am<<"\n";
	  cout<<"Type of Account-Saving or Current: "<<s6<<"\n";
	  cout<<"\nWhat you want to do\n";
	  cout<<"1.To Withdraw\n2.To Deposit\n";
	  cout<<"\nEnter your choice: ";
	  cin>>z;
	  switch(z)
	  { case 1: cout<<"\nWithdrawing the Amount\n";
		    cout<<"You having "<<am<<" Rs Amount in your Account"<<"\n";
		    cout<<"Enter Withdrawing Amount: ";
		    cin>>wm;
		    if(wm>am)
		    { cout<<"\nYou cannot Wihdraw the Amount of "<<wm<<" because the Deposited Amount is less than   Withdraw Amount\n";
		      e=1;
		    }
		    else
		    { cout<<"\nYour amount is Withdraw\n";
		      t1=am-wm;
		      am=t1;
		      cout<<"You have "<<am<<" Rs are in your account";
		    }
		    break;
	    case 2: cout<<"\nDepositing the Amount\n";
		    cout<<"You having "<<am<<" Rs Amount in your Account"<<"\n";
		    cout<<"Enter Amount to be Deposit: ";
		    cin>>d;
		    t=am+d;
		    am=t;
		    cout<<"\nYour Amount is successfully Deposited\n";
		    cout<<"You have "<<am<<" Rs are in your Account";
		    break;
	  default : cout<<"Wrong choice";
		    e=1;
		    getch();
		    break;
	 }
       }
       int G()
       { return(wm);
       }
       int H()
       { return(d);
       }
       void I()
       { cout<<"Withdraw Amount: "<<wm;
       }
       void J()
       { cout<<"Deposit Amount: "<<d;
       }
       int K()
       { return(e);
       }
};
void main()
{       int x,r,rn,r1,r2,rn1,rn2,rn3,cn,c2,k,e1;
	char d;
	long pos;
	clrscr();
	A obj;
	while(x!=7)
	{ clrscr();
	  cout<<"\t\t\t**********************\n";
	  cout<<"\t\t\tBANK MANAGEMENT SYSTEM\n";
	  cout<<"\t\t\t**********************\n\n\n";
	  cout<<"MENU\n\n";
	  cout<<"1.Press 1 for Create a New Account\n";
	  cout<<"2.Press 2 for Search Details of Customer Account\n";
	  cout<<"3.Press 3 for Edit the Customer Account\n";
	  cout<<"4.Press 4 for Transction\n";
	  cout<<"5.Press 5 for Delete The Customer Account\n";
	  cout<<"6.Press 6 for Full Details of Account Holder\n";
	  cout<<"7.Press 7 for Exit\n\n";
	  cout<<"Enter your choice: ";
	  cin>>x;
	  switch(x)
	  { case 1: clrscr();
		    cout<<"Creating a New Account\n\n";
		    ofstream outfile1;
		    outfile1.open("bank.dat",ios::app|ios::binary);
		    obj.B();
		    outfile1.write((char*)&obj,sizeof(obj));
		    outfile1.close();
		    cout<<"\n\nDetails that you have added\n\n";
		    obj.C();
		    getch();
		    break;
	    case 2: int f=0;
		    clrscr();
		    cout<<"Searching the Details of Customer Account\n\n";
		    ifstream infile2;
		    infile2.open("bank.dat",ios::in|ios::binary);
		    cout<<"Enter Citizenshipship Number to Search: ";
		    cin>>r;
		    while(infile2.read((char*)&obj,sizeof(obj)))
		    { rn=obj.D();
		      if(rn==r)
		      { cout<<"\nRecord found !!!\n\n";
			obj.C();
			f=1;
			getch();
			break;
		      }
		    }
		    infile2.close();
		    if(f==0)
		    cout<<"\nSorry ! Record Not Found\n";
		    getch();
		    break;
	    case 3: int y=0;
		    clrscr();
		    cout<<"Editing the Customer Account\n\n";
		    fstream inout;
		    inout.open("bank.dat",ios::out|ios::in|ios::binary);
		    cout<<"Enter Citizenship Number of the record you want to Modify: ";
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
	    case 4: int u=0,u1=0;
		    clrscr();
		    cout<<"Transction\n\n";
		    fstream inout1;
		    inout1.open("bank.dat",ios::out|ios::in|ios::binary);
		    cout<<"Enter Citizenship Number: ";
		    cin>>cn;
		    while(inout1)
		    { pos=inout1.tellg();
		      inout1.read((char*)&obj,sizeof(obj));
		      c2=obj.D();
		      if(cn==c2)
		      { cout<<"\n";
			obj.F();
			inout1.seekg(pos);
			inout1.write((char*)&obj,sizeof(obj));
			u=1;
			u1=1;
			getch();
			break;
		      }
		    }
		    inout1.close();
		    if(u1==0)
		    e1=1;
		    else
		    e1=obj.K();
		    if(e1!=1)
		    { ofstream outfile4;
		      outfile4.open("bank1.dat",ios::app|ios::binary);
		      obj.D();
		      obj.G();
		      obj.H();
		      outfile4.write((char*)&obj,sizeof(obj));
		      outfile4.close();
		    }
		    if(u==0)
		    cout<<"\nSorry ! Record not Found";
		    getch();
		    break;
	    case 5: int g=0;
		    clrscr();
		    cout<<"Deleting the customer Account\n\n";
		    ofstream outfile2;
		    outfile2.open("temp.dat",ios::out|ios::binary);
		    ifstream infile4;
		    infile4.open("bank.dat",ios::out|ios::binary);
		    cout<<"Enter Citizenship number of the record you want to delete: ";
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
			{ outfile2.write((char*)&obj,sizeof(obj));
			  cout<<"\nThe Account is not deleted";
			}
			else
			cout<<"\nCustomer Account successfully Deleted";
		      }
		      else
		      outfile2.write((char*)&obj,sizeof(obj));
		    }
		    if(g==0)
		    cout<<"\nSorry ! The Record you want to delete is not Found";
		    outfile2.close();
		    infile4.close();
		    remove("bank.dat");
		    rename("temp.dat","bank.dat");
		    getch();
		    break;
	    case 6: int f1=0;
		    clrscr();
		    cout<<"See whole Details of Customer Account\n\n";
		    ifstream infile5;
		    infile5.open("bank.dat",ios::in|ios::binary);
		    cout<<"Enter Citizenshipship Number to Search: ";
		    cin>>r2;
		    while(infile5.read((char*)&obj,sizeof(obj)))
		    { rn3=obj.D();
		      if(rn3==r2)
		      { cout<<"\nRecord found !!!\n\n";
			ifstream infile3;
			infile3.open("bank1.dat",ios::in|ios::binary);
			obj.C();
			cout<<"\n";
			while(infile3.read((char*)&obj,sizeof(obj)))
			{ rn3=obj.D();
			  if(rn3==r2)
			  { obj.I();
			    cout<<"\n";
			    obj.J();
			    cout<<"\n";
			    getch();
			  }
			}
			infile3.close();
			//obj.C();
			f1=1;
			getch();
			break;
		      }
		    }
		    infile5.close();
		    if(f1==0)
		    cout<<"\nSorry ! Record Not Found\n";
		    getch();
		    break;
	   case 7:  cout<<"EXIT";
		    break;
	  default:  cout<<"Wrong choice";
		    getch();
		    break;
	 }
       }
       getch();
}
