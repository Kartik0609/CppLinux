

#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;
 
 
 class User{
  protected:
  
  string name;
  long int mobile;
  char pan[20];
  
  public:
  User(){ }
  
  User(string n, long int m, char p){ name = n; mobile = m; pan = p;}
 
 
string getName(){return name; }
long int getMobile(){return mobile; }
char getPan(){return pan; }
void setName( string Name);
void setMobile(long int mobile);
void setPan(char pan);
void setUser(string n, long int m, char p){ name=n; mobile=m; pan=p;}
};