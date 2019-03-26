





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
beq $t0, $zero, _end1_1
addu $2, $zero, $a0
j f_end
_end1_1:
addiu $2, $a0, 10
addu $2, $zero, $2
j f_end
f_end:
move    $sp,$fp
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	f
