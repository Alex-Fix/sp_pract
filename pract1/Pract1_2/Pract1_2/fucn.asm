; ��������������� �������� � ����� �586 � ����
.586

.model flat 

;flat - ����� �� ��, �� �� �������� �������� ������� � ������ �������

; ����������, �� ����������� ����� ��� ���� � ������������:
; 1. ��������� �������� ����������� ����� ����;
; 2. ���������� ������� ����� ���� �� ���������;
; 3. ��������� �������������� � ���� ����� �������� ������� ������ �� ���;
; 4. ����� �������������� ����� ������� "�����������" (_);
; 5. ����� �������������� � ���������������� (� ������ �� �������� � ������ �������);
; 6. ������� ���������� �������� � ����������� eax:edx.

EXTRN _nNumber1:dword
EXTRN _divide:PROC  
PUBLIC _weightedsum

.data
	Weight dd 5
	
.code
	; ��������� _weightedsum �� 2 ��������� � ����������� ���������� ���� �
	_weightedsum PROC ; ������ ���������
	
	; � ����� �� ����� ������ � 32-�� �������� ������ ������ ��������� � ���������
	; ��������� � ���� 32-�� �������� �������� ebp	
		push ebp
		mov ebp,esp
	
; ����������� ������ �������� ���� �� ������� esp ������� +8 ����
		mov eax,[ebp+8]
	
; ����������� ������ �������� ���� �� ������� esp ������� +12 ����
		mov edx,[ebp+12]
		add  eax,edx
		add  eax,_nNumber1
		mul  Weight
	; ��������� ��������� �������� � eax
	
		mov  edx,eax
	
; ����������� ����� �������� ���� �� ������� esp ������� +16 ����
		mov	 al,[ebp+16]
		cbw
		cwde
	
; ������� ��������� ������� � ���� ������ �� ��� (arg2 ���� arg1)
		push eax
		push edx
	
; ��������� � ������� divide
		call _divide
	
; �������� ��������� divide � ����� ���������� �� esp ����� 8 (2 ����� �� 4 �����)
		add esp,8 
		
		pop ebp
		ret
		
	_weightedsum endp
end
