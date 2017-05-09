<h1> ReadME </h1>

<h2> Trabalho 1 de Técnicas de programação </h2>

<h3> 1 Objetivo </h3>
 <p>
 Aprender e trabalhar com a linguagem C++, análises de códigos, gráficos e manipulação do GitHub.
 </p>
 
<h3> 1.1 Descrição </h3>
<h4>Parte 1 Bouncing ball</h4>
<p>
Simular a dinâmica de uma bola que cai e salta sobre a gravidade.
</p>
<h4> Parte 2 Spring-Mass</h4>
<p>
Simulação dinâmica onde teremos um sistema de mola consistindo em duas massas e uma mola dentro de uma caixa.

<h3>2 Requisitos </h3>

 * Compilador g++
 * Editor de texto
 * Ferramenta de plotting
 * Ferramenta de versionamento
 
 <h3> 2.1 Utilizado </h3>
 
 * Terminal linux
 * Compilador g++ Ubuntu 6.2.0-5ubuntu12 20161005( _intalação: ```sudo apt-get install g++```_ )
 * Sublime Text
 * GitHub
 * GNUPlot
 * [Instruções e material do trabalho](http://www.robots.ox.ac.uk/~victor/teaching/labs/b16/)
  
  <h3> 3 Diagrama de classes </h3> 
 
 <h4>Parte 1 </h4>
 
 ![Diagrama](https://github.com/breninferreira/TP1/blob/master/b16-lab/Diagrama.PNG)
 
 <h4>Parte 2 </h4>
 
 ![Diagrama2](https://github.com/breninferreira/TP1/blob/master/b16-lab/Diagrama%20parte%202.PNG)
  
 <h3> 4 Linha de compilação do programa (command line) </h3>
 
 <h4> Parte 1</h4>

<p>Coordenadas</p>

```
$ g++ test-ball.cpp ball.cpp -o bola                                                   
$ ./bola

```
<p> 

Gráfico 

</p>

```
$ sudo apt-get install gnuplot
$ sudo apt-get install gnuplot-x11
$ gnuplot
gnuplot > plot 'arquivo.txt'

```

<h4> Parte 2 </h4><br />

<p>Coordenadas das massas</p>

```
$ g++ test-springmass.cpp springmass.cpp -o springmass                                                   
$ ./springmass

```
<p> 

 <h3> 5 Descrição dos arquivos usados </h3>
 
 <h4>Parte 1</h4>
 
 ***ball.h*** :<p>Contém a inicialização dos atributos e os metódos da classe Ball.</p><br />
 
 ***ball.cpp***:<p>Faz a criação e implementação dos métodos,inclusive da impressão das coordenadas.</p><br />
 
 ***simulation.h***:<p>Inicializa os métodos de maneira virtual.</p><br />
 
 ***test-ball.cpp***:<p>Executa um objeto e imprime as coordenadas do movimento da bola.</p><br />
 
 <h4>Parte 2</h4>
 
 ***springmass.h***: <p> Contém a inicialização das classes, dos atributos e os metódos das classes Vector2, Mass, Spring, SpringMass.</p><br />
 
 ***springmass.cpp***: <p> Implementação dos métodos das classes.</p><br />
 
 ***test-springmass.cpp***: <p> Executa o objeto de acordo com a implementação dos métodos e valores colocados.</p> <br />
 
 <h3>6 Saídas geradas</h3>
  <p>A aplicação do salto da bola é implementada no projeto chamado bola. Esse projeto contém
 quatro fontes : simulation.h, ball.h, ball.cpp e test-ball.cpp.<br />
 Sua saída consiste na posição da bola em diversos momentos do movimento.
 </p>
 <h4>6.1 Task2</h4>
 <p>
Coordenadas:<br />
0.01 -0.00877778 <br />
0.02 -0.0284444<br />
0.03 -0.059<br />
0.04 -0.100444<br />
0.05 -0.152778<br />
0.06 -0.216<br />
0.07 -0.290111<br />
0.08 -0.375111<br />
0.09 -0.471<br />
0.1 -0.577778<br />
0.11 -0.695444<br />
0.12 -0.824<br />
0.13 -0.824<br />
0.14 -0.695444<br />
0.15 -0.577778<br />
0.16 -0.471<br />
0.17 -0.375111<br />
0.18 -0.290111<br />
0.19 -0.216<br />
0.2 -0.152778<br />
0.21 -0.100444<br />
0.22 -0.059<br />
0.23 -0.0284444<br />
0.24 -0.00877778<br />
0.25 -8.1532e-17<br />
0.26 -0.00211111<br />
0.27 -0.0151111<br />
0.28 -0.039<br />
0.29 -0.0737778<br />
0.3 -0.119444<br />
0.31 -0.176<br />
0.32 -0.243444<br />
0.33 -0.321778<br />
0.34 -0.411<br />
0.35 -0.511111<br />
0.36 -0.622111<br />
0.37 -0.744<br />
0.38 -0.876778<br />
0.39 -0.876778<br />
0.4 -0.744<br />
0.41 -0.622111<br />
0.42 -0.511111<br />
0.43 -0.411<br />
0.44 -0.321778<br />
0.45 -0.243444<br />
0.46 -0.176<br />
0.47 -0.119444<br />
0.48 -0.0737778<br />
0.49 -0.039<br />
0.5 -0.0151111<br />
0.51 -0.00211111<br />
0.52 -4.90059e-16<br />
0.53 -0.00877778<br />
0.54 -0.0284444<br />
0.55 -0.059<br />
0.56 -0.100444<br />
0.57 -0.152778<br />
0.58 -0.216<br />
0.59 -0.290111<br />
0.6 -0.375111<br />
0.61 -0.471<br />
0.62 -0.577778<br />
0.63 -0.695444<br />
0.64 -0.824<br />
0.65 -0.824<br />
0.66 -0.695444<br />
0.67 -0.577778<br />
0.68 -0.471<br />
0.69 -0.375111<br />
0.7 -0.290111<br />
0.71 -0.216<br />
0.72 -0.152778<br />
0.73 -0.100444<br />
0.74 -0.059<br />
0.75 -0.0284444<br />
0.76 -0.00877778<br />
0.77 -7.47666e-16<br />
0.78 -0.00211111<br />
0.79 -0.0151111<br />
0.8 -0.039<br />
0.81 -0.0737778<br />
0.82 -0.119444<br />
0.83 -0.176<br />
0.84 -0.243444<br />
0.85 -0.321778<br />
0.86 -0.411<br />
0.87 -0.511111<br />
0.88 -0.622111<br />
0.89 -0.744<br />
0.89 -0.876778<br />
0.88 -0.876778<br />
0.87 -0.744<br />
0.86 -0.622111<br />
0.85 -0.511111<br />
0.84 -0.411<br />
0.83 -0.321778<br />
0.82 -0.243444<br />
0.81 -0.176<br />
0.8 -0.119444<br />
0.79 -0.0737778<br />
</p>

<h4> 6.2 Task 4 </h4>
<p> Gráfico</p>

![Gráfico](https://github.com/breninferreira/TP1/blob/master/b16-lab/grafico.png)

<h4>6.3 Gráfico parte 2 </h4>

![Gráfico2](https://github.com/breninferreira/TP1/blob/master/b16-lab/sa%C3%ADda2)

 
