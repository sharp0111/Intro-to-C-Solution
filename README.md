# Introduction to the C Programming Language

Welcome to your first C lab! If it hasn't been made clear to you yet, C is a _hard_ language to learn, especially if you're coming from a language like JavaScript or Python. Again, the main reason for this is because C has you working directly with the memory on your machine. Higher level languages abstract this fact away from you. Essentially, you're getting exposed to the nitty-gritty seedy underbelly of your computer's inner workings, and being in such a place for extended periods of time is not for everybody. 

That being said, we the instructors do believe that every developer needs to get a taste of C in order to really be able to delve into the inner workings of how exactly software communicates and interfaces with hardware. That's not really something JavaScript or Python will expose to you.

So without further ado, let's get started!

## What you'll be doing in this lab

This lab is structured very much like how your introductory JavaScript labs are structured. There are independent modules, each with their own set of exercises that you'll be tasked with implementing. There's an associated set of tests for all the exercises in each module, which you'll run against your code to check to see if it behaves and functions correctly. The order in which you should tackle these exercises is this:

  -[] fizzbuzz
  -[] pointers
  -[] quicksort
  -[] malloc
  -[] structs
  -[] stack
  -[] callbacks

Inside a module directory, type `make`, which will do a couple of things as specified by the Makefile. These include, but are no limited to, compiling your source code inside that module, linking all of the included header files, and running the tests for that module. Once you've gotten all of the tests to pass for that module, move on to the next one. 

# Basic Functions in C

Functions in C are not much different from functions in JavaScript. Probably the most notable difference, at least from a syntactic point of view, is that you need to specify types on all your input parameters, along with needing to specify the return type of the function. Remember, C is a _strongly_ typed language, as opposed to JavaScript which is a _loosely_ typed language where types are entirely inferred by the interpreter. The C compiler ensures that you specify your types and that your code is consistent with the types you specify. 

## Task 1

Your first task is going to be writing good ol' fizzbuzz in C! Your `fizzbuzz` function should receive some integer n, then loop up till n, printing out "Fizz" if the current iteration i is divisible by 3, "Buzz" if it's divisible by 5, or "FizzBuzz" if it is divisible by both 3 and 5. Additionally, for each iteration where nothing is printed, your function should increment a counter and return the result of that counter at the end of its execution. 

Navigate to `src/fizzbuzz` and open up the `fizzbuzz.c` file. You'll write your code in there. When you want to test it, type `make` into your terminal (make sure you're doing this from the root directory where the Makefile is located), which will run the Makefile and compile your program and, if the compilation was successful, run the tests for it as well. 

## Task 2

For task 2, you're going to implement a QuickSort function, which you've done in JavaScript before. For this task, feel free to reference your old JavaScript implementation(s) and simply transpose the code from one language to the other. Typically this is a good way to practice new languages you're trying to learn: by transposing code you've written from one language to another. 

Navigate to `src/quicksort` and open up the `quicksort.c` file. Implement your quicksort algorithm, then type `make` from the root directory and make sure you have all the tests passing. 