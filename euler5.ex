defmodule Euler5 do

  @numeros Enum.to_list(2..20)

  def valor do
    Stream.iterate(21,&(&1 + 1))
    |> Stream.filter(&valores(&1, @numeros) == true)
    |> Enum.take(1)
  end

  def valores(_num,[]) do
     true
  end

  def valores(num, [cabeza | cola]) do
    case rem(num, cabeza) do
      0 -> valores(num,cola)
      _ -> false
    end
  end
end
