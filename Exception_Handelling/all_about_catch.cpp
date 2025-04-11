#include <iostream>

using namespace std;


class MyException1: exception{

};
class MyException2: public MyException1{

};




int main()
{
    // we can have multiple catch blocks for a single try block.
    // catch or block : written as catch(...) it will catch all exceptions.
    // catch(...) is a generic catch block. It will catch all exceptions.
    // catch(...) should be the last catch block.
    // catch(...) should be used when we don't know what type of exception will be thrown.
    // catch(...) should be used when we don't want to handle the exception.
    // catch(...) should be used when we want to log the exception.
    // catch(...) should be used when we want to rethrow the exception.
    // catch(...) should be used when we want to clean up the resources.
    // catch(...) should be used when we want to display a generic error message.
    // catch(...) should be used when we want to terminate the program.
    // catch(...) should be used when we want to handle all exceptions in the same way.

    // example of multiple catch
    // try
    // {
    //     throw 1.5;
    // }
    // catch(int e){
    //     cout<<"Int catch"<<endl;
    // }
    // catch(double e){
    //     cout<<"Double catch"<<endl;
    // }
    // catch(char e){
    //     cout<<"Char catch"<<endl;
    // }
    // catch(string e){
    //     cout<<"String catch"<<endl;
    // }
    // catch(...){
    //     cout<<"All catch"<<endl;
    // }






    try
    {
        throw MyException1();
    }

    // catch(MyException1 e){
    //     cout<<"Int catch"<<endl;
    // }
    // catch(MyException2 e){
    //     cout<<"Double catch"<<endl;
    // } //parent class can handle the exception of child class. So we have to write child class catch block first. So this above code will not work.


    catch(MyException2 e){
        cout<<"Int catch"<<endl;
    } //we are using chil class cache bolck first, so that it can handle the exception of child class. If we would have used parent class catch block, there will be no need of child class catch block, as parent class cache can handle child class exception. 
    catch(MyException1 e){
        cout<<"Double catch"<<endl;
    } 
    
    catch(...){
        cout<<"All catch"<<endl;
    }

    
    
    
    
    // we can have nested try catch blocks.

    // try
    // {
    //     try
    //     {
    //         throw 1;
    //     }
    //     catch (int e)
    //     {
    //         cout << "Inner catch block: " << e << endl;
    //         throw 2;
    //     }
    // }
    // catch (int e)
    // {
    //     cout << "Outer catch block: " << e << endl;
    // }

    return 0;
}