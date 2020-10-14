.386
.model flat,c
EXTRN   X:SDWORD, Y:SDWORD, Z:SDWORD

.data
	Xfl	dd 	0
	Yfl	dd    0

.code
calc PROC
	mov eax,X
	mov Xfl,eax
	mov eax,Y
	mov Yfl,eax
	fld Yfl
	fld Xfl
	fadd
	fstp Z
ret
calc ENDP 
END
