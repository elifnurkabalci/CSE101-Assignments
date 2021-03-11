load R0,48
load R1,10
load R2,20
load R3,30
load R4,1
load R5,255
xor R0,R0,R5
jmpEQ R5=R0,loop1
jmp loop2
loop1:
addi R0,R0,R5
xor R1,R1,R5
addi R1,R1,R4
xor R2,R2,R5
addi R2,R2,R4
xor R3,R3,R5
addi R3,R3,R4
halt
loop2:
addi R0,R0,R4
xor R1,R1,R5
xor R2,R2,R5
xor R3,R3,R5
halt