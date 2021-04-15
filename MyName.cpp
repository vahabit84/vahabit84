#include <iostream>
#include <cstdarg>
namespace Myname {
    void Zad1(int* a, int b){
        int c;
        for(int i=0; i<b;i++){
            c=!*(a+i);
            *(a+i)=c;
            std::cout<<*(a+i);
        };
        std::cout<<"\n";
    };

    void Zad2(int* a){
    
        for(int i=0;i<8;i++){
          if(i==0) *a=1;
           else{
           *(a+i)=*(a+(i-1))+3;  
           };
           std::cout<<*(a+i)<<" ";
        }
    }
    bool Zad3 (int* a, int b){
     bool c=false;
      int sum=0, polsum=0;
      for(int i=0;i<b;i++){
         sum+=*(a+i);
      };
     if(sum%2==0){
          int i=0;
         do{
             polsum+=*(a+i);
              if(polsum==(sum/2)){ c=true;break;}
                i++;
         }
          while(polsum<(sum/2));
        }
        return c;
    }

    void Zad4(int* a, int b, int c){
    if (c>0){
        int B[c];
        for(int i=0;i<c;i++){
            B[i]=a[b-c+i];
        };int j=c-1;
        for(int i=b;i>=0;i--){
            a[i]=a[i-c];
            if(i<c){a[i]=B[j];
             j--;};
        }

    }
    if(c<0){
        c=0-c;
        int B[c];
        for(int i=0;i<c;i++){
            B[i]=a[i];
        };
        int j=0;
        for(int i=0;i<b;i++){
            a[i]=a[i+c];
            if(i>=(b-c)){
                a[i]=B[j];
                j++;
            }
        }
    }
    }
    void Zad5(int a, int b, ...){
    int j;
    va_list b1;
    va_start(b1, b);
    j=b;
    for(int i=0; i<a; i++){
        j=!j;
        std::cout<<j;
        j=va_arg (b1, int);        
    };
    va_end (b1);
    }
}