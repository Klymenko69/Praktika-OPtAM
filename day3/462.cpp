#include <iostream>
int func(char a, char b){
     if ( a==b ||isalpha(a)==isalpha(b))

{return 1; }
                   
                      
      // int = int ��� char = char
     else
     return 0;
     } 
     
 
  main()
  {
          char a,b;
                  std:: cout<< "VVedit a,b"<<std:: endl;
               std:: cin>>a;
               std:: cin>>b;
               std:: cout<<"resulat="<<func(a,b) <<std:: endl;    
              
               system("pause");
          
          
          
          
          
          }
