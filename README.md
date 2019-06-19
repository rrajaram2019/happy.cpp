# happy.cpp
Assignment 3
Happy Numbers
EC327 Summer 2019
1 Introduction
1.1 Assignment Goals
1.2 Due Date
1.3 Group Size
1.4 Assignment Value
1.5 Late policy
1.6 Submission Link
2 Happy Numbers
2.1 Definition
2.2 The program
2.3 Restrictions
3 Checker
1 Introduction
1.1 Assignment Goals
The assignment goals are help you learn about

arithmetic operators
iteration
formating output
1.2 Due Date
This assignment is due Friday May 31st at 23:59 (i.e. 11:59pm)

1.3 Group Size
The maximum group size is 2 students.

1.4 Assignment Value
This assignment is worth 3 points.

1.5 Late policy
Late assignments will be accepted until the beginning of the lecture immediately following the due date.

If the natural grade on the assignment is 
g
, the number of hours late is 
h
, and the number of hours between the assignment due time and the next class is 
H
, the new grade will be

(h > H) ? 0 : g * (1- h/(2*H))
If the same assignment is submitted ontime and late, the grade for that component will be the maximum of the ontime submission grade and the scaled late submission grade.

1.6 Submission Link
You can submit here: Happy Numbers submit link

2 Happy Numbers
2.1 Definition
The definition of a happy number, from wikipedia

Given a number 
n
=
n
0
, define a sequence 
n
1
, 
n
2
, ... where 
n
i
+
1
 is the sum of the squares of the digits of 
n
i
. Then 
n
 is happy if and only if there exists 
i
 such that 
n
i
=
1
.

It can be shown (see wikipedia) that 
n
 is unhappy if the number 4 appears in the sequence.

2.2 The program
Write a C++ program happy.cpp which reads numbers, one at a time, from the terminal input, and outputs

x is happy
or

x is not happy
For example:

> happy
4
4 is not happy
1
1 is happy
111111
111111 is not happy
1000
1000 is happy
0
>
Your program should handle the calculation of happiness for all numbers between 1 and 2147483647.

Your program should continue answering about the happiness of numbers until 0 is entered, at which time the program should exit silently.

2.3 Restrictions
You may include <iostream> and <cstdint> but no other library is allowed.

3 Checker
happy_checker.py
Download by clicking the link or using cget inside the DevBox.

Use it by typing

python happy_checker.py
in the directory that has your programs in it.

The checkers has infinite-loop detection using timers: if your program takes longer than two seconds to complete, the timer will expire and stop your program.
