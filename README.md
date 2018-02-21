# Basic Functions in C

Functions in C are not much different from functions in JavaScript. Probably the most notable difference, at least from a syntactic point of view, is that you need to specify types on all your input parameters, along with needing to specify the return type of the function. Remember, C is a _strongly_ typed language, as opposed to JavaScript which is a _loosely_ typed language where types are entirely inferred by the interpreter. The C compiler ensures that you specify your types and that your code is consistent with the types you specify. 

## Task 1

Your first task is going to be writing good ol' fizzbuzz in C! Your `fizzbuzz` function should receive some integer n, then loop up till n, printing out "Fizz" if the current iteration i is divisible by 3, "Buzz" if it's divisible by 5, or "FizzBuzz" if it is divisible by both 3 and 5. Additionally, for each iteration where nothing is printed, your function should increment a counter and return the result of that counter at the end of its execution. 

Navigate to `src/fizzbuzz` and open up the `fizzbuzz.c` file. You'll write your code in there. When you want to test it, type `make` into your terminal (make sure you're doing this from the root directory where the Makefile is located), which will run the Makefile and compile your program and, if the compilation was successful, run the tests for it as well. 

## Task 2

For task 2, you're going to implement a QuickSort function, which you've done in JavaScript before. For this task, feel free to reference your old JavaScript implementation(s) and simply transpose the code from one language to the other. Typically this is a good way to practice new languages you're trying to learn: by transposing code you've written from one language to another. 

Navigate to `src/quicksort` and open up the `quicksort.c` file. Implement your quicksort algorithm, then type `make` from the root directory and make sure you have all the tests passing. 