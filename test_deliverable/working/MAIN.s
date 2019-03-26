




.text
.align 2
.globl main
.ent    main
.type main,@function
main:
addiu   $sp,$sp,-600
sw      $fp,592($sp)
sw			$ra, 596($sp)
move    $fp,$sp
sw $a0, 16($fp)
sw $a1, 20($fp)
sw $a2, 24($fp)
sw $a3, 28($fp)
sw $2, 32($fp)
sw $3, 36($fp)
sw $31, 40($fp)
li $a0 , 5
jal f
nop
lw $a0, 16($fp)
lw $a1, 20($fp)
lw $a2, 24($fp)
lw $a3, 28($fp)
lw $3, 36($fp)
lw $31, 40($fp)
move $t0, $2
lw $2, 32($fp)
xori $2, $t0, 15
sltu $2, $2, 1
andi $2, $2, 0x00ff
sltu $2 , $2, 1
andi $2 , $2, 0x00ff
addu $2, $zero, $2
j main_end
main_end:
move    $sp,$fp
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	main
