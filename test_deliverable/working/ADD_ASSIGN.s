


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
addiu $a0, $a0, 1
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
