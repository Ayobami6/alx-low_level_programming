# ALX Software Engineer Cohort-10 First Trimester Course on C
# Learning C With Peers

## Debugging

Debugging in C involves a variety of processes. We are provided a variety of tools

## Betty

Betty is a toool that helps us to check the syntax an styling of the C code we are working with.

To execute Betty we run

```comandline
$ betty 1-main.c
```

Betty is a tool that helps us write clear and well documented code. It helps us to remove unexessary spaces and any style related changed to our C code.

## Valgrind

Valgrind is a tool that is used to check for memory errors. It helps us to look into the alloc methodas that have been called and the free methods have been called. We get t look into errors that might arize due to incorrect memory allocation and how we can mitigate them.
```comandline
$ betty ./1-main
```

## GCC

Of all the tools the `gcc` is one of the most important of all the tools as it shows us where our immediate syntax errors have arised in our code.

Even when our code has no syntax error we can get to see logical errors from executing our code.

> Syntax Errors: These are errors caused by the incorrrect implementation of C code. This could be mispellings, incorrect usage of methods, including but not limited to not importing the right header file.
> Logical Errors: These are errors that are caused by incorrect impleentation of the logic of a given piece of code in a given syntax.
