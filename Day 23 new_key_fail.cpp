//=======================================================================================================
//                                                                                                      =
//............................New Fails ................................................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;

int now(){
    //..............................................................
    //new fails sometime when the value is exceted it can be solved by using two
    //methods

    //................
    // 1: exception
    // 2: nothrow
    //................

    //Exception..
    
                try {
              int* p = new int[1000000];
            }
             catch (std::bad_alloc& e) {
            std::cout << "Failed to allocate memory: " << e.what() << std::endl;
            }
      

    //.......How it work...................
    /*
    
    In general, it is better to handle std::bad_alloc exceptions rather than suppressing them. This is because
    suppressing the exception will cause your program to crash if there is not enough memory available.
    By handling the exception, you can instead provide a more graceful error message to the user.

    Here are some additional things to keep in mind about new failures:

    new failures are more likely to occur when you are allocating large amounts of memory.
    new failures can also occur if the system is low on memory.
    If you are unsure whether or not a new allocation will succeed, 
    you can use the std::allocator class to check the amount of available memory before you allocate the object.
    
    
    */

    //nothrow
    // 
             int* p = new (nothrow) int[1000000];
             if (p == nullptr) {
                 std::cout << "Failed to allocate memory" << std::endl;
             }

             /*
             
            This code will attempt to allocate an array of 1000000 integers. If the allocation fails, it will set the pointer p to nullptr and print an error message to the console.

            In general, it is better to handle std::bad_alloc exceptions rather than suppressing them.
            This is because suppressing the exception will cause your program to crash if there is not enough memory available.
            By handling the exception,you can instead provide a more graceful error message to the user.
             
             
             
             */
}

int now1() {

    //....................Working of new and delete Key words...................
    //..........................................................................

    // Allocate memory for an integer using the `new` operator
    int* p = new int;

    // Store a value in the allocated memory
    *p = 10;

    // Print the value stored in the allocated memory
    std::cout << *p << std::endl; // Output: 10

    // Deallocate the memory using the `delete` operator
    delete p;

}
//=======================================================================================================
//                                                                                                      =
//............................Memory leaks..............................................................=
//                                                                                                      =
//=======================================================================================================
int leak() {

    //....................Defination........................
    //.........................................................
  
    /*

    A memory leak in C++ occurs when a program allocates memory but fails to properly deallocate it, 
    leading to a gradual increase in memory usage over time.This can eventually cause the program to crash or
    cause other performance issues.Memory leaks are one of the most common programming 
    errors in C++ and can be difficult to track down.
    */

    
        // Allocate memory for an integer
        int* p = new int;

        // Store a value in the allocated memory
        *p = 10;

        // Don't deallocate the memory


    /*

            In this example, the createAndLeakObject() function allocates memory for an integer using new 
            but never calls delete to deallocate it. This means that the memory will be lost and cannot be
            used by other programs. This is a common type of memory leak, and can occur if you forget to call
            delete after allocating memory.

            To fix this memory leak, you would need to add a delete statement to the createAndLeakObject() function, like this:
    
    */
        
            // Allocate memory for an integer
            int* p = new int;

            // Store a value in the allocated memory
            *p = 10;

            // Deallocate the memory
            delete p;

       //This will ensure that the memory is deallocated when the function returns.

}
int main()
{
    
}
