@67
D=A
@R0
M=D
// Load
Denominations
@25
D=A
@R1
M=D
@10
D=A
@R2
M=D
@5
D=A
@R3
M=D
@1
D=A
@R4
M=D
(QUARTERS)
@R0
D=M
@R1
D=D-M
@DIMES
D;JLT
@R0
M=D
@R5
M=M+1
@QUARTERS
0;JMP
(DIMES)
@R0
D=M
@R2
D=D-M
@NICKELS
D;JLT
@R0
M=D
@R6
M=M+1
@DIMES
0;JMP
(NICKELS)
@R0
D=M
@R3
D=D-M
@PENNIES
D;JLT
@R0
M=D
@R7
M=M+1
@NICKELS
0;JMP
(PENNIES)
@R0
D=M
@R4
D=D-M
@END
D;JLT
@R0
M=D
@R8
M=M+1
@PENNIES
0;JMP
(END)
@END
0;JMP