#include<bits/stdc++.h>
using namespace std;
class books{
	public:
		int stock;
		int number;
		char author[20],publisher[20];
		char bookname[20];
		float price;
		void loadbooks();
		void display();
		void student();
};
void books::loadbooks(){
	cout<<"\nEnter Book No.: ";
	cin>>number;
	cout<<"\nEnter Book Name: ";
	cin>>bookname;
	cout<<"\nEnter Author Name: ";
	cin>>author;
	cout<<"\nEnter Publisher Name: ";
	cin>>publisher;
	cout<<"\nEnter price: ";
	cin>>price;
	cout<<"\nEnter no. of stock: ";
	cin>>stock;
	 cout<<"\n-------------\n";
}
void books::display(){
	 cout<<"\nBook No.: "<<number;
     cout<<"\nBook Name: "<<bookname;
     cout<<"\nAuthor Name: "<<author;
     cout<<"\nPublisher Name: "<<publisher;
     cout<<"\nPrice: "<<price;
     cout<<"\nStock: "<<stock;
      cout<<"\n-------------\n";
}
class library{

    int reg_no,book_no;
    string name,branch;
public:
    void set_details(void){
        cout<<"Enter your name:"<<"\n";
        cin>>name;

        cout<<"Enter your registration no.:"<<"\n";
        cin>>reg_no;

        cout<<"Enter your branch"<<"\n";
        cin>>branch;
        cout<<"\n";
        }

     void display_details(void){
        cout<<"Name :"<<name<<"\n";
        cout<<"Registration No. :"<<reg_no<<"\n";
        cout<<"Branch :"<<branch<<"\n";
        cout<<"\n";
     }

     void ask_book(void){
        cout<<"Enter your Book no. :"<<"\n";
        cin>>book_no;
        cout<<"Book with "<<book_no<<" has been issued to "<<name<<" for 14 days"<<"\n";
        cout<<"After that a fine of Rs1/day will be charged";
     }
};
int main()
{
	cout<<"                             Library Managmenent System                        "<<"\n";
	cout<<"\n\n\n\n\n";
books obj[10];
library std1;
int ch,n;
do{
   cout<<"\n-------------\n";
   cout<<"\n1.Load Books\n2.Display\n3.Search\n4.Student\n5.Exit\n";
   cout<<"\n\nEnter your Choice:";
   cin>>ch;
   switch(ch)
   {
   case 1:
   	cout<<"\nEnter the no. of books: ";
   	cin>>n;
   	for(int i=0;i<n;i++)
   	obj[i].loadbooks();
   	break;
   case 2:
   	for(int i=0;i<n;i++)
   	obj[i].display();
   	break;
   case 3:
   	char bname[20], aname[20];
   cout<<"Enter name of the Book:";
   cin>>bname;
   cout<<"Enter name of the Author:";
   cin>>aname;
   for(int i=0;i<n;i++)
   {
    if(strcmp(bname,obj[i].bookname)==0&&strcmp(aname,obj[i].author)==0)
    {
    cout<<"\nBook Present\n\n";
     cout<<"\nName of the Book:"<<obj[i].bookname;
     cout<<"\nAuthor of the Book:"<<obj[i].author;
     cout<<"\nPublisher of the Book:"<<obj[i].publisher;
     cout<<"\nPrice of the Book:"<<obj[i].price;
     cout<<"\nStock Present:"<<obj[i].stock;
     cout<<"\n-------------\n";
     break;
	}
	else
	{
	cout<<"\nNot Present";
	break;}
   }
   break;
   case 4:
    std1.set_details();
    std1.display_details();
    std1.ask_book();
    cout << "" << endl;
   	break;
   default: cout<<"Enter a valid choice!!";
  case 5: exit(1);
   }}
   while(1);
    return 0;
}

