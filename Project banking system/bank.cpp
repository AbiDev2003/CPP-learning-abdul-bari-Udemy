#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

#define MIN_BALANCE 500

class insufficientFunds{};


class Account{
    private:
    long accountNumber;
    string firstname;
    string lastname;
    float balance;
    static long nextAccountNumber; //this is static , can be shared by all the objects of the class Account, so that it can be used to create account number for each object of Account class.

    public:
    Account(); //default constructor
    Account(string fname, string lname, float balance);
    long getAccountNumber(){
        return accountNumber;
    } 
    string getFirstname(){
        return firstname;
    }
    string getLastname(){
        return lastname;
    }
    float getBalance(){
        return balance;
    }


    void Deposit(float amount);
    void Withdraw(float amount);

    static void setLastAccountNumber(long accountNumber); //this fucton is static so that it does not require object to be caleed, cannot be overrriden by derived class object(non-virtual function), that why scope resolution operator have to be used. 
    static long getLastAccountNumber();

    friend ofstream &operator << (ofstream &ofs, Account &acc);
    friend ifstream &operator >> (ifstream &ifs, Account &acc);
    friend ostream &operator << (ostream &os, Account &acc);
};

class Bank {
    private:
    map<long, Account> accounts;

    public:
    Bank(); //constructor
    Account openAccount(string fname, string lname, float balance);
    Account balanceEnquiry(long accountNumber);
    Account Deposit(long accountNumber, float amount);
    Account Withdraw(long accountNumber, float amount);
    void closeAccount(long accountNumber);
    void showAllAccount();

    ~Bank();

};

int main() {
    Bank b;
    Account acc;

    string fname, lname;
    int choice;
    long accountNumber;
    float amount;
    float balance;


    cout<<"Banking system"<<endl;
    
    do{
        cout<<"Enter one option below"<<endl;
        cout<<"\n\t1Open an account"<<endl;
        cout<<"\n\t2 balance enquiry"<<endl;
        cout<<"\n\t3 Deposit amount"<<endl;
        cout<<"\n\t4 Withdrwae ammount"<<endl;
        cout<<"\n\t5 Close an account"<<endl;
        cout<<"\n\t6 show all account"<<endl;
        cout<<"\n\t7 Exit"<<endl;

        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter your first name: "<<endl;
            cin>>fname;
            cout<<"Enter your last name : "<<endl;
            cin>>lname;
            cout<<"Enter initial balance: "<<endl;
            cin>>balance;
            if (balance < MIN_BALANCE){
                cout<<"Minumum balance should be 500"<<endl;
                break;
            }
            acc = b.openAccount(fname, lname, balance);
            cout<<"Congratulations account is created successfullly"<<endl;
            cout<<acc;
            break;
        
        case 2:
        cout<<"Enter your account number: "<<endl;
        cin>>accountNumber;
        acc = b.balanceEnquiry(accountNumber);
        if(acc.getAccountNumber() == 0){
            cout<<"Account not found"<<endl;
            break;
        }
        cout<<"Your account details: "<<endl;
        cout<<acc;
        break;
        
        case 3:
        cout<<"Enter your account number: "<<endl;
        cin>>accountNumber;
        cout<<"Enter amount to deposit: "<<endl;
        cin>>amount;
        acc = b.Deposit(accountNumber, amount);
        cout<<"Amount is deposited sucesfully"<<endl;
        cout<<"Your account details: "<<endl;
        cout<<acc;
        break;
        
        case 4:
        cout<<"Enter your account number: "<<endl;
        cin>>accountNumber;
        cout<<"Enter amount to withdraw: "<<endl;
        cin>>amount;
        acc = b.Withdraw(accountNumber, amount);
        cout<<"Amount is withdrawn sucesfully"<<endl;
        cout<<"Your account details: "<<endl;
        cout<<acc;
        break;
        
        case 5:
        cout<<"Enter your account number: "<<endl;
        cin>>accountNumber;
        b.closeAccount(accountNumber);
        cout<<"Account closed successfully"<<endl;
        break;
        

        case 6:
        cout<<"Here are all of your accounts: "<<endl;
        b.showAllAccount();
        break;

        case 7:
        cout<<"Thank you for using our banking system"<<endl;
        cout<<"Have a nice day"<<endl;
        break;

        default:
            cout<<"Invalid choice, enter a correct choice"<<endl;
            exit(0);
        }
    }while(choice != 7);
    
    return 0;
}

//now all the fucntions for Account class
long Account::nextAccountNumber = 0; //initializing static variable to 0, so that it can be used to create account number for each object of Account class.
Account::Account(){ //default constructor
    firstname = " "; //initializing first name to empty string
    lastname = " "; //initializing last name to empty string
    accountNumber = 0; //initializing account number to 0
    balance = 0; //initializing balance to 0
}
Account::Account(string fname, string lname, float balance){
    firstname = fname;
    lastname = lname;
    this->balance = balance;
    nextAccountNumber++; //increase nextAccountNumber by one
    accountNumber = nextAccountNumber; //assiginign nextAccountNumber to accountNumber, so now accountNumber will be 1 2,3 etc...
}
void Account::Deposit(float ammount){
    balance = balance + ammount; //lets balance is 10 rupess and ammount is 5, so net balance will be 15 after deposit
} 
void Account::Withdraw(float ammount){
    if(balance - ammount < MIN_BALANCE){
        throw insufficientFunds(); //minimun balance should be 500, after withdrwae. 
    }
    balance = balance - ammount; //lets balance is 10 rupess and ammount is 5, so net balance will be 10 after withdrwal
}
void Account::setLastAccountNumber(long accountNumber){
    nextAccountNumber = accountNumber; 
}
long Account::getLastAccountNumber(){
    return nextAccountNumber;
}
//;ets write into the file
ofstream &operator << (ofstream &ofs, Account &acc){
    ofs<<acc.firstname<<endl;
    ofs<<acc.lastname<<endl;
    ofs<<acc.accountNumber<<endl;
    ofs<<acc.balance<<endl;
    return ofs;
}
ifstream &operator >> (ifstream &ifs, Account &acc){
    ifs>>acc.firstname;
    ifs>>acc.lastname;
    ifs>>acc.accountNumber;
    ifs>>acc.balance;
    return ifs;
}
ostream &operator << (ostream &os, Account &acc){
    os<<"First name: "<<acc.getFirstname()<<endl;
    os<<"Last name: "<<acc.getLastname()<<endl;
    os<<"Account number: "<<acc.getAccountNumber()<<endl;
    os<<"Balance: "<<acc.getBalance()<<endl;
    return os;
}



//now all the fucntions for bank class


//this bank constructor will be called , right when the object for Bank class is created i. e Bank b;
Bank::Bank(){
    Account account; //this is a temporary objectfor Account class
    ifstream infile; //this is a temporary object for ifstraem 
    infile.open("Bank.data"); //Open a file named Bank.data in reading mode
    if(!infile){
        cout<<"File not found"<<endl;
        return; //if file is not opened , return and also print that file is not found
    }

    while (!infile.eof())
    {
        infile>>account; //read the file unless the end of file is reached
        accounts.insert(pair<long, Account>(account.getAccountNumber(), account)); //insert the account into the map named (accounts) by giving it the account number (long) and account object as Account info as pair. 
    }
    Account::setLastAccountNumber(account.getAccountNumber()); //incase the accountNumber is 2 , the setLastAccountNumber() will make it three, so when you create a new account, it will be account number 3.
    infile.close(); 
}
Account Bank::openAccount(string fname, string lname, float balance){
    ofstream outfile; 
    Account account(fname, lname, balance); //now account information is inside account object name and balance
    accounts.insert(pair<long, Account>(account.getAccountNumber(), account)); //now we will 
    outfile.open("Bank.data", ios::trunc);
    map<long, Account> ::iterator it;
    for(it = accounts.begin(); it!=accounts.end(); it++){
        outfile<<it->second;
    }
    return account;
}
Account Bank::balanceEnquiry(long accountNumber){
    map<long, Account>::iterator it = accounts.find(accountNumber);
    if(it == accounts.end()){
        cout<<"Account not found"<<endl;
        return Account();
    }
    return it->second; //second means the value of the pair i.r Account object, first is accountNumber which is the key
    
}
Account Bank::Deposit(long accountNumber, float amount){
    map<long, Account>::iterator it = accounts.find(accountNumber);
    if(it == accounts.end()){
        cout<<"Account not found"<<endl;
        return Account();
    }
    it->second.Deposit(amount);
    return it->second;
    
}
Account Bank::Withdraw(long accountNumber, float amount){
    map<long, Account>::iterator it = accounts.find(accountNumber);
    if(it == accounts.end()){
        cout<<"Account not found"<<endl;
        return Account();
    }
    it->second.Withdraw(amount);
    return it->second;
}
void Bank::closeAccount(long accountNumber){
    map<long, Account>::iterator it = accounts.find(accountNumber);
    cout<<"Account deleted successfully"<<endl;
    accounts.erase(it);
}
void Bank::showAllAccount(){
    map<long, Account>::iterator it;
    for(it = accounts.begin(); it!=accounts.end(); it++){
        cout<<"Account"<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Total number of accounts are : "<<accounts.size()<<endl;
}
Bank::~Bank(){
    ofstream outfile;
    outfile.open("Bank.data", ios::trunc);
    map<long, Account>::iterator it;
    for(it = accounts.begin(); it != accounts.end(); it++){
        outfile<<it->second;
    }
    outfile.close();
}