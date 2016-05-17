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

	"""
	Otra forma de resolver el problema 2 de euler
	"""	
	def fib_even_sum(limit) do
	  fibonacci_sequence
		  |> Stream.take_while(&(&1 < limit))
		  |> Stream.filter(&(rem(&1, 2) ==0))
		  |> Enum.sum
	end

	"""
	Otra forma de resolver el problema 2 de euler
	"""

	def fibonacci_even_sum do
    fibonacci_sequence
    |> Stream.take_while(&(&1 < 4_000_000))
    |> Enum.reduce(0, &sum_even/2)
	  end

	def fibonacci_sequence do
	    Stream.unfold({1,1}, fn {a,b} -> {a, {b, a + b}} end)
	end

	def sum_even(num, acc) do
	    if rem(num, 2) == 0, do: acc + num, else: acc
	end

end