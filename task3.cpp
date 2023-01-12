#include<iostream>
using namespace std;

float taxcalculator(char type, float price);

main()
{
  char type;
  float price;
  float taxamount;
  float result;

  result=taxcalculator( type,  price);
  cout << "the final price on a vehicle of type" << type << "after adding the tax is" << " " << result;
}

float taxcalculator(char type, float price)
{
  float taxamount;
  float itemprice;
  float taxrate;
  float finalprice;
  float result;

  cout << " enter your item price:";
  cin >> itemprice;
  cout << " enter the type of vehicle:";
  cin >> type;

  taxamount = itemprice*(taxrate/100);
  finalprice = itemprice+taxamount;
 
 if(type == 'M')
   {
      result = itemprice*0.06;
      
   }

 if(type == 'E')
   {
      result = itemprice*0.08;
       
   }
  if(type == 'S')
   {
      result = itemprice*0.1;
   }
  if(type == 'V')
   {
      result = itemprice*0.12;
       
   }
   if(type == 'T')
   {
     result = itemprice*0.15;
    }
   return result;   
}

