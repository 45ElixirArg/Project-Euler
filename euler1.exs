defmodule Euler1 do

	@doc """
	Problema 1 del Proyecto Euler

	Sumar todos los numeros que sean multiplos de 3 o 5.
	La lista de numeros es menor a 1000 
	"""

	#@spec suma(numero,acumulador) :: number

	def suma(numero, acc) when numero>0 do

		acc = if rem(numero,5) == 0 or rem(numero,3)==0, do: acc+numero,else: acc
		
		suma(numero-1,acc)

	end

	def suma(0,acc) do
		acc
	end	

end