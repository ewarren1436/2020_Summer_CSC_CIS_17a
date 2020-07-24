/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: Elizabeth Warren
 *Purpose: Create a car class
 * Created on July 20, 2020, 8:57 PM
 */

#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;
class Car
{
private:
int yearModel;
string make;
int speed;
public:
    Car (); 
    Car(int y, string m){
        yearModel=y;
        make=m;
        speed=0;//initialize at 0
    }
    int getYrMod() const{//see note page 720 const function
        return yearModel;
    }
    string getMak ()const {
        return make;
    }
    int getSpd() const{
        return speed;
    }
    void setYrMod (int y){
        yearModel=y;
    }
    void setMak(string m){
        make=m;
    }
    void setSpd(int s){
        speed=s;
    }
    int accel(){
    speed=speed+5;
    return speed;}
    int brake(){
        speed=speed-5;
        return speed;
    }
       

};



#endif /* CAR_H */

