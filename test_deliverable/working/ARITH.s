





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
li $t1, 2
mult $a0, $t1
mflo $t0
addu $t0, $zero, $t0
addiu $t0 , $t0, 1

addiu $t1, $t0, 3
addiu $t1, $t1, -2
addiu $t1, $t1, -1
addu $t0, $zero, $t1

addu $2, $zero, $t0
j f_end
f_end:
move    $sp,$fp
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	f
