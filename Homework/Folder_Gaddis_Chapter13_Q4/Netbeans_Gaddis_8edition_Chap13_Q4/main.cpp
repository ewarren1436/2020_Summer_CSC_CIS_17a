
/* 
 * File:   main.cpp
 * Author: Elizabeth Warren
 * Design a class that holds the following personal data: name, address, age,
 * and phone number.
 * Created on July 21, 2020, 6:53 AM
 */
//User Libraries
#include <cstdlib>
#include<iostream>
#include<string>
#include "Data.h"
using namespace std;
//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

void disData(Data);//put the class type in the argument parameter
//Execution begins here
int main(int argc, char** argv)
{  
    //Set the random number seed        

    //Declare Instance
    Data nam1={"Elizabeth", "3858 Fourth St., Riverside CA", 23, 5551212};
    Data nam2={"Dave Snoopy","23 Elm St, Riverside CA", 33, 5552121};
    Data nam3={"Lori Snow", "32 Terracina Blvd, Riverside CA", 24, 5553232};
        //Declare Variables and Initialize  
    Data arr[3]={nam1, nam2, nam3};
    
    //Initialize Variables
    //Output Data class
   disData(arr[0]);
   disData(arr[1]);
   disData(arr[2]);

    return 0;
}

void disData (Data a){    
        cout<<"Name: "<<a.getNam()<<endl;
        cout<<"Address: "<<a.getAdrs()<<endl;
        cout<<"Phone: "<<a.getPhon()<<endl;
        cout<<"Age:"<<a.getAge()<<endl;                
     }
