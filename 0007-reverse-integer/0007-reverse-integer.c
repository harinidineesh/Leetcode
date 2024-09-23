#include<math.h>
long int reverse(long int x)
{
    long int i,r=0,d;
    if(x<INT_MIN||x>INT_MAX) 
    {
        return 0;
    }
    else
    {
       if(x>0)
       {
            while(x>0)
            {
                d=x%10;
                r=r*10+d;
                x=x/10;
            }
             if(r<INT_MIN||r>INT_MAX)
            {
                return 0;
            }
            return r;

       }else if(x<0)
       {
            x=x*-1;
             while(x>0)
            {
                d=x%10;
                r=r*10+d;
                x=x/10;
            }
            if(r<INT_MIN||r>INT_MAX)
            {
                return 0;
            }
            return -r;

       }
       else
       {
            return 0;
       }
        
        
    }
   
}