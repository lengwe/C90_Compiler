







.text
.align 2
.globl recursive
.ent    recursive
.type recursive,@function
recursive:
addiu   $sp,$sp,-200
sw      $fp,192($sp)
sw			$ra, 196($sp)
move    $fp,$sp
slt $t0, $a0, 1
xori $t0, $t0, 0x1
andi $t0, $t0, 0x00ff
beq $t0, $zero, _end1_1
sw $t0, 16($fp)
sw $a0, 20($fp)
sw $a1, 24($fp)
sw $a2, 28($fp)
sw $a3, 32($fp)
sw $2, 36($fp)
sw $3, 40($fp)
sw $31, 44($fp)
addiu $a0, $a0, -1
addu $a0, $zero, $a0
jal recursive
nop
lw $t0, 16($fp)
lw $a0, 20($fp)
lw $a1, 24($fp)
lw $a2, 28($fp)
lw $a3, 32($fp)
lw $3, 40($fp)
lw $31, 44($fp)
move $t1, $2
lw $2, 36($fp)
mult $a0, $t1
mflo $2
addu $2, $zero, $2
j recursive_end
beq $zero, $zero, _end2_2
_end1_1:
addu $2, $zero, 1
j recursive_end
_end2_2:
recursive_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	recursive
