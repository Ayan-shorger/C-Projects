#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

    int ch;
    string name;
    char s_simbol[11]={'@','#','$','%','^','&','*','(','(',')','!'};
    long double blances;
    long double withd;
    int t;



    void gh()
    {
        cout<<"CHOISE AVALAIBLE IN ATM MACHINE"<<endl;
        cout<<"___________ ATM ___________"<<endl;
        cout<<"|                          |"<<endl;
        cout<<"|      1.DEPOSITE MONY     |"<<endl;
        cout<<"|      2.WITHDROW MONY     |"<<endl;
        cout<<"|      3.BLANCE AMOUNT     |"<<endl;
        cout<<"|__________________________|"<<endl;
        cout<<"ENTER CHOICE ";
        cin>>ch;
    }


    int deposite()
    {
        cout<<" ENTER ACOUNT HOLDER NAME: ";
        cin>>name;

        try{
        for(int i=0;i<11;i++)
            {
                if(blances ==  s_simbol[i])
                {
                throw 100;
                }
            }
        }
            
            //throw 1
        catch(int a)
        {
            cout<<" SPACIAL SYMBOL IS NOT ALLOW !\n";
            cout<<a;
        }
          
        
        try
        {  

        cout<<" ENTER DEPOSITE AMOUNT: "; 
        cin>>blances;
        if(blances > 0)
        {
        cout<<" NOW, YOUR CURRENT BLANCE IS: ";
        cout<<blances;
        cout <<"\n DO YOU WANT TO CONTUNUE\n";
        cout<<" PRESS 1 FOR PROCESS AND 2 FOR EXIT ";
        cin>>t;

        if(t==1)
        {
            gh();
        }
        else
        { 
            exit(0);
        }
        }
        else
        {
            throw" INVLALID ! NAGATIVE AMOUNT IS NOT ENTER PLEASE ENTER POSTVE AMOUNT\n";

            
        }
        }
        //throw 2
        catch(const char *msg)
        {
           cout<<msg;
           cout <<"\n DO YOU WANT TO CONTUNUE\n";
           cout<<" PRESS 1 FOR PROCESS AND 2 FOR EXIT ";
           cin>>t;

            if(t==1)
            {
             gh();
            }
            else
            { 
                exit(0);
            }  
        }

        
        
        
       
    }

    void withdrow()
    {
        try
        {
        cout<<" ENTER WITHDROW AMOUNT: ";
        cin>>withd;
        if(withd > 25000)
        {
            cout<<" OUT OF LIMIT ! ONE TIME DO YOU WITHDROW ONLY 25000 RS "<<endl;
        }
        if(withd > 0 )
        {
            if(withd > blances)
        {
            cout<<" INCUFFICENT AMOUNT !"<<endl;
        }
        else
        {
            cout<<withd<<" IS WITHDROW SUCESSFUL "<<endl;
            blances=(blances-withd);
        }
        cout <<"\n DO YOU WANT TO CONTUNUE\n";
        cout<<" PRESS 1 FOR PROCESS AND 2 FOR EXIT ";
        cin>>t;
        if(t==1)
        {
        gh();
        }
        else
        { 
            exit(0);
        }

        }

        else
        {
            throw"INVLALID ! NAGATIVE AMOUNT IS NOT ENTER PLEASE ENTER POSTVE AMOUNT\n";
            
        }
        }
        catch(const char *msg)
        {
            cout<<msg;
            cout <<"\n DO YOU WANT TO CONTUNUE\n";
            cout<<" PRESS 1 FOR PROCESS AND 2 FOR EXIT ";
            cin>>t;

            if(t==1)
            {
             gh();
            }
            else
            { 
                exit(0);
            }  
        }
        
        
    }

    void blance()
    {
        cout<<" YOUR BALANCE AMOUTN IS "<<blances;
        cout <<"\n DO YOU WANT TO CONTUNUE\n";
        cout<<" PRESS 1 FOR PROCESS AND 2 FOR EXIT ";
        cin>>t;
        if(t==1)
        {
        gh();
        }
        else
        { 
            exit(0);
        }
    }


int main()
{
    gh();
    
    do{
       
        cout<<ch;
        switch(ch)
        {
            case 1:
            deposite();
            break;

            case 2:
            withdrow();
            break;

            case 3:
            blance(); 
            break;

            default:
            cout<<endl<<"INVALID CHOICE ! PLEACE SELECT ABALABILE CHOICE IN ATM MACHINE"<<endl;
        }
    }while(1);
}