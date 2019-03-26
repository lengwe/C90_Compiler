
.text
.align 2
.globl main
.ent    main
.type main,@function
main:
addiu   $sp,$sp,-200
sw      $fp,192($sp)
sw			$ra, 196($sp)
move    $fp,$sp
li  $3, 1
sw $3, 16($fp)
li  $3, 2
sw $3, 20($fp)
li  $3, 3
sw $3, 24($fp)
li  $3, 4
sw $3, 28($fp)
li  $3, 5
sw $3, 32($fp)
lw $t0, 24($fp)
addu $2, $zero, $t0
j main_end
main_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	main
