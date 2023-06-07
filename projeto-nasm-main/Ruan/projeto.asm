%include "asm_io.inc"

section .data
    msg     db 'THE ENIGMES', 0

    msg1    db 'Seja bem vindo a SEGUNDA EDICÃO do THE ENIGMES', 0
    msg2    db 'Seu objetivo é desvendar cada nível, até que chegue ao Final...', 0
    msg3    db 'Use qualquer recurso desejado ao seu favor, o Google é seu amigo', 0
    msg4	db '...Mantenha as coisas no seu devido lugar', 0  
	msg5	db 'Para sair do jogo e salvar sua pontuação digite "0"', 0
	msg6	db 'Porém seu progresso será zerado', 0
	msg7 	db 'nada de acentuação nas chaves do jogo e nada de caixa alta, não é permitido', 0
	msg8	db 'BOA SORTE!!', 0
	msg9 	db 'e que comece os Jogos...', 0
	divisao	db '-------------------------------------------------------------------', 0
	lvl1	db 'Nível 1', 0
	lvl1_1	db 'É considerado o pulmão da terra', 0
	lvl2	db 'Nível 2', 0
	lvl2_2	db 'Quando uma pessoa cria laços com outra, sejam de amizade ou amor,HEXA ligação se torna uma responsabilidade. Você tem de cuidar e alimentar a relação, para que o sentimento não acabe.', 0
	lvl2_3	db '66 6c 6f 72', 0
	lvl3	db 'Nível 3', 0
	lvl3_1	db 'Duas rainha, uma negra e a outra branca, fazem aniversário juntas e decidem dá uma festa em um salão onde seu piso é xadrez, sendo assim uma festa com temática disco anos 80. Ficou certo que cada uma levariam 14 convidados. No dia da festa, nem todos os convidados compareceram, porém os convidados da rainha branca, justificaram sua ausência. Já um convidado muito importante da rainha Negra não justificou sua ausência', 0
	FimdeVida	db 'Acabaram suas vidas! Ate a proxima!', 0
	alternativa1 	db '(1) Amazonia (2) Zooplancton (3) Fitoplancton', 0
	alternativa2	db '(1) Amigo (2) Flor (3) Batata', 0
	alternativa3	db '(1) rei', 0
	
section .bss
    resposta    resd 1
    count	    resd 1


section .text
    global _asm_main
_asm_main:
    enter	0,0		        
    pusha

    mov     ebx, 60 ; Sempre vai ser 60

    call    print_nl

    ; Apresentação
        mov     eax, msg
        call    print_string
        call    print_nl
		call    print_nl
		mov     eax, msg1
        call    print_string
        call    print_nl
		mov     eax, msg2
        call    print_string
        call    print_nl
		mov     eax, msg3
        call    print_string
        call    print_nl
		mov     eax, msg4
        call    print_string
        call    print_nl
		mov     eax, msg5
        call    print_string
        call    print_nl
		mov     eax, msg6
        call    print_string
        call    print_nl
		mov     eax, msg7
        call    print_string
        call    print_nl
		mov     eax, msg8
        call    print_string
        call    print_nl
		mov     eax, msg9
        call    print_string
        call    print_nl
		call    print_nl

.lvl1:		
		; Level 1 reposta Fitoplancton
		
		mov     eax, divisao
        call    print_string
        call    print_nl
		
		mov     eax, lvl1
        call    print_string
        call    print_nl
		mov     eax, lvl1_1
        call    print_string
        call    print_nl
		
		; alternativas
		call    print_nl
		mov     eax, alternativa1
        call    print_string
        call    print_nl
		
		; Verificação
		call	read_int
		cmp		eax, 0
		je		.popa
		cmp		eax, 3
		je		.lvl2
		jmp		.lvl1
		

.lvl2:
		
        ; Level 2 reposta flor
		
		mov     eax, divisao
        call    print_string
        call    print_nl
		
		mov     eax, lvl2
        call    print_string
        call    print_nl
		mov     eax, lvl2_2
        call    print_string
        call    print_nl
		mov     eax, lvl2_3
        call    print_string
        call    print_nl
		
		; alternativas
		call    print_nl
		mov     eax, alternativa2
        call    print_string
        call    print_nl
		
		; Verificação
		call	read_int
		cmp		eax, 0
		je		.popa
		cmp		eax, 2
		je		.lvl3
		jmp		.lvl2

.lvl3:
		
        
.popa:
    call    print_nl
; Não modifique o código após este comentário
    popa
    mov	eax, 0		        ; return back to C
    leave
    ret