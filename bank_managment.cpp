#include<iostream>
#include<string>
#include<fstream>
using namespace std;
ofstream file;


                                //class section
//person class
class person
{
    string name,address;
    int mob;
    public:
    //function section
    void p_input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter address: ";
        cin>>address;
        cout<<"Enter Mobile number: ";
        cin>>mob;

        //save data in file
        file<<"Enter name: "<<name<<endl;
        file<<"Enter address: "<<address<<endl;
        file<<"Enter Mobile number: "<<mob<<endl;
    }

    void p_display()
    {
        cout<<"NAME IS: "<<name<<endl;
        cout<<"ADDRESS IS: "<<address<<endl;
        cout<<"MOBILE NO IS: "<<mob<<endl;
    }

};

class employe:public person
{
    int e_no;
    public:
    //function section
    void e_input()
    {
        cout<<"Enter Employe number: ";
        cin>>e_no;
        file<<"Employe number: "<<e_no<<endl;
    }

    void e_display()
    {
        cout<<"Employe no is: "<<e_no<<endl;
    }
};

class manager:public employe
{
    string designation;
    string d_name;
    int total=0,n;
    public:
    	int salary;
    //function section
    void m_input()
    {
        cout<<"Enter Employe designation:  ";
        cin>>designation;
        cout<<"Enter Employe Detartment name:  ";
        cin>>d_name;
        cout<<"Enter Employe Salary:  ";
		cin>>salary;

        file<<"Enter Employe designation:  "<<designation<<endl;
        file<<"Enter Employe Detartment name:  "<<d_name<<endl;
        file<<"Enter Employe Salary:  "<<salary<<endl;
    
        file.close();   
        
    }
 

    void m_display()
    {
        cout<<"\n------------------ EMPLOYE's DETAILS ---------------\n";
         p_display();
         e_display();
         cout<<"Employe designation: "<<designation<<endl;
         cout<<"Employe department: "<<d_name<<endl;
         cout<<"Employe salary: "<<salary<<endl;
        
         
    }

    
};



int main()
{   
file.open("C:\\Users\\RNT-BCA7\\Desktop\\bank.doc");
    int n;
    cout<<"\n\t-------------------- BANK MANAGMENT FORM ---------------------\n";
    cout<<"HOW MANY EMPLOYE'S DETAILS DO YOU WANT ENTER? ";
    cin>>n;
    manager obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].p_input();
        obj[i].e_input();
        obj[i].m_input();
        cout<<"Ragistration sucsessfull--------------- :)\n";
    }
    //output
    for(int i=0;i<n;i++)
    {
        obj[i].m_display();
    }
    
cout<<"---------------------- MAXIMUM & MINIMUM SALARY IS ------------\n";
//maximum salary find function	
            int max=0;
		    int min=obj[0].salary;
		    
        	for(int i=0;i<n;i++)
        	{
       		
            	if(min>obj[i].salary)
            	{
            		min=obj[i].salary;
				}
			
            	else
            	{
            		max=obj[i].salary;
				}
            }
            cout<<"Minimun salary is: "<<min<<endl;
			cout<<"Max salary is: "<<max<<endl;
               
    
    return 0;
}




