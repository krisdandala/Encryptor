#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    unsigned int t;
    FILE *ptr;
    ptr = fopen("t.cpp", "r");
    FILE *temp = fopen("temp.txt", "w");
    if(ptr!= NULL)
    {
        //char c = fgetc(ptr);
        //cout<<c<<endl;
        t = fgetc(ptr);
        cout<< t <<endl;
        /*
        while(true)
        {
            c = fgetc(ptr);
            if(t == 153)
            {
            cout << "found" << endl;
                break;}
            */
            fputc(t - 66, temp);
        //}
    }
    
    fclose(ptr);
    fclose(temp);
    return 0;
}
