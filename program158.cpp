
/*problems on string


*/
#include<iostream>
using namespace std;

class String
{ 
    private:
    char *str;
    int iSize;
    public:
    String()
    {
        int iSize(20);
        str = new char[20];
    }
     String(int X)
    {
        iSize=X;
       str = new char[iSize];
    }
    ~String()
    {
        delete []str;
    }
    void Accept()
    {
        
        cout<<"Enter the string :"<<endl;
        cin.getline(str,iSize);
    }
    void Display()
    {
        cout<<"string is :"<<str<<endl;
    }
    //logic
};
int main()
{
String sobj(30);
sobj.Accept();
sobj.Display();

    return 0;
    
}