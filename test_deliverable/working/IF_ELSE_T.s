







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
slti $t0, $a0, 1
xori $t0, $t0, 0x1
beq $t0, $zero, _end1_1
addu $2, $zero, $a1
j f_end
beq $zero, $zero, _end2_2
_end1_1:
addu $2, $zero, $a0
j f_end
_end2_2:
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	f
