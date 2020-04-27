#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
    int h,m,s;

    for (h = 0; h < 24; h++)
    {
        
        for (m = 0; m < 60; m++)
        {
            for (s = 0; s < 60; s++)
            {
                
                printf("%02i:%02i:%02i\n",h,m,s);
                usleep(100000);
            }
            
        }
   
        
    }
    
}