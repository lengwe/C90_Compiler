






.text
.align 2
.globl array
.ent    array
.type array,@function
array:
addiu   $sp,$sp,-600
sw      $fp,592($sp)
sw			$ra, 596($sp)
move    $fp,$sp
lw $t1, 16($fp)
li $t1 , 1
sw $t1, 16($fp)

lw $t2, 16($fp)
add $t0, $a0, $t2
addu $a0, $zero, $t0
sw $a0, 16($fp)

addu $2, $zero, $a0
j array_end
array_end:
move    $sp,$fp
lw      $fp,592($sp)
lw			$ra,596($sp)
addiu   $sp,$sp,600
j	$31
nop
.end	array
