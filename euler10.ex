defmodule Euler10 do

  def numeros do
    for a <- 2..2000000,
    do: a
  end

  def filtrar([cabeza | cola]) do
      [cabeza | filtrar(cola -- for n <- 1..length(cola),do: cabeza*n)]
  end

  def filtrar([]) do
    []
  end

  def suma do
    numeros
    |>filtrar
    |>Enum.sum
  end  

end
