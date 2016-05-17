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

	#otra forma de resolver el problema 1 de project euler
	def otraForma(numero), do: do_sum(numero-1,0)
	defp do_sum(0,acc), do: acc
	defp do_sum(numero,acc) when rem(numero,3) == 0 or rem(numero,5) == 0, do: do_sum(numero-1,numero+acc)
	defp do_sum(numero,acc), do: do_sum(numero-1,acc)

end