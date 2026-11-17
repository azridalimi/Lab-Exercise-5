# Lab 5 log - Control structures

Name: MUHAMMAD AZRI BIN AHMAD DALIMI   
Matric: A26CS0211    
Date: 14/11/2026

## A1 - if traps (compile with warnings on, then debug)

Paste the compiler warnings you saw (one line each):

```A1_if_bugs_broken.cpp:11:17: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   A1_if_bugs_broken.cpp:11:17: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   A1_if_bugs_broken.cpp:19:15: warning: comparison of constant '9' with boolean expression is always true [-Wbool-compare]
   A1_if_bugs_broken.cpp:19:11: warning: comparisons like 'X<=Y<=Z' do not have their mathematical meaning [-Wparentheses]
   A1_if_bugs_broken.cpp:26:12: warning: logical not is only applied to the left hand side of comparison [-Wlogical-not-parentheses]
   A1_if_bugs_broken.cpp:26:12: warning: comparison of constant '9' with boolean expression is always false [-Wbool-compare]
   A1_if_bugs_broken.cpp:38:8: warning: suggest explicit braces to avoid ambiguous 'else' [-Wdangling-else]
   A1_if_bugs_broken.cpp:47:19: warning: suggest braces around empty body in an 'if' statement [-Wempty-body]
   A1_if_bugs_broken.cpp:47:5: warning: this 'if' clause does not guard... [-Wmisleading-indentation]
```

| Check | Expected output | Actual output | What the debugger showed (variable, line, value) | Fix |
|---|---|---|---|---|
| 1 `if (tickets = 0)` |Check 1: tickets left = 5|Check 1: tickets left = 0 |tickets, line 11 ,tickets was 5 before line 11, became 0 after line 11, Its assigned value to 0 not comparising|`if (tickets == 0)` |
| 2 `if (2 < x < 9)` |none|Check 2: 12 is between 2 and 9|x, line 19 ,x was 12 before line 19 .For the statement (2 < x < 9) first it works out 2 < 12. The result is true (1).Then it compares that 1 with < 9 equals to True. Therefore the result is "Check 2: 12 is between 2 and 9". |`if ((2 < x)&&(x < 9))`|
| 3 `if (!n > 9)` |Check 3: n is above 9  |Check 3: n is not above 9 |n, line 26. ! only applies to n. n was 5 before line 26. 5 is True. !n equal to False(0). 0 > 9 equal to False. Therefore the result is "Check 3: n is above 9" |`if (!(n > 9))`|
| 4 `if (y % 2 == 1)` |Check 4: |Check 4: Wrong number |y, line 38, y was 12 before line 38. 12 % 2 equal to 0, so (0 == 1) is false. skips everything inside it, including the else. The result is "Check 4:" |`if ((y % 2 == 1)&&(y < 10))` |
| 5 `if (level < 3);` |none|Check 5: level is low|line 46, The semicolon represent a null statement. So Either the condition is True or False. The result is always "Check 5: level is low". |`if (level < 3)` |


## A2 - loop traps

| Loop | Expected output | Actual output | What the debugger showed | Fix |
|---|---|---|---|---|
| 1 `continue` |Loop 1: 10 8 6 4 2 |Loop 1: 10 [guard] runaway loop stopped |n, line 24, n became 9 after the first pass and stayed 9. Because 9 is odd, continue jumped back to the top and skipped n = n - 1, so n never changed.The result is guard went up to 13 and stopped the loop. |put `n = n - 1;` before continue (line 26)|
| 2 off by one |Loop 2: total = 15 from 5 terms |Loop 2: total = 10 from 4 terms |i, line 38, i only went from 1 to 4 inside the loop.When i became 5, i < 5 was false, so the loop ended before adding 5.The result is Loop 2: "total = 10 from 4 terms"|`for (int i = 1; i <= 5; i++)` |
| 3 missing update |Loop 3: count down 3... 2... 1... then print Go! |Loop 3: 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... [guard] runaway loop stopped Go! |seconds, line 57, seconds stayed 3 on every pass while guard went up to 13.Nothing inside the loop changes seconds, so the result is "Loop 3: 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... 3... [guard] runaway loop stopped Go!" |put `seconds = seconds - 1;` after line 57 |

## B5 - prediction for the slide 94 program (write BEFORE you run it)

- Times the outer loop runs: 4
- Times the inner loop runs (in total): 7
- Output:

```
    x = 1  y = 1
    x = 1  y = 4
    x = 1  y = 7
    x = 1  y = 10
    x = 3  y = 3
    x = 3  y = 6
    x = 3  y = 9
    x = 5  y = 5
    x = 5  y = 8
    x = 7  y = 7
    x = 7  y = 10
```

Actual result matched my prediction?  yes   

## Sample runs

Paste one sample run for each of B1, B2, B3, B4, B5, B6 under its own heading.

B1 - GRADE CLASSIFIER
Enter the score (0 to 100): 91
Grade: A
Excellent!
Enter the score (0 to 100): 90
Grade: B
Very good!
Enter the score (0 to 100): 51
Grade: D
Pass.
Enter the score (0 to 100): 50
Grade: F
Fail.
Enter the score (0 to 100): -5
Invalid score.

B2 - SIGN ,PARITY AND LEAP YEAR

## Reflection (2 sentences)

Which bug was hardest to see by reading, and what did the debugger show that reading did not?
The bug was hardest to see by reading is B4-menu.cpp .The while(true) statement is easier to careless mistake eventhough I had learned it before such as I forgot to initialize varibale and value before get to the while looping, so the result is debugger will send warning: 'i' is used uninitialized. 
