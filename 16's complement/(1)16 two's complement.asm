load R0,90
load R1,95
load R2,1
load R3,255
xor R0,R0,R3
jmpEQ R3=R0,loop1
jmp loop2

loop1:
xor R1,R1,R3
addi R1,R1,R2
addi R0,R0,R3
halt
loop2:
xor R1,R1,R3
addi R0,R0,R2
halt