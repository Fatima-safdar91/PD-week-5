#include<iostream>
using namespace std;

 float pyramidvolume(float length, float width, float height);

main(){

  float length;
  float height;
  float width;
  float result;
 
 result=pyramidvolume( length,  width, height);
 cout << result;
}


 float pyramidvolume(float length, float width, float height)
{   
   string unit;
   float result;
   float volume;
   cout << "enter your length in meters:";
   cin >> length;
   cout << "enter your width in meters:";
   cin >> width;
   cout << "enter your height in meters:";
   cin >> height;
   volume = (length*width*height)/3;
   cout << "enter unit :";
   cin >> unit;

  
 if( unit == "centimeters")
      {
      result=(length*width*height*1000000)/3;
      
      }
   if( unit == "kilometers")
      {
        result=(length*width*height/1000000000)/3;
       
      }
   if( unit == "millimeters")
      {
        result=(length*width*height*1000000000)/3;
       
      }
  return result;
}