defmodule Euler2 do
	
	def sumaPares() do
		suma_Pares(1,2,0)
	end

	defp suma_Pares(_a,b,acc) when b > 4000000 do 
		acc
	end

	defp suma_Pares(a,b,acc) do 
		acc = if rem(b,2) == 0, do: acc+b ,else: acc 
		suma_Pares(b,b+a,acc)
	end

end