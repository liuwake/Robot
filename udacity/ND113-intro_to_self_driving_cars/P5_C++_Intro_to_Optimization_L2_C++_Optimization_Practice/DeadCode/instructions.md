# Instructions

The current exercise is contained in the ```DeadCode``` folder. The folder contains code for adding two matrices
together.

There are two functions: ```matrix_addition()``` and ```matrix_addition_improved()```.

The `main.cpp` file iteratively runs each of these functions and times the results. Currently,
both `matrix_addition.cpp` and `matrix_addition_improved.cpp` contain the same code, so the timer results should be
about the same.

1. Open a new terminal window and type the following commands:

```
cd /home/workspace/DeadCode
g++ -std=c++11 main.cpp matrix_addition.cpp matrix_addition_improved.cpp
./a.out
```

2. Study the matrix addition code. Are there any unused variables? Is there any part of the code that is unreachable or
   redundant?

3. Now, remove dead code, redundant code, and/or unreachable code to optimize `matrix_addition_improved.cpp`. Then run
   the same commands in the command line to see if your time has improved.

4. Execute the code multiple times to convince yourself that your new code runs faster.

There is a solution in the file "`solution.cpp`". But no peeking until you've tried optimizing the code on your own!

This is [exercise]:

```shell
[iwake@192]💲g17 main.cpp matrix_addition.cpp matrix_addition_improved.cpp && ./a.out
duration milliseconds matrix addition: 8196.91
duration milliseconds matrix addition improved: 8268.47
```

This is [my method 1]

```shell
[iwake@192]💲g17 main.cpp matrix_addition.cpp matrix_addition_improved.cpp && ./a.out
duration milliseconds matrix addition: 8379.02
duration milliseconds matrix addition improved: 5827.22
```

This is [my method 2]

```shell
duration milliseconds matrix addition: 7968.22
duration milliseconds matrix addition improved: 6074.71
```