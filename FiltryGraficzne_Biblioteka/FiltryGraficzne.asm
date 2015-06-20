; Autor: Dawid Myslak
;		 grupa 5, sekcja 1

; Temat: Filtry graficzne
;		 - dolnoprzepustowy
;		 - gornoprzepustowy
;		 - krawedziowy
;		 - konturowy

.486
.model flat, stdcall
.code

FiltryGraficzne proc img: ptr, len: dword, wid: dword, img_dest: ptr, msk: ptr, msk_size: dword

; Deklaracje zmiennych

local sum: word					; zmienna wykorzystana do obliczeia sumy wartosci elementow maski
local r: word					; zmienna wykorzystana do przechowania wartosci skladowej r
local g: word					; zmienna wykorzystana do przechowania wartosci skladowej g
local b: word					; zmienna wykorzystana do przechowania wartosci skladowej b
local center: dword				; zmienna wykorzystana do obliczenia wartosci srodka maski
local i: dword					; zmienna wykorzystana w zagniezdzonych petlach
local j: dword					; zmienna wykorzystana w zagniezdzonych petlach
local im_tmp: dword				; zmienna wykorzystana do zapisu rejestru indeksowego obrazu zrodlowego
local imdst_tmp: dword			; zmienna wykorzystana do zapisu rejestru indeksowego obrazu docelowego
local tmp: dword				; zmienna wykorzystana do obliczen pomocniczych

pushad

; Obliczenie sumy wartosci elementow maski

mov eax, msk_size
mov ebx, msk_size
mul ebx
mov ebx, 2
mul ebx
mov ecx, eax					; ustawienie licznika petli
mov esi, msk					; zapisanie wskaznika pierwszego elementu maski

add ecx, esi					; obliczenie ostatniego elementu tablicy
assume esi:ptr word				; przypisanie rejestrowi indeksowemu rozmiaru zmiennej
xor eax, eax

loop_msk:	add ax, [esi]
			add esi, 2
			cmp ecx, esi
			ja loop_msk
mov sum, ax

.if sum == 0
	mov sum, 1
.endif

; Filtracja obrazu

mov esi, img					; zapisanie wskaznika obrazu zrodlowego
mov edi, img_dest				; zapisanie wskaznika obrazu docelowego
mov ecx, len					; ustawienie licznika petli

add ecx, esi					; obliczenie ostatniego elementu tablicy
assume esi:ptr byte				; przypisanie rejestrowi indeksowemu rozmiaru zmiennej

mov eax, msk_size
mov ebx, 2
div ebx
mov center, eax					; wyznaczenie srodka maski

; Glowna petla przechodzaca po tablicy bajtow skladowych R, G, B

loop_main:	mov r, 0				; zerowanie skladowych
			mov g, 0
			mov b, 0
			
			mov im_tmp, esi			; zapamietanie rejestru indeksowego obrazu zrodlowego
			mov imdst_tmp, edi		; zapamietanie rejestru indeksowego obrazu docelowego			
			
			; Petla przechodzaca po masce
			
			mov i, 0
loop_i:		mov j, 0
loop_j:		mov edi, msk			; zapisanie wskaznika pierwszego elementu maski
			assume edi:ptr word		; przypisanie rejestrowi indeksowemu rozmiaru zmiennej

			; Obliczenie nowego indeksu obrazu zrodlowego

			xor eax, eax			; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov eax, i
			sub eax, center
			mov ebx, 3
			mul ebx
			mov tmp, eax
			mov eax, j
			sub eax, center
			mov ebx, wid
			mul ebx
			mov ebx, 3
			mul ebx
			add eax, tmp
			mov tmp, esi
			add esi, eax
			
			; Realizacja zawijania
			
			.if esi >= ecx
				sub esi, len			
			.elseif esi < img
				add esi, len
			.endif
			
			; Obliczenie nowego indeksu maski
			
			xor eax, eax			; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx			
			
			mov eax, i
			mov ebx, msk_size
			mul ebx
			add eax, j
			mov ebx, 2
			mul ebx
			add edi, eax
			
			; Sumowanie wartosci skladowych R, G, B
			
			xor eax, eax			; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, [edi]
			mov bl, [esi]
			mul bx
			add b, ax

			xor eax, eax			; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, [edi]
			mov bl, [esi + 1]
			mul bx
			add g, ax

			xor eax, eax			; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, [edi]
			mov bl, [esi + 2]
			mul bx
			add r, ax
			
			; Przywrocenie wartosci rejestrow indeksowemu
			
			mov esi, im_tmp			; przepisanie indeksu aktualnego elementu obrazu zrodlowego
			
			; Realizacja zagniezdzonych petli
			
			inc j
			mov edx, j
			cmp edx, msk_size		; porownanie z ostatnim elementem
			jne loop_j
			inc i
			mov edx, i
			cmp edx, msk_size
			jne loop_i				; porownanie z ostatnim elementem
			
			; Podzielenie wartosci R, G oraz B przez sume

			xor eax, eax		; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, b
			mov bx, sum
			div bx
			mov b, ax

			xor eax, eax		; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, g
			mov bx, sum
			div bx
			mov g, ax

			xor eax, eax		; zerowanie rejestrow
			xor ebx, ebx
			xor edx, edx
			
			mov ax, r
			mov bx, sum
			div bx
			mov r, ax
			
			; Przywrocenie wartosci rejestrow indeksowemu
			
			mov edi, imdst_tmp		; przepisanie indeksu aktualnego elementu obazu docelowego
			assume edi:ptr byte		; przypisanie rejestrowi indeksowemu rozmiaru zmiennej
			
			; Ustawienie wartosci dla skladowej B i kontrola zakresu
			
			xor eax, eax
			mov ax, b
			.if ax >= 32768
				mov [edi], 0
			.elseif ax > 255
				mov [edi], 255
			.else 
				mov [edi], al
			.endif			
			
			; Ustawienie wartosci dla skladowej G i kontrola zakresu
			
			xor eax, eax
			mov ax, g
			.if ax >= 32768
				mov [edi + 1], 0
			.elseif ax > 255
				mov [edi + 1], 255
			.else 
				mov [edi + 1], al
			.endif
			
			; Ustawienie wartosci dla skladowej R i kontrola zakresu
			
			xor eax, eax
			mov ax, r
			.if ax >= 32768
				mov [edi + 2], 0
			.elseif ax > 255
				mov [edi + 2], 255
			.else 
				mov [edi + 2], al
			.endif
			
			; Realizacja glownej petli
		
			add esi, 3			; przesuniecie o 3 bajty
			add edi, 3			; przesuniecie o 3 bajty
			cmp ecx, esi		; porownanie z ostatnim elementem
			ja loop_main

popad

ret
FiltryGraficzne endp
end