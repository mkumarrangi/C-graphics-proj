
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>


class bank{char acc[10];
	   char ano[5];
	   char name[15];
	   char ac;
	   unsigned long int amt;
	   char pno[10];
	public:
	   bank()
	   {                               //default contructor
	       amt=0;
	   }
	   char*getano(){ return ano; }         //accessor functions
	   char*getname(){return name;}
	   char*getacc(){return acc;}
	   char*getpno(){return pno;}
	   unsigned long int getamt(){return amt;}
	   void getdata();
	   void putdata();
	   void showdata();
	   void modify(char*,char*,unsigned long int,char*);
	   void add();
	   void withdraw();
	   int  check(char*);
	   void magic();
	  }rec,st;         //objects of classes declared
void bank::getdata()       //to get data from user
{       int q;
	ty:
	one:
	cout<<"\nACCOUNT NO.(3 digits): ";
	cin>>ano;
	if(strlen(ano)!=3)
	{
		cout<<"\t3 digit required!! type again";
		goto one;
	}
	q=rec.check(ano);
	if(q==0)
	{ cout<<"\tacc.no preoccupied";
	goto ty; }
	cout<<"\nNAME : ";
	gets(name);
	again:
	cout<<"\nACOUNT TYPE(S:savings,O:others) : ";
	cin>>ac;
	if((ac!='s')&&(ac!='S')&&(ac!='o')&&(ac!='O'))
	{cout<<"\tWRONG OPERATION ;GIVE CORRECT INFO";
	goto again;}
	 if(ac=='s')
	strcpy(acc,"savings");
	else   strcpy(acc,"others");
	cout<<"\nPHONE NO. : ";
	cin>>pno;
	again2:
	cout<<"\nINITIAL AMOUNT(250 Rs. to 1000 Rs.) : ";
	cin>>amt;
	if((amt<250)||(amt>1000))
	{cout<<"\tNOT IN RANGE.TYPE AGAIN : ";
	goto again2;}
}

void bank::putdata()      //to view details of a particular record
{	cout<<"\nACCOUNT NO.: "<<ano<<"\nNAME : "<<name
	<<"\nPHONE NO. :"<<pno<<"\nACCOUNT TYPE : "<<acc
	<<"\nBALANCE AMOUNT : "<<amt;
}
void bank::showdata()    //to view all records
{       cout<<"\n"<<ano<<setw(23)<<name
	<<setw(23)<<acc<<setw(23)<<amt;
}
//function to modify record
void bank::modify(char* namee,char* accc,unsigned long int amtt,char*pnoo)
{	strcpy(name,namee);
	strcpy(acc,accc);
	amt=amtt;
	strcpy(pno,pnoo);
}
void bank::add()           // to add amount
{	unsigned long int ammount;
	cout<<"\nNAME : "<<name<<"\t\tCurrent balance : "<<amt;
	cout<<"\nEnter ammount to add : ";
	cin>>ammount;
	amt+=ammount;
	cout<<"\nAmmount added!! \nNew Balance : "<<amt;
}
void bank::withdraw()     //to withdraw amount
{	unsigned long int ammount;
	cout<<"\nNAME : "<<name<<"\t\tCurrent balance : "<<amt;
	cout<<"\nEnter ammount to withdraw : ";
	cin>>ammount;
	amt-=ammount;
	cout<<"\nAmmount withdrawn!! \nNew Balance : "<<amt;
}


void bank::magic()   //moving arrows
{
	for(int i=1;i<=80;i++)
		{delay(6);gotoxy(i,20);cout<<">";}
	for(i=1;i<=80;i++)
		{delay(6);gotoxy(i,20);cout<<" ";}
}

void pass()        // asks for password in the begining
{ char pass[10];
   while(1)
   {
	clrscr();
	gotoxy(33,7);
	cout<<"ENTER PASSWORD\n";
	gotoxy(30,8);
	cout<<"( type exit to exit )\n\t\t";
	cin>>pass;
	rec.magic();
	gotoxy(1,10);
	if(strcmpi(pass,"MYTHROS")==0)
	return;
	else{if(strcmpi(pass,"exit")==0)
		exit(0);
	else { cout<<"\n\t\t\a...............Wrong password.............."
		   <<"\n\t\t..........Press any key to Try again.......";
	       getch();
	       continue;
		}}
   }
}
int bank::check(char* ano)     //to check if a account no. exists or not
{
	fstream file("banknew.txt",ios::ate|ios::in|ios::out|ios::binary);
	file.seekg(0,ios::beg);
	while(file)
	{       file.read((char*)&st,sizeof(st));
		if(!file.eof())
		if(strcmp(ano,st.ano)==0)
		return 0;
	}
	return 1;
}


void main()
{      pass();
	 fstream file;
   start:
    file.open("banknew.txt",ios::ate|ios::in|ios::out|ios::binary);

  //variables defination
  char c,account[5],anoo[5],namee[15],accc[10],pnoo[11];
  unsigned long int amtt;
  int found=0,cnt=0,ch=0;
      while(1)
      {
		clrscr();
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	   cout<<"============================= I SEE YOU SEE I BANK =============================";
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	   cout<<"\n\n\t1)ADD ACCOUNT"<<
		 "\n\t2)VIEW ALL ACCOUNTS"<<
		 "\n\t3)ADD AMOUNT"<<
		 "\n\t4)WITHDRAW AMMOUNT"<<
		 "\n\t5)SEARCH ACCOUNT DETAILS"<<
		 "\n\t6)MODIFY ACCOUNT"<<
		 "\n\t7)CLOSE AN ACCOUNT"<<
		 "\n\t8)EXIT"<<
		 "\n\t\tCHOOSE ANY OPTION... ";
	   cin>>ch;
	   rec.magic();
	   clrscr();
	   switch(ch){
		case 1: cout<<"\nEnter details of new account\n";
			rec.getdata();
			cin.get(c);
			file.write((char*)&rec,sizeof(rec));
			file.clear();
			rec.magic();
			cout<<"\nAccount added succesfully!!\nPress any key to continue......";
			getch();
			break;
		case 2: cout<<"============================VIEWING ALL THE ACCOUNTS============================";
			cout<<"________________________________________________________________________________";
			gotoxy(25,2);
			cout<<"\nACC. no."<<setw(18)<<"NAME"<<setw(23)
			    <<"ACC.TYPE"<<setw(23)<<"BALANCE";
			cout<<"\n================================================================================\n";
			file.seekg(0,ios::beg);
			while(file)
			{ file.read((char*)&rec,sizeof(rec));
			  if(!file.eof())
			  rec.showdata();
			}
			cout<<"\nPress any key to continue......";
			file.clear();
			getch();
			break;
		case 3: cnt=0;
			cout<<"=============================== ADD AMOUNT =====================================\n";
			cout<<"\nEnter account no. : ";
			cin>>account;
			rec.magic();
			gotoxy(1,6);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{       cnt++;
				if(strcmpi(account,rec.getano())==0)
				{
					found=1;
					rec.add();
					break;
				}
			}
			file.clear();
			if(found==0)
				cout<<"\n\n\a-----------Record Not Found-------------\n";
			else
			{	int location=(cnt-1)*sizeof(rec);
				cin.get(c);
				if(file.eof())
					file.clear();
				file.seekp(location);
				file.write((char*)&rec,sizeof(rec));
				file.flush();
			}
			cout<<"\nPress any key to continue.....";
			getch();
			break;
		case 4: cnt=0;
			found=0;
			cout<<"================================WITHDRAW AMOUNT=================================\n";
			cout<<"\nEnter account no. : ";
			cin>>account;
			rec.magic();
			gotoxy(1,6);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{       cnt++;
				if(strcmpi(account,rec.getano())==0)
				{
					found=1;
					rec.withdraw();
					break;
				}
			}
			file.clear();
			if(found==0)
				cout<<"\n\n\a-----------Record Not Found-------------\n";
			else
			{	int location=(cnt-1)*sizeof(rec);
				cin.get(c);
				if(file.eof())
					file.clear();
				file.seekp(location);
				file.write((char*)&rec,sizeof(rec));
				file.flush();
			}
			cout<<"\nPress any key to continue.....";
			getch();
			break;
		case 5: cout<<"======================================SEARCH====================================\n";
			cout<<"\nEnter account no. : ";
			cin>>account;
			rec.magic();
			gotoxy(1,6);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{	if(strcmpi(account,rec.getano())==0)
				{
					found=1;
					rec.putdata();
				}
			}
			file.clear();
			if(found==1)
				cout<<"\n\n\a-----------Record Not Found-------------\n";
			cout<<"\nPress any key to continue.....";
			getch();
			break;
		case 6: cout<<"==========================================MODIFY================================\n";
			cout<<"\nEnter account no. : ";
			cin>>account;
			rec.magic();
			gotoxy(1,6);
			file.seekg(0,ios::beg);
			found=0;
			cnt=0;
			while(file.read((char*)&rec,sizeof(rec)))
			{       cnt++;
				if(strcmpi(account,rec.getano())==0)
				{
					found=1;
					break;
				}
			}
			file.clear();
			if(found!=1)
				cout<<"\n\n\a-----------Record Not Found-------------\n";
			else
			{	int location=(cnt-1)*sizeof(rec);
				cin.get(c);
				if(file.eof())
					file.clear();
				cout<<"\n**PLEASE ENTER '.' TO RETAIN**";
				cout<<"\nACCOUNT NO. : ";
				cout<<rec.getano();
				cout<<"\nEnter new name : ";
				gets(namee);
				if(strcmpi(namee,".")==0)
				strcpy(namee,rec.getname());
				cout<<"\nEnter new phone no. : ";
				cin>>pnoo;
				if(strcmp(pnoo,".")==0)
				strcpy(pnoo,rec.getpno());
				again:
				cout<<"\nAccount type(S:savings,O:others) ";
				cin>>c;
				if(c=='.')
				strcpy(accc,rec.getacc());
				if((c!='s')&&(c!='S')&&(c!='o')&&(c!='O')&&(c!='.'))
				{cout<<"\tWRONG OPERATION ;GIVE CORRECT INFORMATION";
				goto again;}
				 if(c=='s') strcpy(accc,"savings");
				 else
					 if(c=='o')
					 strcpy(accc,"others");
					 else
					 strcpy(accc,rec.getacc());
				cout<<"\nEnter new ammount :('-1' to retain) ";
				cin>>amtt;
				if(amtt==-1)
				amtt=rec.getamt();
				file.seekp(location);
				rec.modify(namee,accc,amtt,pnoo);
				file.write((char*)&rec,sizeof(rec));
				file.flush();
			}
			if(found==1)
			cout<<"\nAccount edited!!";
			cout<<"\nPress any key to continue.....";
			getch();
			break;
		case 7: found=0;
			cout<<"======================== CLOSE ACCOUNT ========================\n";
			cout<<"\nEnter account no : ";
			cin>>anoo;
			rec.magic();
			gotoxy(1,6);
			fstream fin;
			fin.open("temp.txt",ios::in|ios::out|ios::binary);
			file.seekg(0,ios::beg);
			while(file.read((char*)&rec,sizeof(rec)))
			{
			 if(!file.eof())
				{
			      if(strcmpi(anoo,rec.getano())==0)
				{       rec.putdata();
					cout<<"\n\n\t\t\a sure to close account(y/n): ";
					cin>>c;
					if((c=='n')||(c=='n'))
					fin.write((char*)&rec,sizeof(rec));
					found=1;
				}
				else
				if(strcmpi(anoo,rec.getano())!=0)
				{  fin.write((char*)&rec,sizeof(rec)); }
				}

			}
			if(found!=1)
			cout<<"\n\a----------------Account not found----------------";
			else
			if((c!='n')||(c!='n'))
			cout<<"\n\n-----------------------Account Closed-----------------------";
			if((c=='n')||(c=='n'))
			cout<<"\n\-------------------Account is not closed-------------------";
			file.close();
			fin.close();
			remove("banknew.txt");
			rename("temp.txt","banknew.txt");
			cout<<"\nPress any key to continue.....";
			getch();
			file.open("banknew.txt",ios::ate|ios::in|ios::out|ios::binary);
			break;
		case 8: file.close();

			getch();
			exit(0);

	      }
       }
}
















