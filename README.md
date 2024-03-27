Write a C++ function that has the following input parameters:
1. String object or character array.
2. Integer variable that is passed by reference. It may be initialized before the function
call.
Post Conditions:
The function will return true if parameter 1 was a valid integer. It will return false otherwise.
The integer variable parameter will contain the integer equivalent to what is stored in
parameter 1.
Note: If parameter 1 is a floating point number, the function would return true and parameter
2 will only store the whole number portion of parameter 1.
Example: “1.23” will be stored as 1.
