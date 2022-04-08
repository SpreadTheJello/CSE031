        .data
n:      .word 25
str1: .asciiz "Less than\n"
str2: .asciiz "Less than or equal to\n"
str3: .asciiz "Greater than\n"
str4: .asciiz "Greater than or equal to\n"

        .text
main: 	li      $v0, 5
		syscall	
		add 	$s1, $v0, $zero
		lw 	$s2, n
		
		#ble 	$s1, $s2, less
		#bgt 	$s1, $s2, greatequal
		
		#bge 	$s1, $s2, great
		#blt 	$s1, $s2, lessequal
		
great: 		la $a0, str3
		j end

greatequal: 	la $a0, str4
		j end
		
less: 		la $a0, str1
		j end
		
lessequal: 	la $a0, str2
		j end


end:	li      $v0, 4
	syscall
	