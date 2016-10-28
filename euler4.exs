defmodule Euler4 do
	
	#Modulos para dar vuelta el numero
	def darVuelta(num,acu) when num<10 do
		 acu*10 + num
	end 

	def darVuelta(num,acu) do
		darVuelta(div(num,10),acu*10+rem(num,10))
	end

	#Modulo para verificar el numero
	def verifica(num,acu) do
		 if (num) == darVuelta(num,0) and (num)>acu do
		 	0
		end
	end

	#Modulo para recorrer de 100 a 999
	def pali2(i,999,acu)do
		acu = if verifica(i*999,acu) == 0,do: i*999, else: acu
		pali(i+1,acu)
	end

	def pali2(i,j,acu)do
		acu = if verifica(i*j,acu)==0, do: i*j , else: acu
		pali2(i,j+1,acu)
	end

	def pali(999,acu) do
		acu
	end

	def pali(i,acu) do
		pali2(i,i+1,acu)
	end

	#Modulo principal
	def palindromo() do
		pali(1,0)
	end

end