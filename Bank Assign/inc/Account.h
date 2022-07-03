#include <iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Account : public User
 {
  protected:
  string ac_type;
  long int acc_no;
  char ifsc[20];
 
  public:
  Account(){ }
  Account( string n, long int m, char p, string act , long int ac , char i  ) : User(n,m,p) { ac_type=act; acc_no = ac; ifsc =i; }
 
 
  string getAc_type(string ac_type){return ac_type; }
  long int getAcc_no(long int acc_no){return acc_no; }
  char getIfsc(char ifsc){return ifsc; }
 
  void setAc_type(string ac_type);
void setAcc_no(long int acc_no);
void SetIfsc(char ifsc);