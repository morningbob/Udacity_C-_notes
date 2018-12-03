/*Goal: Practice array manipulation in C++. 
 **The user will input 40 integers. 
 **Put them into an array. Then print the array in the order the numbers were
 **entered. Then print in reverse order. Then sort the array in ascending order 
 **and print it. 
 */

 #include <iostream>
 #include <stdio.h>

 int main()
 {
     int userInput[40];

     //Enter the numbers into an array called userInput
     for(int i = 0; i < 40; i++)
     {
         scanf("%d", &userInput[i]);
     }
     //print the array
     std::cout<<"\nThe array\n";
     for(int i = 0; i < 40; i++)
     {
         std::cout << userInput[i] <<" ";
     }
     //print the array in reverse order
     std::cout<<"\n\nThe array in reverse order\n";
     for(int i = 39; i >= 0; i--)
     {
         std::cout << userInput[i] <<" ";
     }    
     //sorting the array
      for(int i = 0; i < 40; i++)
     {
         for(int j = 0; j < 39 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }
std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 40; i++)
{
    std::cout << userInput[i] <<" ";
}
return 0;


/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location;
    
    //TODO: write code to determine if integers entered by 
    //the user are in searchArray
    
    //Use these commands to give feedback to the user
    if(location != -1)
    {
        std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
    }
    else
    {
        std::cout<<searchKey<<" is not in the array.\n";
    }
        
    return 0;
}
