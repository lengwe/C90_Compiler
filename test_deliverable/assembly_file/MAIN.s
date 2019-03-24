




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
addu $2, $zero, 
j main_end
main_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,24
j	$31
nop
.end	main
