




.globl x
.data
x:
    .word 100
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
lui $t0, %hi(x)
lw $t1, %lo(x)($t0)
addu $2, $zero, $t1
j f_end
f_end:
move    $sp,$fp
lw      $fp,192($sp)
lw			$ra,196($sp)
addiu   $sp,$sp,200
j	$31
nop
.end	f
