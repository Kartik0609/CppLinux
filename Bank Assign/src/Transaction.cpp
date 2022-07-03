

void withdraw(long double amt)
    {
        u->balance=u->balance-amt;
        cout<<"Transaction Done!!";
        cout<<"\nUpdated Balance is : "<<u1->balance;
    }
    void deposit(long double amt)
    {
        u->balance=u->balance+amt;
        cout<<"Transaction Done!!";
        cout<<"\nUpdated Balance is : "<<u1->balance;
    }
   
    void put(string n, char p, long int m, long int ac, char u, char pass, int b  ){
   
    fstream file;
   
    file.open("userfile.txt");
    file<<getName<<"\n";
    file<<getPan<<"\n";
    file<<getMobile<<"\n";
        file<<getAcc_no<<"\n";
    file<<u<<"\n";
    file<<pass<<"\n";
    file<<b<<"\n";  
   
    file.close();
}

void uservalid(string u, string pass){

fstream uid;
    uid.open("uid.txt",ios_base::app);
    uid<<u<<"\n";
    uid.close();
   
    fstream passw;
    passw.open("pass.txt",ios_base::app);
    passw<<u<<" "<<pass<<"\n";
    pass.close();
}