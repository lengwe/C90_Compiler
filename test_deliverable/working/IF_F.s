





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
slti $t0, $a0, 0
beq $t0, $zero, _end1_1
addu $2, $zero, $a0
j f_end
_end1_1:
addiu $2, $a0, 10
addu $2, $zero, $2
j f_end
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	f
