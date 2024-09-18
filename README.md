# firstlambda
C++ program with Lambda use

machine:~/firstlambda$ g++ main.cpp -o firstlambda


Compile errors:
auto voidLambda =  -> void {

Compile errors:
voidLambda[]();

Using auto to allow compiler deduces the type of the lambda function.
Could use std::function, instead, but more overhead.

TODO:
See all by value, and one by value + rest by ref, and all by ref in using Lambda.
