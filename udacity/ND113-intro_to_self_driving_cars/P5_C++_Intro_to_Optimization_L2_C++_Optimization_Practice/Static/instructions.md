# Instructions Static Exercise

This program times a function `called blur_factor()` and another function called `blur_factor_improved()`. Both of these
functions currently have the same code.

Here is your task:

1. Read through the code in `main.cpp` and `blur_factor.cpp`.

2. Open a new terminal window and type the following commands to run the code:
```shell
   cd /home/workspace/Static
   g++ -std=c++11 main.cpp blur_factor.cpp blur_factor_improved.cpp print.cpp
   ./a.out
```

3. Modify the code in `blur_factor_improved.cpp` to get it to run faster. There are two things you can do: (a) use the `
   static` keyword for variables whose values do not change. These variables include blurring, center, corner, adjacent,
   and window. (b) eliminate the nested for loops used to prepare the window variable. (HINT: You can use the `C++11`
   syntax for initializing a 2D vector.
   `vector< vector<int> > my_vector = {{a, b, c}, {d, e, f}}`;

HINT: Think through the logic of the nested for loops and determine how you could initialize the window variable without
those loops.

4. Run the code again to see if the code runs faster. Use these terminal commands (assuming you are already in the
   Static directory):
```shell
   g++ -std=c++11 main.cpp blur_factor.cpp blur_factor_improved.cpp print.cpp
   ./a.out
```

5. If you get stuck, there is a solution.cpp file inside the Static folder


```shell
[iwake@192]💲./exercise 
duration milliseconds blur_factor: 4579.83
duration milliseconds blur_factor_improved: 4644.36

[iwake@192]💲./const_exercise 
duration milliseconds blur_factor: 4761.38
duration milliseconds blur_factor_improved: 4938.38

[iwake@192]💲./const_my 
duration milliseconds blur_factor: 4573.78
duration milliseconds blur_factor_improved: 2722.24

[iwake@192]💲./static_my 
duration milliseconds blur_factor: 4567.38
duration milliseconds blur_factor_improved: 1555.29

[iwake@192]💲.g17 -o static_exercise main.cpp blur_factor.cpp blurfactor_improved_exercise_static.cpp print.cpp && ./static_exercise 
duration milliseconds blur_factor: 4424.38
duration milliseconds blur_factor_improved: 1466.84

[iwake@192]💲./user 
duration milliseconds blur_factor: 4712.62
duration milliseconds blur_factor_improved: 1587.13


```
