#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
void Screen();
 void addAmount()
 {
  clrscr();
  for(int i=0;i<80;i++)
     {
      cprintf(" ");
     }
   for(int j=0;j<80;j++)
     {
      cprintf("_");
     }
     cout<<endl<<"               ADD Amount"<<endl<<endl;
     cprintf("Enter Account No. : ");
     int accNo=9211,enterAccNo;
     cin>>enterAccNo;
     if(enterAccNo==accNo)
     {
	 cout<<"Name : Mythros"<<endl;
	 cout<<"Current Balance : -1000 $"<<endl;
	 cout<<"Enter Ammount to Add : ";
	 int addAmount;
	 cin>>addAmount;
	 addAmount=addAmount-1000;
	 delay(1000);
	 cout<<endl<<endl<<"Amount Added !!!";
	 cout<<endl<<"Now Your Balance is : "<<addAmount;
	 cout<<endl<<endl<<endl<<endl<<"Press R key to Back";
	 char back='R';
	 char enterBack;
	 cin>>enterBack;
	 if(enterBack==back)
	 {
	    for(int i=0;i<80;i++)
	      {
		  cprintf(">");
		  delay(50);
	      }
	   Screen();
	 }
	 else
	 {
	 getch();
	 }

     }
 }
 void withdrawAmount()  {

    cout<<endl<<endl<<endl<<endl<<"Press R key to Back";
	 char back='R';
	 char enterBack;
	 cin>>enterBack;
	 if(enterBack==back)
	 {
	    for(int i=0;i<80;i++)
	       {
		  cprintf(">");
		  delay(50);
	       }
	   Screen();
	 }
	 else
	 {
	 getch();
	 }

 }
 void searchDetails()  {
	 cout<<endl<<endl<<endl<<endl<<"Press R key to Back";
	 char back='R';
	 char enterBack;
	 cin>>enterBack;
	 if(enterBack==back)
	 {
	    for(int i=0;i<80;i++)
	       {
		  cprintf(">");
		  delay(50);
	       }
	   Screen();
	 }
	 else
	 {
	 getch();
	 }

 }
 void modifyAccount()  {

       cout<<endl<<endl<<endl<<endl<<"Press R key to Back";
	 char back='R';
	 char enterBack;
	 cin>>enterBack;
	 if(enterBack==back)
	 {
	    for(int i=0;i<80;i++)
	       {
		  cprintf(">");
		  delay(50);
	       }
	   Screen();
	 }
	 else
	 {
	 getch();
	 }

 }
 void exit()  {
    getch();
 }
void Screen()
{
  clrscr();
  gotoxy(24,2);
  cprintf("WELCOME TO STATE BANK OF INDIA");
  cout<<endl<<endl<<endl;
  cout<<"1. ADD AMOUNT "<<endl;
  cout<<"2. WITHDRAW AMOUNT"<<endl;
  cout<<"3. SEARCH ACCOUNT DETAILS"<<endl;
  cout<<"4. MODIFY ACCOUNT"<<endl;
  cout<<"5. EXIT"<<endl;
  gotoxy(24,15);
  cprintf("Choose any Option...");
  int choice;
  cin>>choice;
   gotoxy(0,40);
     for(int i=0;i<80;i++)
     {
      cprintf(">");
      delay(50);
     }
  switch(choice)
  {
    case 1:
    addAmount();
    case 2:
    withdrawAmount();
    case 3:
    searchDetails();
    case 4:
    modifyAccount();
    case 5:
    exit();
  }
}
void PasswordInterface()
{
   clrscr();
   int pass=1234,enterPass;
   gotoxy(20,12);
   cprintf("PLEASE ENTER YOUR PIN....");
   cin>>enterPass;
   if(enterPass==pass)
   {
     gotoxy(0,40);
     for(int i=0;i<80;i++)
     {
      cprintf(">");
      delay(50);
     }
     Screen();
   }
   else
   {
     gotoxy(10,40);
      cprintf("WRONG PASSWORD");
   }
}
void main()
{
    clrscr();
    PasswordInterface();
    getch();
 }
