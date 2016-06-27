defmodule Euler3 do
	
	def mayorPrimo(numero), do: _mayorPrimo(numero,2)

	defp _mayorPrimo(numero,primo) when primo > numero do
		primo
	end

	defp _mayorPrimo(numero,primo) when rem(numero, primo) == 0 do
		_mayorPrimo( div(numero,primo), primo)
	end

	defp _mayorPrimo(numero, primo) when rem(numero, primo) != 0 do
		_mayorPrimo(numero, primo + 1)
	end

	def mostrar do
		IO.puts mayorPrimo(600_851_475_143)
	end	

end