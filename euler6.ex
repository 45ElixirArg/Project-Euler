defmodule Euler6 do
  @numeros Enum.to_list(1..100)

  def sumaCuadrados() do
    @numeros
    |>Stream.map(&(&1 * &1))
    |>Enum.sum
  end

  def cuadradoSuma() do
    @numeros
    |>Enum.sum
    |>:math.pow(2)
    |>round
  end

  def resultado do
    cuadradoSuma() - sumaCuadrados
  end
end
