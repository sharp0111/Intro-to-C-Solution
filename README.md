# Introduction to the C Programming Language

Welcome to your first C lab! If it hasn't been made clear to you yet, C is a _hard_ language to learn, especially if you're coming from a language like JavaScript or Python. Again, the main reason for this is because C has you working directly with the memory on your machine. Higher level languages abstract this fact away from you. Essentially, you're getting exposed to the nitty-gritty seedy underbelly of your computer's inner workings, and being in such a place for extended periods of time is not for everybody. 

That being said, we the instructors do believe that every developer needs to get a taste of C in order to really be able to delve into the inner workings of how exactly software communicates and interfaces with hardware. That's not really something JavaScript or Python will expose to you. Additionally, once you get acclimated to C, the language provides you with unparalleled control over how your code gets executed on your machine. Some people find the sheer amount of control that C provides you intoxicating. 

But before any of that happens, you've gotta get your feet wet with C. So without further ado, let's get started!

## What you'll be doing in this lab

This lab is structured very much like how your introductory JavaScript labs are structured. There are independent modules, each with their own set of exercises that you'll be tasked with implementing. There's an associated set of tests for all the exercises in each module, which you'll run against your code to check to see if it behaves and functions correctly. The order in which you should tackle these exercises is this:

  - [ ] fizzbuzz
  - [ ] strings
  - [ ] pointers
  - [ ] quicksort
  - [ ] malloc
  - [ ] structs
  - [ ] stack
  - [ ] callbacks

Inside a module directory, type `make clean all` (just like with the `npm install` command needing a `package.json` file, the `make` command requires a `Makefile`), which will do a couple of things as specified by the `Makefile`. These include compiling your source code inside that module, linking all of the included header files and libraries, and running the tests for that module. Once you've gotten all of the tests to pass for that module, move on to the next one. 
