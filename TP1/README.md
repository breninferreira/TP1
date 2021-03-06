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
<h4> Parte 3 Graphics</h4>
<p>
Gerar gráficos com movimentos se baseando nas configuração dos objetos.

<h3>2 Requisitos </h3>

 * Compilador g++
 * Editor de texto
 * Ferramenta de plotting
 * Ferramenta de versionamento
 * OpenGL/Glut
 
 <h3> 2.1 Utilizado </h3>
 
 * Terminal linux
 * Compilador g++ Ubuntu 6.2.0-5ubuntu12 20161005( _intalação: ```sudo apt-get install g++```_ )
 * Sublime Text
 * GitHub
 * GNUPlot
 * [Instruções e material do trabalho](http://www.robots.ox.ac.uk/~victor/teaching/labs/b16/)
 * OpenGL/Glut
  
  <h3> 3 Diagrama de classes </h3> 
 
 <h4>Parte 1 </h4>
 
 ![Diagrama](https://github.com/breninferreira/TP1/blob/master/b16-lab/Diagrama.PNG)
 
 <h4>Parte 2 </h4>
 
 ![Diagrama2](https://github.com/breninferreira/TP1/blob/master/b16-lab/Diagrama%20parte%202.PNG)
 
 ![](https://github.com/breninferreira/TP1/blob/master/b16-lab/diagr.PNG)
 
 ![Diagrama3](https://github.com/breninferreira/TP1/blob/master/b16-lab/Diagrama%20de%20sequencia.png)
  
 <h3> 4 Linha de compilação do programa (command line) </h3>
 
 <h4> Parte 1</h4>

<p>Coordenadas


```
$ g++ test-ball.cpp ball.cpp -o bola                                                   
$ ./bola

```

Gráfico 



```
$ sudo apt-get install gnuplot
$ sudo apt-get install gnuplot-x11
$ gnuplot
gnuplot > plot 'arquivo.txt'

```

</p>

<h4> Parte 2 </h4><br />

<p>Coordenadas das massas


```
$ g++ test-springmass.cpp springmass.cpp -o springmass                                                   
$ ./springmass

```
 

<h4> Parte 3 </h4><br />


```
$ g++ springmass.cpp graphics.cpp test-springmass-graphic.cpp -lGL - lGLU -lglu -o graphic                                              
$ ./graphic

```
</p> 

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
 
 <h4>Parte 3</h4>
 
 ***graphics.h*** <p>Definição de métodos das classe e parametros das classes que utilizam o OpenGL/Glut.</p><br />
 
 ***graphics.cpp***<p>Implementação do graphics.h</p><br />
 
 ***test-springmass-graphics.cpp***<p> Implementa a classe SpringMassDrawable, que herda métodos da SpringMass , aplicando as configurações da figura e objetos necessário para gerar o a figura e seu movimento.</p><br />

 
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

<h4>6.3 Saída parte 2</h4>
<p>
-0.5 0.518 0.5 0.018<br />
-0.5 0.5 0.5 0<br />
-0.5 0.446 0.5 -0.054<br />
-0.5 0.356 0.5 -0.144<br />
-0.5 0.23 0.5 -0.27<br />
-0.5 0.068 0.5 -0.432<br />
-0.5 -0.13 0.5 -0.63<br />
-0.5 -0.364 0.5 -0.864<br />
-0.5 -0.634 0.5 -0.864<br />
-0.499966 -0.940008 0.499966 -0.557992<br />
-0.500116 -0.940008 0.500116 -0.287976<br />
-0.499966 -0.561988 0.499966 -0.0540897<br />
-0.499944 -0.220057 0.499944 0.143885<br />
-0.500005 0.0858299 0.500005 0.305904<br />
-0.50011 0.355699 0.50011 0.431941<br />
-0.500236 0.589564 0.500236 0.521983<br />
-0.500369 0.787429 0.500369 0.576024<br />
-0.500504 0.949294 0.500504 0.594065<br />
-0.500635 0.949294 0.500635 0.576104<br />
-0.50071 0.859431 0.50071 0.522163<br />
-0.500795 0.733572 0.500795 0.432218<br />
-0.500888 0.571716 0.500888 0.30627<br />
-0.500988 0.373862 0.500988 0.14432<br />
-0.501094 0.14001 0.501094 -0.0536316<br />
-0.501204 -0.129841 0.501204 -0.287584<br />
-0.501317 -0.435692 0.501317 -0.557538<br />
-0.501433 -0.777542 0.501433 -0.863491<br />
-0.501551 -0.777542 0.501551 -0.863491<br />
-0.501672 -0.363692 0.501672 -0.485537<br />
-0.501791 0.0141579 0.501791 -0.143583<br />
-0.501909 0.356008 0.501909 0.162371<br />
-0.502024 0.661857 0.502024 0.432325<br />
-0.502137 0.931706 0.502137 0.66628<br />
-0.502246 0.931706 0.502246 0.864236<br />
-0.502343 0.733858 0.502343 0.864236<br />
-0.502456 0.500011 0.502456 0.738279<br />
-0.502567 0.230163 0.502567 0.576322<br />
-0.50267 -0.0756841 0.50267 0.378364<br />
-0.502757 -0.417528 0.502757 0.144403<br />
-0.502812 -0.795361 0.502812 -0.125569<br />
-0.502817 -0.795361 0.502817 -0.431564<br />
-0.502593 -0.345543 0.502593 -0.773681<br />
-0.502807 0.0682227 0.502807 -0.773681<br />
-0.502592 0.445797 0.502592 -0.359655<br />
-0.502423 0.78741 0.502423 0.018332<br />
-0.502296 0.78741 0.502296 0.360285<br />
-0.502126 0.517707 0.502126 0.666237<br />
-0.502269 0.212126 0.502269 0.936066<br />
-0.502619 -0.129636 0.502619 0.936066<br />
-0.502335 -0.506993 0.502335 0.738407<br />
-0.501781 -0.920096 0.501781 0.504494<br />
-0.500881 -0.920096 0.500881 0.234193<br />
-0.498566 -0.434818 0.498566 -0.073915<br />
-0.498432 0.0118723 0.498432 -0.415436<br />
-0.498705 0.422517 0.498705 -0.792911<br />
-0.499395 0.797974 0.499395 -0.792911<br />
-0.497521 0.797974 0.497521 -0.343346<br />
-0.495461 0.496681 0.495461 0.0702192<br />
-0.49529 0.161636 0.49529 0.445537<br />
-0.495503 -0.209282 0.495503 0.784727<br />
-0.4961 -0.616694 0.4961 0.784727<br />
-0.495296 -0.616694 0.495296 0.517876<br />
-0.493145 -0.138072 0.493145 0.213315<br />
-0.493074 0.302103 0.493074 -0.1248<br />
-0.493361 0.706245 0.493361 -0.498882<br />
-0.494065 0.706245 0.494065 -0.909753<br />
-0.492608 0.374508 0.492608 -0.909753<br />
-0.489771 0.00482106 0.489771 -0.428516<br />
-0.489558 -0.397338 0.489558 0.0131926<br />
-0.489836 -0.835377 0.489836 0.418781<br />
-0.490651 -0.835377 0.490651 0.789348<br />
-0.48859 -0.32506 0.48859 0.789348<br />
-0.48661 0.148773 0.48661 0.493367<br />
-0.486596 0.584311 0.486596 0.163682<br />
-0.486883 0.584311 0.486883 -0.201978<br />
-0.486882 0.220858 0.486882 -0.60352<br />
-0.486845 -0.178623 0.486845 -0.60352<br />
-0.486622 -0.61421 0.486622 -0.129969<br />
-0.48694 -0.61421 0.48694 0.307501<br />
-0.486691 -0.106721 0.486691 0.708658<br />
-0.486594 0.364618 0.486594 0.708658<br />
-0.486598 0.79984 0.486598 0.379281<br />
-0.486903 0.79984 0.486903 0.0139294<br />
-0.486918 0.436703 0.486918 -0.387305<br />
-0.486899 0.0375374 0.486899 -0.824511<br />
-0.48684 -0.39766 0.48684 -0.824511<br />
-0.486579 -0.868976 0.486579 -0.315297<br />
-0.486965 -0.868976 0.486965 0.157874<br />
-0.486553 -0.325752 0.486553 0.594551<br />
-0.48632 0.181275 0.48632 0.594551<br />
-0.486188 0.652152 0.486188 0.229567<br />
-0.486488 0.652152 0.486488 -0.17133<br />
-0.486473 0.253429 0.486473 -0.608097<br />
-0.486418 -0.181326 0.486418 -0.608097<br />
-0.486162 -0.652199 0.486162 -0.0993219<br />
-0.486549 -0.652199 0.486549 0.37341<br />
-0.486143 -0.109417 0.486143 0.809651<br />
-0.485916 0.397169 0.485916 0.809651<br />
-0.485789 0.867605 0.485789 0.445104<br />
-0.486091 0.867605 0.486091 0.0446428<br />

<h4>6.4 Gráfico parte 2 </h4>

![Gráfico2](https://github.com/breninferreira/TP1/blob/master/b16-lab/sa%C3%ADda2)

<h4>6.5 Saída parte 3</h4>

![](https://github.com/breninferreira/TP1/blob/master/b16-lab/parte3.PNG)


![grafico3](https://github.com/breninferreira/TP1/blob/master/b16-lab/parte3-1.PNG)


 
