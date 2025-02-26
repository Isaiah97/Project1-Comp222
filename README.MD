Objective:
Write C code to calculate the average CPI, total processing time, and MIPS of a sequence of
instructions by utilizing the number of instruction classes, the CPI and total count of each
instruction type, and the clock rate (frequency) of a specific machine.
Inputs:
• Number of instruction classes (types)
• CPI of each type of instruction
• Total instruction counts of each type of instruction
• Clock rate of machine (MHz)
Output:
• Table of input parameters
• Table of performance (Average CPI, CPU time (ms), MIPS)
Specification:
The program calculates the output based on choosing from a menu of choices, where each
choice calls the appropriate procedure, where the choices are:
1) Enter parameters
2) Print table of input parameters
3) Print table of performance
4) Quit
Notes:
• Make sure all calculations are displayed truncated to 2 decimal fractional places, using the
format “%.2f” in the printf statements.
• Be sure that execution time is measured in milliseconds (msec).
What to turn in:
The source code as a single file named: yourname.c uploaded to Canvas
(http://canvas.csun.edu) by the deadline.
You can use any editor and/or compiler, but make sure your code compiles and executes under
the gcc compiler in the Unix environment.
Example:
$ a.out
Performance assessment:
-----------------------
1) Enter parameters
2) Print table of input parameters
3) Print table of performance
4) Quit
Enter selection: 1
Enter the number of instruction classes: 3
Enter the frequency of the machine (MHz): 200
Enter CPI of class 1: 2
Enter instruction count of class 1 (millions): 3
Enter CPI of class 2: 4
Enter instruction count of class 2 (millions): 5
Enter CPI of class 3: 6
Enter instruction count of class 3 (millions): 7
Performance assessment:
-----------------------
1) Enter parameters
2) Print table of input parameters
3) Print table of performance
4) Quit
Enter selection: 2
-------------------------
|Class |CPI |Count |
-------------------------
|1 |2 |3 |
-------------------------
|2 |4 |5 |
-------------------------
|3 |6 |7 |
-------------------------
Performance assessment:
-----------------------
1) Enter parameters
2) Print table of input parameters
3) Print table of performance
4) Quit
Enter selection: 3
-------------------------
|Performance |Value |
-------------------------
|Average CPI |4.53 |
-------------------------
|CPU Time (ms) |340.00 |
-------------------------
|MIPS |44.12 |
-------------------------
Performance assessment:
-----------------------
1) Enter parameters
2) Print table of input parameters
3) Print table of performance
4) Quit
Enter selection: 4
