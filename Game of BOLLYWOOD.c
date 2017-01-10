//Game of BOLLYWOOD
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void main()
{     char s1[50],s2[50],s3[50],s4[500],c,ch='y';
      int i,j,p,z,q,l,a,b;
      time_t t;
      clrscr();
      time(&t);
      srand((unsigned int) t);
      while(ch=='Y'||ch=='y')
      { for(l=0;l<1;l++)
	{ b=rand()%10;
	  if(b==0)
	  a=rand()%10;
	  if(b==1)
	  a=rand()%10+5;
	  if(b==2)
	  a=rand()%10+10;
	  if(b==3)
	  a=rand()%10+15;
	  if(b==4)
	  a=rand()%10+20;
	  if(b==5)
	  a=rand()%10+25;
	  if(b==6)
	  a=rand()%10+30;
	  if(b==7)
	  a=rand()%10+35;
	  if(b==8)
	  a=rand()%10+40;
	  if(b==9)
	  a=rand()%10+45;
	  if(a==0)
	  { char s4[]="KRRISH";
	    strcpy(s1,s4);
	  }
	  if(a==1)
	  { char s4[]="MAIN/HOON/HERO/TERA";
	    strcpy(s1,s4);
	  }
	  if(a==2)
	  { char s4[]="PREM/RATAN/DHAN/PAAYO";
	    strcpy(s1,s4);
	  }
	  if(a==3)
	  { char s4[]="BAJRANGI/BHAIJAAN";
	    strcpy(s1,s4);
	  }
	  if(a==4)
	  { char s4[]="HAPPY/NEW/YEAR";
	    strcpy(s1,s4);
	  }
	  if(a==5)
	  { char s4[]="MAIN/TERA/HERO";
	    strcpy(s1,s4);
	  }
	  if(a==6)
	  { char s4[]="KHAMOSHIYA";
	    strcpy(s1,s4);
	  }
	  if(a==7)
	  { char s4[]="SONALI/CABLE";
	    strcpy(s1,s4);
	  }
	  if(a==8)
	  { char s4[]="AJAB/PREM/KI/GHAZAB/KAHANI";
	    strcpy(s1,s4);
	  }
	  if(a==9)
	  { char s4[]="HAMARI/ADHURI/KAHANI";
	    strcpy(s1,s4);
	  }
	  if(a==10)
	  { char s4[]="MAINE/PAYAAR/KIYA";
	    strcpy(s1,s4);
	  }
	  if(a==11)
	  { char s4[]="DARR/@/MALL";
	    strcpy(s1,s4);
	  }
	  if(a==12)
	  { char s4[]="ZANZEER";
	    strcpy(s1,s4);
	  }
	  if(a==13)
	  { char s4[]="SHOILAY";
	    strcpy(s1,s4);
	  }
	  if(a==14)
	  { char s4[]="JADUGAR";
	    strcpy(s1,s4);
	  }
	  if(a==15)
	  { char s4[]="SULTAAN";
	    strcpy(s1,s4);
	  }
	  if(a==16)
	  { char s4[]="DEEWAR";
	    strcpy(s1,s4);
	  }
	  if(a==17)
	  { char s4[]="BODYGAURD";
	    strcpy(s1,s4);
	  }
	  if(a==18)
	  { char s4[]="PREM/ROG";
	    strcpy(s1,s4);
	  }
	  if(a==19)
	  { char s4[]="MAIN/PREM/KI/DEEWAMI";
	    strcpy(s1,s4);
	  }
	  if(a==20)
	  { char s4[]="PATNER";
	    strcpy(s1,s4);
	  }
	  if(a==21)
	  { char s4[]="GAMBLER";
	    strcpy(s1,s4);
	  }
	  if(a==22)
	  { char s4[]="BAADAL";
	    strcpy(s1,s4);
	  }
	  if(a==23)
	  { char s4[]="SHALAKHE";
	    strcpy(s1,s4);
	  }
	  if(a==24)
	  { char s4[]="CHANDAL";
	    strcpy(s1,s4);
	  }
	  if(a==25)
	  { char s4[]="DISCO/DANCER";
	    strcpy(s1,s4);
	  }
	  if(a==26)
	  { char s4[]="BAJIGAR";
	    strcpy(s1,s4);
	  }
	  if(a==27)
	  { char s4[]="SINGH/IS/KING";
	    strcpy(s1,s4);
	  }
	  if(a==28)
	  { char s4[]="JHANI/DHUSHMAN";
	    strcpy(s1,s4);
	  }
	  if(a==29)
	  { char s4[]="DHARKAN";
	    strcpy(s1,s4);
	  }
	  if(a==30)
	  { char s4[]="LOC/KARGAL";
	    strcpy(s1,s4);
	  }
	  if(a==31)
	  { char s4[]="GARAM/MASALA";
	    strcpy(s1,s4);
	  }
	  if(a==32)
	  { char s4[]="MADARAS/CAFE";
	    strcpy(s1,s4);
	  }
	  if(a==33)
	  { char s4[]="RAGINNI/MMS/2";
	    strcpy(s1,s4);
	  }
	  if(a==34)
	  { char s4[]="AGNEEPATH";
	    strcpy(s1,s4);
	  }
	  if(a==35)
	  { char s4[]="JAB/WE/MET";
	    strcpy(s1,s4);
	  }
	  if(a==36)
	  { char s4[]="NAMAK/HALAL";
	    strcpy(s1,s4);
	  }
	  if(a==37)
	  { char s4[]="NAYAK";
	    strcpy(s1,s4);
	  }
	  if(a==38)
	  { char s4[]="GULAAM";
	    strcpy(s1,s4);
	  }
	  if(a==39)
	  { char s4[]="JORU/KA/GULAAM";
	    strcpy(s1,s4);
	  }
	  if(a==40)
	  { char s4[]="GANGA/JAL";
	    strcpy(s1,s4);
	  }
	  if(a==41)
	  { char s4[]="SARFAROSH";
	    strcpy(s1,s4);
	  }
	  if(a==42)
	  { char s4[]="36/CHINA/TOWN";
	    strcpy(s1,s4);
	  }
	  if(a==43)
	  { char s4[]="CHACHI/420";
	    strcpy(s1,s4);
	  }
	  if(a==44)
	  { char s4[]="LIFE/IN/A/METRO";
	    strcpy(s1,s4);
	  }
	  if(a==45)
	  { char s4[]="PAGE/3";
	    strcpy(s1,s4);
	  }
	  if(a==46)
	  { char s4[]="DEV/DAS";
	    strcpy(s1,s4);
	  }
	  if(a==47)
	  { char s4[]="THE/BURNING/TRAIN";
	    strcpy(s1,s4);
	  }
	  if(a==48)
	  { char s4[]="WELCOME";
	    strcpy(s1,s4);
	  }
	  if(a==49)
	  { char s4[]="GHATAK";
	    strcpy(s1,s4);
	  }
	  if(a==50)
	  { char s4[]="DILL/TO/PAGAL/HE";
	    strcpy(s1,s4);
	  }
	  if(a==51)
	  { char s4[]="MERA/NAAM/JOKER";
	    strcpy(s1,s4);
	  }
	  if(a==52)
	  { char s4[]="GHAJANI";
	    strcpy(s1,s4);
	  }
	  if(a==53)
	  { char s4[]="MR/INDIA";
	    strcpy(s1,s4);
	  }
	  if(a==54)
	  { char s4[]="BETA";
	    strcpy(s1,s4);
	  }
	  if(a==55)
	  { char s4[]="BORDER";
	    strcpy(s1,s4);
	  }
	}
	clrscr();
	q=0;
	printf("GAME INSTRUCTIONS\n");
	printf("1.You should have to activate the capslock button.\n");
	printf("2.Press the keys onces at a time.\n");
	printf("3.In the following film the vowels are already given to you.\n");
	printf("4.Every wrong input you lose the chances.\n");
	printf("Press Enter for start");
	getch();
	clrscr();
	printf("\t\t\t     *******************\n");
	printf("\t\t\t\t\b\b\bBOLLYWOOD\n");
	printf("\t\t\t*******************\n");
	printf("Game Start\n");
	for(p=5;p>0;)
	{ printf("You have %d chances left for guessing the name of film\n",p);
	  i=0;
	  while(s1[i]!='\0')
	  { if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'||s1[i]==s2[i]||s1[i]=='/')
	    { s2[i]=s1[i];
	      printf("%c",s2[i]);
	    }
	    else
	    { s2[i]='_';
	      printf("_");
	    }
	    i++;
	  }
	  s2[i]='\0';
	  printf("\nEnter a alphabet: ");
	  scanf("%s",&c);
	  s3[q]=c;
	  s3[q+1]='\0';
	  z=0;
	  j=0;
	  while(s1[j]!='\0')
	  { if(s1[j]==c)
	    { s2[j]=s1[j];
	      z++;
	      if(z==1)
	      { p++;
		printf("Correct input\n");
		getch();
	      }
	      else
	      printf("");
	    }
	    j++;
	  }
	  if(z==0)
	  { printf("Wrong input\n");
	    getch();
	  }
	  p--;
	  clrscr();
	  printf("\t\t\t*******************\n");
	  printf("\t\t\t\t\b\b\bBOLLYWOOD\n");
	  printf("\t\t\t*******************\n");
	  printf("Game Start\n");
	  printf("You used these alphabets: %s\n",s3);
	  if(strcmp(s1,s2)==0)
	  { clrscr();
	    printf("The name of film you enters is correct\n");
	    printf("The name of film is:\n");
	    puts(s1);
	    printf("YOU WON\n");
	    printf("THANK YOU FOR PLAYING BOLLYWOOD\n");
	    printf("MADE BY- SHASHANK");
	    getch();
	    break;
	  }
	  q++;
	}
	if(p==0)
	{ clrscr();
	  printf("YOU LOSE\n");
	  printf("The name of film is:\n");
	  puts(s1);
	  printf("THANK YOU FOR PLAYING BOLLYWOOD\n");
	  printf("MADE BY- SHASHANK");
	  getch();
	}
	printf("\nDo you want to continue this game(Y/N): ");
	fflush(stdin);
	scanf("%c",&ch);
      }
      getch();
}