






.text
.align 2
.globl array
.ent    array
.type array,@function
array:
addiu   $sp,$sp,-200
sw      $fp,192($sp)
sw			$ra, 196($sp)
move    $fp,$sp
lw $t0, 16($fp)
addiu $t0, $zero, 1
sw $t0, 16($fp)

lw $t1, 16($fp)
add $a0, $a0, $t1
sw $a0, 16($fp)

addu $2, $zero, $a0
j array_end
array_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	array
