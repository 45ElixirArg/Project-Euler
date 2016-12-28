defmodule Euler8 do

  def armarCadena do
    File.stream!("euler8.txt")
    |>Stream.map(&String.replace(&1,"\n",""))
    |>Enum.reduce("", fn(x, acc) -> acc <> x end)
    |>String.codepoints
    |>resultado(0)
  end

  #calcula cual es el mayor
  def resultado([],may) do
    may
  end

  def resultado(lista, may) do
    [_ | cola] = lista
    num1 = multiplica(lista,0,1)
    resultado(cola,mayor(num1, may))
  end

  #Calcula la multiplicacion de 13 numeros adyacentes
  def multiplica([], _contador, acu) do
    acu
  end

  def multiplica(_ , 13 , acu) do
    acu
  end
  def multiplica([ cabeza | cola ], contador, acu) do
    multiplica(cola, contador+1, acu * String.to_integer(cabeza))
  end

  def mayor(num1,num2) do
    if num1 > num2 do
      num1
    else
      num2
    end
  end

  #Para ejecutar -> Euler8.armaCadena
  #Para saber el tiempo de ejecucion :timer.tc(Euler8,:armaCadena,[])

end
