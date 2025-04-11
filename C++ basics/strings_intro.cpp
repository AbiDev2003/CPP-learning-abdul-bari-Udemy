#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // how can we declare a string, given below

    // char s[] = "Hello";
    // char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // char s[] = {65, 66, 67, 68, 0};
    // char s[] = {65, 66, 67, 68, 0, 69, 70};
    // char *s = "Hello"; //not suggested
    // string s = "Hello";
    // cout<<s<<endl;

    // reading and printing string
    // cin does not take string if there is space between , so we use get and getline

    // char s[50];
    // cout<<"Enter your name: "<<endl;
    // // cin>>s;
    // // cin.get(s, 50);
    // cin.getline(s, 50);
    // cout<<"Welcome: "<<s<<endl;

    // char s1[50];
    // char s2[100];
    // cout<<"Enter your name: "<<endl;
    // cin.get(s1, 50);
    // cout<<"Welcome: "<<s1<<endl;
    // cin.ignore(); //it will clear any other buffer
    // cout<<"Enter your name again: "<<endl;
    // cin.get(s2, 100);
    // cout<<"Welcome: "<<s2<<endl;

    // or we can write the above by simply using getline
    // char s1[50];
    // char s2[100];
    // cout<<"Enter your name: "<<endl;
    // cin.getline(s1, 50);
    // cout<<"Welcome: "<<s1<<endl;
    // cout<<"Enter your name again: "<<endl;
    // cin.getline(s2, 100);
    // cout<<"Welcome: "<<s2<<endl;

    // some inbuilt string functions

    // char s[] = "Hello World";
    // cout<<strlen(s)<<endl;
    // char *s =  new char[100];
    // cout<<"Entyer string:"<<endl;
    // cin.getline(s, 100);
    // cout<<"length: "<<strlen(s)<<endl;
    // delete []s;

    // char s1[20] = "good";
    // char s2[20] = "morning";
    // strcat(s1, s2);  /concetenation
    // strncat(s1, s2, 3);
    // cout<<s1<<endl;

    // char s1[10] = "Pikun";
    // char s2[10] = " ";
    // // strcpy(s2, s1);
    // strncpy(s2, s1,2 );
    // cout<<s2<<endl;

    // char s1[20] = "programming";
    // char s2[20] = "gram";
    // cout<<strstr(s1, s2)<<endl;  //gives the portion of string starting from gram from left side
    // cout<<strchr(s1, 'g')<<endl; //gives the portion of string starting from gram from left side
    // cout<<strrchr(s1, 'g'); //gives the portion of string starting from gram from right side
    // cout<<strrchr(s1, 'm'); //gives the portion of string starting from gram from right side

    // char s1[10] = "HELLO";
    // char s2[10] = "hello";
    // cout<<strcmp(s1, s2)<<endl;

    // char s1[10] = "235";
    // char s2[10] = "54.78";
    // // strtol converts string to long integer
    // long int x = strtol(s1, NULL, 10); //10 is the base for the respective number system i.e decimal (235 is decimal)
    // float y= strtof(s2, NULL); //this converts string to float number
    // cout<<x<<"  "<<y<<endl;

    char s1[20] = "x=10;y=20;z=30";
    char *token = strtok(s1, "=;");
    while(token!=NULL){
        cout<<token<<endl;
        token = strtok(NULL, "=;");
    }

    return 0;
}