#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
/* mini project - ATM
    ->check balance
    ->cash withdraw
    ->user details
    ->update mmobile no
*/
class atm
{
	private:
		long int account_no;
		string name;
		int pin;
		double balance;
		string mobile_no;
	public:
		void setdata(long int account_no_a,string name_a,int pin_a,double balance_a,string mobile_no_a)
		{
			account_no=account_no_a;
			name=name_a;
			pin=pin_a;
			balance=balance_a;
			mobile_no=mobile_no_a;
		}
		long int getaccountno()
		{
			return account_no;
		}
		string getname()
		{
			return name;
		}
		int  getpin()
		{
			return pin;
		}
		double getbalance()
		{
			return balance;
		}
		string getmobileno()
		{
			return mobile_no;
		}
		void setmobile(string mob_prev,string mob_new)
		{
			if(mob_prev==mobile_no)
			{
				mobile_no=mob_new;
				cout<<endl<<"successfully updated mobile no:";
				getch();
			}
			
		}
		void cashwithdraw(int ammount_a)
		{
			if(ammount_a > 0 && ammount_a < balance)
			{
				balance=ammount_a;
				cout<<endl<<"please collect your cash";
				cout<<endl<<"available balance:"<<balance;
				getch();
			}
		}
	};
	int main()
	{
		
		int choice,enterpin;
		long int enteraccountno;
	
		atm user1;
		user1.setdata(2813190,"shubh",1323,50000.90,"8308402048");
		
		do
		{
			
			cout<<endl<<"****** welcome to ATM *******"<<endl;
			cout<<endl<<"enter your account no";
			cin>>enteraccountno;
			cout<<endl<<"enter pin";
			cin>>enterpin;
			
			if((enteraccountno==user1.getaccountno()) && (enterpin==user1.getpin()))
			{
				
					int ammount=0;
					string oldmobileno,newmobileno;
					cout<<endl<<"*** welcome to ATM ***"<<endl;
					cout<<endl<<"select option";
					cout<<endl<<"1.check balance";
					cout<<endl<<"2.cash withdraw";
					cout<<endl<<"3.show user details";
					cout<<endl<<"4.update mobile no";
					cout<<endl<<"5.exit"<<endl;
					cout<<"6.Enter choice:";
					cin>>choice;
					
					switch(choice)
					{
						case 1:
							cout<<endl<<"your bank balance is:"<<user1.getbalance();
							break;
						case 2:
							cout<<endl<<"enter your ammount:";
							cin>>ammount;
							break;
						case 3:
							cout<<endl<<"*** user details are ***:";
							cout<<endl<<"->account no"<<user1.getaccountno();
							cout<<endl<<"->name"<<user1.getname();
							cout<<endl<<"->balance"<<user1.getbalance();
							cout<<endl<<"->mobile no"<<user1.getmobileno();
							break;
							
						case 4:
							cout<<endl<<"Enter old mobile no.";
							cin>>oldmobileno;
							cout<<endl<<"enter new mobile no:";
							cin>>newmobileno;
							user1.setmobile(oldmobileno,newmobileno);
							break;
						case 5:
							exit(0);
						default:
							cout<<endl<<"enter valid mobile no!!";		
					}
				
		    }
	    }while(1);
	    
    }
        
