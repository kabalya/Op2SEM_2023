#include <iostream>
#include "Degree.h"
#include "MyMath.h"

#include "Stack.h"
#include "StackExceptions.h"
#include "DegreeException.h"
#include "StackOverflowException.h"
#include "EmptyStackException.h"

#include "string"
   

    int main() {

         
          int num, deg;
         
          pow(4, 4);
          pow(10, 2);
          pow(5, 4);
         // return 0;



              Stack<int> st;
              st.push(44);
              st.push(55);
              st.push(143);
              st.push(100);
              st.push(43);
              st.push(13);

              try {
                  st.pop();
              }
              catch (Exception::StackExceptions& ex) {
                  std::cout << ex.what() << '\n';
              }
              st.StackSize(st);

              return 0;








      }

      

    