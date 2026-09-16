#include <iostream>
#include <chrono>

/* this is for the chrono library usage.
steady_clock is for the clock that am using the system clock
the use case is for-
1.checking how long something takes
2.executing timeoouts 
*/

int main () {

    //this is the start time for the operation
    auto start = std::chrono::steady_clock::now();

    //perfoming an expensive operation
    for(int i = 0; i<100000000; ++i);

    //this is the end of the task time
    auto end =  std::chrono::steady_clock::now();

    //calculating the elapsed time for the task to be compeled
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    //printing an output
    std::cout << "this is the total elapsed time: " << elapsed;

    return 0;
}
