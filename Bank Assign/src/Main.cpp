int main()
{
    int choice;
    cout<<"***Welcome to SBI Bank***";
    do
    {
        cout<<"\n**Main Menu**";
        cout<<"\n-For user";
        cin>> user_name;
            while(user_name)
            {
                int l;
                cout<<"*Menu*";
                cout<<"\n Which type of Account do you want to create";
                cout<<"Saving Account";
                cin>>l;
                long int x;
                float balance;
                char x[10],char y[20],pan[10]
                string un,pass;
                if(l==user_name)
                {
                    cout<<"Enter your Mobile No : ";
                    cin>>x;
                    cout<<"Enter your user Name : ";
                    cin>>y;
                    cout<<"Enter your Pancard no : ";
                    cin>>pan;
                    cout<<"Set  User_Name : ";
                    cin>>u;
                    cout<<"Set a password : ";
                    cin>>pass;
                    User U1;
                    U1.balance=0;
                    user *c1;
                    Account a1(u,z,p,x);
                    c1=&a1;
                    c1->accountDisplay();
                    while(user_name)
                    {
                        cout<<"\nyou need deposit some balance for creating account.";
                        cout<<"\nEnter balance to be deposit : ";
                        cin>>balance;
                        if(balance<=500)
                        {
                            cout<<"Insufficient amount!! Please Enter balance more than 500";
                        }
                        else
                        {
                            Transaction t1(balance,&u);
                            t1.deposite(balance);
                            break;
                        }
                    }
                    
                    string y;
                    cout<<"\nDo u want to make another transaction?"<<"\ntype yes for continue transaction ";
                    cin>>y;
                    if(y=="yes")
                    {
                        while(user name)
                        {
                            while(user name)
                            {
                                int Choice;
                                Transaction t1(balance,&u);
                                cout<<"Select option";
                                cout<<"\n1-Withdraw Money";
                                cout<<"\n2-Deposit Money";
                                cout<<"\nEnter your choice : ";
                                cin>>Choice;
                                if(Choice==1)
                                {
                                    cout<<"Enter amount to be withdraw : ";
                                    cin>balance;
                                    if(500>=(U.b-balance))
                                    {
                                        cout<<"Minimum Balance of 500 Rs. Required for account!!";
                                    }
                                    else
                                        t1.withdraw(balance);
                                }
                                if(Choice==2)
                                {
                                    cout<<"Enter amount to be deposit : ";
                                    cin>>amount;
                                    t1.deposite(balance);
                                }
                                else
                                    cout<<"\nInvalid Choice!!";
                                string y;
                                cout<<"\nDo u want to make another transaction?";
                                cin>>y;
                                if(y=="yes")
                                {
                                    break;
                                }
                                else
                                {
                                    put(z,x,p,u.balance,u,a1.ac);
                                    uservalid(u,pass);
                                    exit(0);
                                }
                            }
                        }
                    }
                    else
                    {
                        put(z,x,p,u.balance,u,a1.ac);
                        uservalid(u,pass);
                        exit(0);
                    }
                }
                else
                    cout<<"Invalid Choice!!!\n";
            }
        }
        if(choice==2)
        {
            int k;
            char z[30],p[30],
            float balance,m;
            lont int  acc
            string u,uid,passw,pass;
            fstream file;
            int I,j=0;
            while(j<3)
            {
                file.open("uid.txt");
                cout<<"Enter your User Name : ";
                cin>>uid;
                while(!file.eof())
                {
                    file>>u;
                    if(uid==u)
                    {
                        I=1;
                        k=1;
                        break;
                    }
                }
                file.close();
                if(I==1)
                    break;
                else
                {
                    cout<<"Invalid user name\n";
                    if(j==1)
                        cout<<"Last chance\n";
                    if(j==2)
                        exit(0);
                }
                j++;
            }
            int J,Passw=0;
            string u,pass;
            while(Pass<3)
            {
                cout<<"Enter password : ";
                cin>>pass;
                file.open("pass.txt");
                while(!file.eof())
                {
                    file>>usid>>pas;
                    if(usid==u && passw==pass)
                    {
                        J=1;
                        break;
                    }
                    else
                        J=2;
                }
                if(J==1)
                {
                    break;
                }
                else
                {
                    if(Passw==1||Passw==0)
                        cout<<"Access denied!!\n";
                    else
                        exit(0);
                }
                Passw++;
                file.close();
            }
            while(user name)
            {
                int Choice;
                 long int ac;
                User u;
                fstream file;
                file.open("userfile.dat");
                while(!file.eof())
                {
                    file>>z>>>>m>>p>>b>>u>>ac;
                    if(u==uid)
                    {
                        k=1;
                        break;
                    }
                }
                file.close();
                if(k==1)
                {
                    cout<<"Access Granted";
                }
                else
                {
                    cout<<"No such account exist";
                    exit(0);
                }
                file.close();
               
                        nw.close();
                        f1.open("username.txt",std::ofstream::out | std::ofstream::trunc);
                        f1.close();
                        nw.open(".txt");
                        f1.open("data.txt");
                        while(!nw.eof())
                        {
                            long double bil;
                            nw>>z>>>>m>>p>>bil>>UI>>ac;
                            if(nw.eof())
                                break;
                            f1<<z<<" "<<m<<" "<<p<<" "u<<" "<<ac<<"\n";
                        }
                        f1.close();
                        nw.close();
                        nw.open("uid.txt",std::ofstream::out | std::ofstream::trunc);
                        nw.close();
                        exit(0);
                    default :
                        cout<<"Invalid Choice";
                    }
                }
            }
        }
        else
            cout<<"Invalid choice!!";
    }
    while(1);
    return 0;
}
