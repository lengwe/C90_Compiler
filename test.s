





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
addiu $s0, $zero, 1
addiu $s1, $zero, 1
addu $2, $2, $s1
mult $2, $s1
mflo $2
addu $2, $zero, $2
j main_end
main_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,24
j	$31
nop
.end	main
