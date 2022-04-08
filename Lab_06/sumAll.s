.data
	input: .asciiz "Please enter a number: "
	evenSum: .asciiz "Sum of even numbers is: "
	oddSum: .asciiz "\nSum of odd numbers is: "
.text

main:	li	$v0, 4 	# asks user for input
	la	$a0, input
	syscall
	la	$v0, 5
	syscall
	add $t0, $v0, $zero # sets input to register 1

While: 	beq 	$v0, $zero, After # checks if input is 0
	srl 	$t1, $t0, 1 # shifts bits
	sll 	$t1, $t1, 1
	bne 	$t1, $t0, isOdd # if input is odd break
	beq 	$t1, $t0, isEven # if inpust is even break
	
	li	$v0, 4 # asks user for input
	la	$a0, input
	syscall
	la	$v0, 5
	syscall
	add 	$t0, $v0, $zero # sets input to register 1
	
	j 	While

isOdd: 	add 	$t2, $t2, $v0 	# adds odd sum
	j main
	
isEven: add 	$t3, $t3, $v0 	# adds even sum
	j main

After: 	li	$v0, 4 	# prints even sum
	la	$a0, evenSum
	syscall
	li	$v0, 1
	la	$a0, 0($t3)
	syscall
	
	li	$v0, 4 	# prints odd sum
	la	$a0, oddSum
	syscall
	li	$v0, 1
	la	$a0, 0($t2)
	syscall
	