defmodule Euler9 do

  def resultado do
    for a <- 1..498,
        b <- a+1..499,
        c <- b+1..500,
        a + b + c == 1000,
        a*a + b*b == c*c,
        do: {a, b, c, a*b*c}
  end

#Para ejecutar -> Euler9.resultado
#Para el tiempo de ejecucion -> :timer.tc(Euler9,:resultado,[])

end
