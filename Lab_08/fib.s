        .data
# n:      .word 13
str1:	.asciiz "Please enter a number: \n"

        .text
main: 	add     $t0, $0, $zero
		addi    $t1, $zero, 1
		
		la $a0 str1
		li $v0 4
		syscall
		
		li $v0 5
		syscall
		
		addi $t3 $v0 0
		# la      $t3, n
		# lw      $t3, 0($t3)
		
fib: 	beq     $t3, $0, finish
		add     $t2,$t1,$t0
		move    $t0, $t1
		move    $t1, $t2
		subi    $t3, $t3, 1
		j       fib
		
finish: addi    $a0, $t0, 0
		li      $v0, 1		
		syscall			
		li      $v0, 10		
		syscall		