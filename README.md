# Programação Dinâmica
1. Programacao Dinamica

(a) Para que tipo de problema serve a tecnica de Programacao Dinamica?

Programação dinâmica é um tipo de algoritmo que utiliza de memorização para evitar calcular a mesma coisa duas vezes. 
Para fazer isso, basta que você use uma estrutura de dados auxiliar, como um array ou uma matriz para armazenar respostas
já computadas de subproblemas que compõem o problema principal.

Esse tipo de algoritmo pode ser aplicado em problemas definidos por subproplemas menores, como sequências recursivas, tal qual a de Fibonacci.

Na sequência de Fibonacci (aqui representada pela função fib(n) e começando a contar os termos a partir de 0), temos 2 termos predefinidos: fib(0)=0 e fib(1)=1. Para n>1, temos fib(n)=fib(n-1)+fib(n-2). Podemos fazer uma implementação recursiva relativamente simples da sequência, como podemos ver no código abaixo:

![image](https://user-images.githubusercontent.com/107331651/175106318-3b45c993-caf1-4f54-b620-f9a3464f7e5d.png)

Mas qual o problema dessa implementação?

Sim, ela funciona, mas gera uma árvore de recursão muito grande, tornando o cálculo de um termo muito demorado para um n grande o suficiente devido a múltiplos cálculos do mesmo número de Fibonacci. Para calcular fib(5), por exemplo, temos a seguinte árvore de recursão:

![image](https://user-images.githubusercontent.com/107331651/175106452-103e925a-014a-436b-a7c7-7d1012aea589.png)

Note que fib(5) e fib(4) são calculados apenas uma vez. Até aí tudo bem. Mas, fib(3) é cálculado 2 vezes, fib(2) 3 vezes, fib(1) 4 vezes e fib(0) 3 vezes.

“Recalcular” fib(0) e fib(1) não é um problema, pois já temos esses valores como padrão, não precisamos realizar de fato algum cálculo. Mas, conforme n cresce, tendemos a ter que recalcular valores cada vez mais vezes. 

É aí que entra a programação dinâmica.

Se armazenarmos todos os valores calculados num vetor de memorização, podemos apenas extrair os resultados armazenados nesse vetor ao invés de termos de os recalcular



(b) Implemente um algoritmo para o calculo do n- ́esimo numero de Fibonacci sem utilizar programacao dinamica.

(c) Implemente um algoritmo para o c ́alculo do n- ́esimo n ́umero de Fibonacci utilizacao programacao dinamica.

(d) Implemente um algoritmo para o problema do troco (Change-making problem) utilizando programacao dinamica.

(e) Implemente um algoritmo para o problema de coleta de moedas (Coin-collecting problem) utilizando programacao dinamica.

(f) Implemente um algoritmo para o problema de coleta de moedas (Coin-collecting problem) sem utilizar programacao dinamica.

(g) Implemente o algoritmo baseado em funcao de mem ́oria (memory function) para soluçao do problema da mochila (knapsack problem).

