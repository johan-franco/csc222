#include <iostream>
using namespace std;

void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}

int main() {
    recurse_forever(1);
}
/*In computer science, a call stack is a stack data structure that stores information about the active 
subroutines of a computer program.Since the call stack is organized as a stack, the caller pushes the return 
address onto the stack, and the called subroutine, when it finishes, pulls or pops the return address off the call 
stack and transfers control to that address. If a called subroutine calls on yet another subroutine, 
it will push another return address onto the call stack, and so on, with the information stacking up and 
unstacking as the program dictates. If the pushing consumes all of the space allocated for the call stack, an 
error called a stack overflow occurs, generally causing the program to crash.*/

//I believe a subroutine is contionusly the subroutine which may be why it crashes if you let it run.