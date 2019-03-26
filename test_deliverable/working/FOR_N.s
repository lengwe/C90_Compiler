






.text
.align 2
.globl f
.ent    f
.type f,@function
f:
addiu   $sp,$sp,-200
sw      $fp,192($sp)
sw			$ra, 196($sp)
move    $fp,$sp
addiu $t0, $zero, 0
addiu $t0, $zero, 0

_start_0:
slti $t1, $t0, 5

beq $t1, $zero, _exit_1
addiu $t0 , $t0, 1
addiu $a0 , $a0, 1

beq $zero, $zero, _start_0
_exit_1:
addu $2, $zero, $a0
j f_end
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	f
