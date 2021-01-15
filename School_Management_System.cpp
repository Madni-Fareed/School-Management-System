#include<conio.h>
#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
bool check = true;
struct node    
{
 char Std_Name[30];
 char Class[15];
 int Roll_No;
  char Std_Cont[11];
 node *next;
}*head,*lastptr;
void Stu_Adding()   
{
 node *p;
 p=new node;
 cout<<"Enter Student's Name : ";
 gets(p->Std_Name);
 fflush(stdin);
 cout<<endl<<"Enter Student's Class : ";
 gets(p->Class);
 fflush(stdin);
 cout<<endl<<"Enter Student's Roll No : ";
 cin>>p->Roll_No;
 fflush(stdin);
 cout<<endl<<"Enter Student's Contact No : ";
 cin>>p->Std_Cont;
 fflush(stdin);
 p->next=NULL;

 if(check)
 {
  head = p;
  lastptr = p;
  check = false;
 }
 else
 {
  lastptr->next=p;
  lastptr=p;
 }
     cout<<endl<<"\t\t*This Record is Entered*"<<endl;
	 cout<<endl<<"Press Any key to go to *Student's Manu*"<<endl;
 getch();
}
void Stu_Searching()  
{
 node *prev=NULL;
 node *current=NULL;
 int SearchNo;
 cout<<"Enter Student Roll No to Search: ";
 cin>>SearchNo;
 prev=head;
 current=head;
  if(head==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current->Roll_No!=SearchNo)
 {
  prev=current;
  current=current->next;
 }
 cout<<endl<<"Name      : ";
 puts(current->Std_Name);
 cout<<endl<<"Roll No   : ";
 cout<<current->Roll_No;
 cout<<endl<<"Class     : ";
 puts(current->Class);
 cout<<endl<<"Contact No: ";
 cout<<current->Std_Cont;
  cout<<endl<<"\nPress Any key to go to *Student's Manu*"<<endl;
 getch();
}
void Stu_Updating()  
{
 node *ptr;
 node *prev=NULL;
 node *current=NULL;
 int ModifyNo;
 cout<<"Enter Roll No for Updating the Record : "<<endl;
 cin>>ModifyNo;
 prev=head;
 current=head;
  if(head==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current->Roll_No!=ModifyNo)
 {
  prev=current;
  current=current->next;
 }
 ptr=new node;
 fflush(stdin);
 cout<<"Enter Updated Name of Student : ";
 gets(ptr->Std_Name);
 fflush(stdin);
 cout<<endl<<"Enter Updated Class of Student : ";
 gets(ptr->Class);
 fflush(stdin);
 cout<<endl<<"Enter Updated Roll No of Student : ";
 cin>>ptr->Roll_No;
 fflush(stdin);
 cout<<endl<<"Enter Updated Contact no of Student : ";
 cin>>ptr->Std_Cont;
 fflush(stdin);
 prev->next=ptr;
 ptr->next=current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"\t\t*This Record is Updated*"<<endl;
 cout<<endl<<"Press Any key to go to *Student's Manu*"<<endl;
 getch();
}
void Stu_Deleting()    
{
 node *ptr=NULL;
 node *prev=NULL;
 node *current=NULL;
 int DelNo;
 cout<<"Enter Roll No to Delete the Record : ";
 cin>>DelNo;
 prev=head;
 current=head;
  if(head==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current->Roll_No!=DelNo)
 {
  prev=current;
  current=current->next;
 }
 prev->next = current->next;
 current->next=NULL;
 delete current;
 cout<<endl<<"\t\t*This Record is Deleted*";
  cout<<endl<<"Press Any key to go to *Student's Manu*"<<endl;
 getch();
}
bool check2 = true;
struct node2    
{
 char Teach_Name[30];
 char Email[15];
 int Teach_ID;
  char Teach_Cont[11];
 node2 *next2;
}*head2,*lastptr2;
void Teach_Adding()   
{
 node2 *p2;
 p2=new node2;
 cout<<"Enter teacher's Name : ";
 gets(p2->Teach_Name);
 fflush(stdin);
 cout<<endl<<"Enter teacher's E-mail : ";
 gets(p2->Email);
 fflush(stdin);
 cout<<endl<<"Enter teacher's ID : ";
 cin>>p2->Teach_ID;
 fflush(stdin);
 cout<<endl<<"Enter teacher's Contact No : ";
 cin>>p2->Teach_Cont;
 fflush(stdin);
 p2->next2=NULL;

 if(check2)
 {
  head2 = p2;
  lastptr2 = p2;
  check2 = false;
 }
 else
 {
  lastptr2->next2=p2;
  lastptr2=p2;
 }
     cout<<endl<<"\t\t* Record is Entered *"<<endl;
	 cout<<endl<<"Press Any key to go to * Teacher's Manu *"<<endl;
 getch();
}
void Teach_Searching()  
{
 node2 *prev2=NULL;
 node2 *current2=NULL;
 int SearchNo;
 cout<<"Enter teacher's Id to Search : ";
 cin>>SearchNo;
 prev2=head2;
 current2=head2;
 if(head2==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current2->Teach_ID!=SearchNo)
 {
  prev2=current2;
  current2=current2->next2;
 }
 cout<<endl<<"Teacher's Name : ";
 puts(current2->Teach_Name);
 cout<<endl<<"Teacher's ID : ";
 cout<<current2->Teach_ID;
 cout<<endl<<"Teacher's E-mail : ";
 puts(current2->Email);
 cout<<endl<<"Teacher's Contact No : ";
 cout<<current2->Teach_Cont;
  cout<<endl<<"\nPress Any key to go to * Teacher's Manu *"<<endl;
 getch();
}
void Teach_Updating()  
{
 node2 *ptr2;
 node2 *prev2=NULL;
 node2 *current2=NULL;
 int ModifyNo;
 cout<<"Enter teacher's ID to Modify Record :"<<endl;
 cin>>ModifyNo;
 prev2=head2;
 current2=head2;
  if(head2==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current2->Teach_ID!=ModifyNo)
 {
  prev2=current2;
  current2=current2->next2;
 }
 ptr2=new node2;
 fflush(stdin);
 cout<<"Enter Updated Teacher's Name : ";
 gets(ptr2->Teach_Name);
 fflush(stdin);
 cout<<endl<<"Enter Updated Teacher's E-mail: ";
 gets(ptr2->Email);
 fflush(stdin);
 cout<<endl<<"Enter Updated Teacher's ID : ";
 cin>>ptr2->Teach_ID;
 fflush(stdin);
 cout<<endl<<"Enter Updated Teacher's Contact No : ";
 cin>>ptr2->Teach_Cont;
 fflush(stdin);
 prev2->next2=ptr2;
 ptr2->next2=current2->next2;
 current2->next2=NULL;
 delete current2;
 cout<<endl<<"\t\t* Record is Updated! *"<<endl;
 cout<<endl<<"Press Any key to go to * Teacher's Manu *"<<endl;
 getch();
}
void Teach_Deleting()    
{
 node2 *ptr2=NULL;
 node2 *prev2=NULL;
 node2 *current2=NULL;
 int DelNo;
 cout<<"Enter Teacher's ID to Delete the Record : ";
 cin>>DelNo;
 prev2=head2;
 current2=head2;
  if(head2==NULL)
 {
	 system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|        Empty!         |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	exit(0);
 }
 while(current2->Teach_ID!=DelNo)
 {
  prev2=current2;
  current2=current2->next2;
 }
 prev2->next2 = current2->next2;
 current2->next2=NULL;
 delete current2;
 cout<<endl<<"\t\t* Record is Deleted! *";
  cout<<endl<<"Press Any key to go to * Teacher's Manu *"<<endl;
 getch();
}

int main()
{
main:system("cls");
	string user_name = "madni";
	string password = "14679";
	string U_name;
	string Pass_word;
	cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|     LogIn Please      |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	cout<<"\n\nEnter User Name : ";
	cin>>U_name;
	cout<<"Enter Password  : ";
	cin>>Pass_word;
	if(U_name == user_name && Pass_word == password)
	{
b:system("cls");
	char choice;
  cout<<"\n\t|---------------------------------|"<<endl;
  cout<<"\t|                                 |";
  cout<<"\n\t|\t****Main Manu****         |"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t|---------------------------------|"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t| Enter 'S' for Student's Record  |"<<endl;
  cout<<"\t| Enter 'T' for Teacher's Record  |"<<endl;
  cout<<"\t| Enter 'E' for Exit              |"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t ---------------------------------"<<endl;
  cout<<endl<<"Enter Your Choice: ";
  choice=getch();
  if(choice=='S')
  {
 char a;
 do
 {	
x: system("cls");
  cout<<"\t ------------------------------------"<<endl;
  cout<<"\t|                                    |"<<endl;
  cout<<"\t|\t ***Student's Manu***        |"<<endl;
  cout<<"\t|                                    |"<<endl;
  cout<<"\t|---------------------------------   |"<<endl;
  cout<<"\t|                                    |"<<endl;
  cout<<"\t| Enter 'R' to Register New Student  |"<<endl;
  cout<<"\t| Enter 'S' to Search Student Data   |"<<endl;
  cout<<"\t| Enter 'U' to Update Student Data   |"<<endl;
  cout<<"\t| Enter 'D' to Delete Student Data   |"<<endl;
  cout<<"\t| Enter 'M' for Main Menu            |"<<endl;
  cout<<"\t|                                    |"<<endl;
  cout<<"\t ------------------------------------"<<endl;
  cout<<endl<<"Enter Your Choice: ";
  a=getch();
  if(a=='R')
  {
   system("cls");
   Stu_Adding();
  }
  else if(a=='S')
  {
   system("cls");
   Stu_Searching();
  }
  else if(a=='U')
  {
   system("cls");
   Stu_Updating();
  }
  else if(a=='D')
  {
   system("cls");
   Stu_Deleting();
  }
  else if(a=='M')
  {
   goto b;
	  //exit(0);
  }
  else
  {
	   system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|     Invalid Input     |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(100000);
	   goto x;
  }
 
 }while(a = 1);
 getch();
  }
  else if(choice=='T')
  {
char a;
 do
 {	
c: system("cls");
  cout<<"\t ---------------------------------"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t|\t ***Teacher's Manu***     |"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t|---------------------------------|"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t| Enter 'A' for Adding New Record |"<<endl;
  cout<<"\t| Enter 'S' for Searching Record  |"<<endl;
  cout<<"\t| Enter 'U' for Updating Record   |"<<endl;
  cout<<"\t| Enter 'D' for Deleting Record   |"<<endl;
  cout<<"\t| Enter 'M' for Main Menu         |"<<endl;
  cout<<"\t|                                 |"<<endl;
  cout<<"\t ---------------------------------"<<endl;
  cout<<endl<<"Enter Your Choice: ";
  a=getch();
  if(a=='A')
  {
   system("cls");
   Teach_Adding();
  }
  else if(a=='S')
  {
   system("cls");
   Teach_Searching();
  }
  else if(a=='U')
  {
   system("cls");
   Teach_Updating();
  }
  else if(a=='D')
  {
   system("cls");
   Teach_Deleting();
  }
  else if(a=='M')
  {
   goto b;
	  //exit(0);
  }
  else
  {
	   system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|     Invalid Input     |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
	   goto c;
  }
 
 }while(a = 1);
 getch();


  }
  else if(choice=='E')
  {
  exit(0);
  }
  else
  { 
	  system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|     Invalid Input     |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
  goto b;
  }
  }
  else
  {
	  system("cls");
cout<<"\n\t\t|-----------------------|"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|     Invalid Login     |"<<endl;
	cout<<"\t\t|                       |"<<endl;
	cout<<"\t\t|-----------------------|"<<endl;
	Sleep(1000);
goto main;
}
}

