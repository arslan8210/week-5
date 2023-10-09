#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void websitename();
void iphone13();
void iphone14();
void iphone15();
void s21();
void s22();
void s23();
void oneplus8();
void oneplus9();
main ()
{
websitename();
string type,model;
cout<<"Enter the category of the phone you want to buy : \n1. iPhone \n2. Samsung \n3. oneplus \n";
cin>>type;
if(type=="iphone")
{cout<<"\nEnter the model of iphone you want to buy : \n From the following : \n iphone 13 \n iphone 14 \n iphone 15\n";
cin>>model;
if(model=="iphone13")
{
    iphone13();

if(model=="iphone14")
{
    iphone14();
}
if(model=="iphone15")
{
    iphone15();
}
}
}
 if(type=="samsung")
{
 cout<<"\nEnter the model of iphone you want to buy : \n From the following : \n S21 \n S22 \n S23\n";   
 cin>>model;

if(model=="s21")
{
    s21();
}
if(model=="s22")
{
    s22();
}
if(model=="s23")
{
    s23();
}
}
if(type=="oneplus")
{
cout<<"\nEnter the model of iphone you want to buy : \n From the following : \n oneplus 7 \n oneplus 8 \n oneplus 9\n";
cin>>model;
if(model=="oneplus8")
{
   oneplus8(); 
}
if(model=="oneplus9")
{
   oneplus9(); 
}
if(model=="oneplus7")
{
 cout<<"This mobile is not avaliable";
}
}
}

void websitename()

{
cout<<"       ######################################################################\n";
cout<<"       #                     RS TRADERS AND SMARTPHONES                     #\n";
cout<<"       ######################################################################\n";                                                  
}

void discount()
{
cout<<"\ncongratulations! \nyou can get the discout of 20%";
}
void iphone13()
{
int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=500*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"your bill is : " <<price <<"$";
}
void iphone14()
{
int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=700*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void iphone15()
{
int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=900*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void s21()
{
    int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=400*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void s22()
{
    int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=500*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void s23()
{
    int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=600*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void oneplus8()
{
    int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=600*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}
void oneplus9()
{
    int price,total,discount,quantity;
cout<<"Enter the quantity : ";
cin>>quantity;
price=700*quantity;
if(quantity>=2)
{
    cout<<"congratulations! \n you can get 20% discount";
    discount=price*20/100;
    total=price-discount;
    cout<<"\nso your total bill after discount : "<<total <<"$";
}
cout<<"\nyour bill is : " <<price <<"$";
}








