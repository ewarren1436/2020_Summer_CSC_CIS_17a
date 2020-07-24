
/* 
 * File:   Data.h
 * Author: Elizabeth
 *
 * Created on July 21, 2020, 7:04 AM
 */

#ifndef DATA_H
#define DATA_H
#include<iostream>
#include<string>
using namespace std;
class Data{
private:
string name;//holds the name inputted by user
string address;//holds the address inputted by user
int age;
int phone;
public:
Data(){};
Data(string n, string ad,  int a,  int p){
name=n;
address=ad;
phone=p;
age=a;
}
string getNam() const{
return name;
}
string getAdrs() const{
return address;
}
int getAge() const{
return age;
}
int getPhon() const{
return phone;
}
void setNam(string n){
name=n;
}
void setAdrs(string ad){
address=ad;
}
void setPhon( int p){
phone=p;}
void setAge( int a){
age=a;
}
};
#endif /* DATA_H */

