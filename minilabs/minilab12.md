## Minilab 12

Goals:
* practice printing to stdout in C
* make sure you can compile and run simple C programs

Tasks:
* create a source file (whatever name you want, but you
  will probably want it to end in .c)
* write a short C program that initializes the following variables
  to whatever value you choose
    * `int x`
    * `int y`
    * `double z` (make sure z has at least 4 values both before and
      after the decimal place
    * 2 "string" variables, `s1` and `s2`, for example:
        `char s1[] = "hello";`
    * `char c`
* Use `printf` to output the following line (where `s1`, `c`, ... are printed
  as the values of those variables.

```
s1 c. s2 ate x pancakes for breakfast,
drank y smoothies,
and then sleptfor z hours.
```
* Compile your code with `gcc`, and run the resulting executable
* Modify your `printf` call to only print z to 1 place after the decimal point.
* Compile again and run and make sure the change worked as expected.

