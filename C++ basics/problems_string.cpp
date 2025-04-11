#include <iostream>

using namespace std;

int main()
{
    // finding string lenght
    // string str = "WELCOME";
    // int count = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // cout<<"Lenght is: "<<count;
    // // or
    // // can be done using iterator

    // convert string letters from uppercase to lowercase
    // string str = "HEllO";
    // for (int i = 0; str[i] != '\0'; i++)
    // {

    //     if(str[i] >= 65 && str[i]<=90){
    //         str[i] = str[i] + 32;
    //     }
    // }
    // cout<<str;
    // lower case to uppercase
    // string str = "WeLcOmE5";
    // for (int i = 0; str[i] != '\0'; i++)
    // {

    //     if(str[i] >= 97 && str[i]<=122){
    //         str[i] = str[i] - 32;
    //     }
    // }
    // cout<<str;

    // count number of vowel consonants and words
    // string str = "how Many wOrds";
    // int vowel = 0, consonants = 0,space = 0;
    // for(int i=0; str[i]!='\0'; i++){
    //     if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
    //         vowel++;
    //     }else if(str[i] == ' '){
    //         space++;

    //     }else{
    //         consonants++;
    //     }
    // }
    // cout<<"Vowels: "<<vowel<<endl;
    // cout<<"Consonants: "<<consonants<<endl;
    // cout<<"Spaces: "<<space<<endl;

    // palindrome string or not
    // string str = "Madam";
    // string rev = "";
    // int length = (int)str.length();
    // rev.resize(length);
    // // copy in reverse
    // for (int i = 0, j = length -1; i < length; i++, j--)
    // {
    //     rev[i] = str[j];
    // }
    // rev[length] = '\0';
    // if (str.compare(rev) == 0)
    // {
    //     cout<<"palindrome"<<endl;
    // }
    // else{
    //     cout<<"not palindrome"<<endl;
    // }




    // find username in email address
    string email = "2003abinashdash@gmail.com";
    int i = (int)email.find('@');
    string uname = email.substr(0, i);
    string filtered_uname = "";
    for (char c : uname)
    {
        if (isalpha(c))
        {
            filtered_uname += c;
        }
    }
    cout << "Username is: " << filtered_uname << endl;

    return 0;
}