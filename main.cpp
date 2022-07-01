// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
using namespace std;
bool login(){
    string username , password,un,pw;
    cout<<"please enter the username :";cin>>username;
    cout<<"Please enter the password :";cin >> password;
    ifstream read("C:\\Users\\DELL\\Desktop\\arsh c++\\" + username + ".txt");
    getline(read , un);getline(read,pw);
    
    if (un == username , pw == password)
    {
        return true ;
    }else{
        return false;
    }
}
int main()
{
    string username,password;
    int choice;
    cout<<"1: Registration \n 2: Login \n 3:Yours choice:";cin>>choice;
    if (choice ==1)
    {
        cout <<"select a username ="; cin >> username;
        cout<< "select a password =";cin >> password;
        ofstream file;
        file.open("C:\\Users\\DELL\\Desktop\\arsh c++\\"+username + ".txt");
        file<< username <<endl<<password;
        file.close();
        main();
    }
    else if(choice == 2)
    {
        bool status = login();
        if (!status){
            cout <<"False Login "<<endl;
            system("Pause");
            return 0;
        }
        else
        {
            cout<<"successully logged IN "<<endl;
            system ("Pause");
            return 1;
        }  
    }
     

}