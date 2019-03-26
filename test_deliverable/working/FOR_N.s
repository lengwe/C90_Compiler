






.text
.align 2
.globl f
.ent    f
.type f,@function
f:
addiu   $sp,$sp,-600
sw      $fp,592($sp)
sw			$ra, 596($sp)
move    $fp,$sp
addiu $t0, $zero, 0
li $t0 , 0

_start_0:
slti $t1, $t0, 5

beq $t1, $zero, _exit_1
addiu $a0 , $a0, 1

addiu $t0 , $t0, 1
beq $zero, $zero, _start_0
_exit_1:
addu $2, $zero, $a0
j f_end
f_end:
move    $sp,$fp
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	f
