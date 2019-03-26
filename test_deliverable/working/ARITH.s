





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
li $t1, 2
mult $a0, $t1
mflo $t0
addu $t0, $zero, $t0
addiu $t0 , $t0, 1

addiu $t0, $t0, 3
addiu $t0, $t0, -2
addiu $t0, $t0, -1

addu $2, $zero, $t0
j f_end
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	f
