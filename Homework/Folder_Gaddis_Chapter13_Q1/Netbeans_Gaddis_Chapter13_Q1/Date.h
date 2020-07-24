/* 
 * File:   Date.h
 * Author: Elizabeth Warren
 *
 * Created on July 20, 2020, 5:07 PM
 */

#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
    string namMonth[12]={"January","February","March","April","May","June",
    "July","August","September","October","November","December"};
  
public:
    //Constructor
    Date(int d = 1, int m = 1, int yr = 2000) {        
        //Input validating day
        if (d<1 || d>31){
        cout << "Only days 1-30 accepted. Program terminates NOW. ";
        exit (1);}
       else{
        day=d;}
        //Input validating month
        if (m < 1 || m > 12) {
        cout << "Only months 1-12 accepted. Program terminates NOW. ";
        exit (1);} 
        else{
        month=m;}
        year=yr;}
    void setDay (int d){
        if (d<1 || d>31){
        cout << "Only days 1-30 accepted. Program terminates NOW. ";}
       //exit (1); 
        day=d;
    }
     void setMonth (int m){
        if (m < 1 || m > 12) {
        cout << "Only months 1-12 accepted. Program terminates NOW. ";}
        //exit (1); 
        month=m;
    }
    void setYear(int yr){
        year=yr;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    void disNum(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void disNum1(){
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    } 
    void disNum2(){
        cout<<namMonth[month-1]<<" "<<day<<" "<<year<<endl;
    }
    void disNum3(){
        cout<<day<<" "<<namMonth[month-1]<<" "<<year<<endl;
    }
};


#endif /* DATE_H */

