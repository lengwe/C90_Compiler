





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
li  $3 , 1
sw $3, 16($fp)
li  $3 , 2
sw $3, 20($fp)
li  $3 , 3
sw $3, 24($fp)
li  $3 , 4
sw $3, 28($fp)
li  $3 , 5
sw $3, 32($fp)
li  $3 , 6
sw $3, 36($fp)
li  $3 , 7
sw $3, 40($fp)
li  $3 , 8
sw $3, 44($fp)
li  $3 , 9
sw $3, 48($fp)
li  $3 , 10
sw $3, 52($fp)
lw $t1, 16($fp)
add $t0, $a0, $t1
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
