/*
* File:   main.cpp
 * Author: Elizabeth Warren
 * Created on January 7, 2020, 11:10 PM
 * Purpose:  Savitch Homework 1 Chapter 1 Problem 3
*/
//System Libraries
#include<iostream>
#include"Car.h"
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(){
    //Declare and Initiate Variables
    //create a Car object
    Car dave(2003, "Taurus");

    //show current speed
    cout << "Current speed: ";
 
    cout << dave.getSpd() << endl;

    cout << "Call the accelerating function five times"<<endl;
    for(int i = 0; i < 5; i++){
        //cout << "Accelerating. ";       
        dave.accel();
        cout << "Current speed: ";
        cout << dave.getSpd();
        cout << endl;
    }

    cout << "Call the breaking function five times"<<endl;
    for(int i = 0; i < 5; i++){
        cout << "Braking. ";
        dave.brake();
        cout << "Current speed: ";
        cout << dave.getSpd();
        cout << endl;
    }
    //exit files
    return 0;
}