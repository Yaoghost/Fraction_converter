#include <iostream>   // direct the compiler to include functions required for input output 

using namespace std;  // this a default namespace to be used

int main()    // this is our main function 
{
   float num;   // declare a variable to hold user input 
   cout<<"Please enter your number: ";   // ask user for input 
   cin>>num;   // store user input into variable num
   int count=0;  // deaclare and initialize a variable to check if number is an integer 

int j=0;  // declare a variable to keep track of number of times the loop iterates 
for(int i=0;i>-9;i++)
{   
    if(0<num-i && num-i <1)   // permit to have only the decimal part of number inputed
    {
       num=num-i;  // store decimal part of num into variable num
       break;   // go outside this loop
    }
    else if(num-i==0)  // since i is an integer if num-i===0 num is also an integer
    {
        count++;  // increment variable count by 1
    }
  j++;  // increment variable j by 1
}


if(count==0){   // executes these lines if input is not an integer 


   float nl=0;  // hold numerator of the left value of interval
   float dl=1;   // hold denominator of the left value of interval
   float nr=1;   //  hold numerator of the right value of interval
   float dr=1;  // hold denominator of the right value of interval
   float nm=nr+nl;  // hold numerator of the middle value of interval
   float dm=dr+dl;  // hold denominator of the middle value of interval
   
 
  for(int i=0;i>-9;i++)
   {
       if(num>nm/dm && num< nr/dr)   //  if number is between right value and middle value  
       {
           nl=nm;  
           dl=dm;
           nm=nl+nr;
           dm=dl+dr;
           
          
         }
      else if(num<nm/dm && num> nl/dl)  // if number is between left valueand middle value 
       {
           nr=nm;
           dr=dm;
           nm=nl+nr;
           dm=dl+dr;
          
       }
     if (num<=nm/dm+0.001 && num>=nm/dm-0.001)  // if number is between the marge of error of the middle value
      { 
          
          break;  // go outside the loop
          
      }
       
 }
  if (j!=0)  // if integer part is not equal to zero then prints integer part and fraction 
  {
    cout<<j<<" & "<<nm<<"/"<<dm; 
  }
  else {   // else prints fraction 
      cout<<nm<<"/"<<dm;
  }
  
}

else     // if input is an integer then simply prints out number itself
{
    cout<<num;
}

    return 0;   // our main function requires an integer return value 
}