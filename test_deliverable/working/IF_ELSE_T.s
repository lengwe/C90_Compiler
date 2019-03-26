







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
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	f
