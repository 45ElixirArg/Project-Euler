defmodule Euler7 do


  #Funcion para saber si es primo
	def es_primo(x) do
     2..x
     |> Enum.filter(fn a -> rem(x, a) == 0 end)
     |> length() == 1ei
  end

  def resultado do
      valor(14, 6)
  end

  def valor(num, 10001) do
    num - 1
  end

  def valor(num,contador) do
    case es_primo(num) do
      true -> valor(num + 1, contador + 1)
      false -> valor(num + 1, contador)
    end
  end
end
