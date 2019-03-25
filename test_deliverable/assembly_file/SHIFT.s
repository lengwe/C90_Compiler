



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
sll $a0, $a0, 1
addu $a0, $zero, $a0
addu $2, $zero, $a0
j f_end
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,24
j	$31
nop
.end	f
