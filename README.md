# Definição do Trabalho da M1 - Ciência da Computação
->Trabalho do primeiro semestre, refeito agora de forma individual :)

Visão Geral:
O código EAN13, popularmente conhecido como código de barras, é uma sequência de barras que pode ser
lida e convertida em um código numérico de 13 dígitos. Esse é o código do GS1 mais conhecido, estima-se
que mais de 100 milhões de produtos possuem códigos de barras GS1 e eles são lidos mais de seis bilhões
de vezes todos os dias.

Os dígitos verificadores são dígitos presentes em uma série de protocolos e são utilizados para garantir que
o valor foi lido ou escrito sem erros.

Descrição:
Faça um algoritmo que solicite ao usuário UM valor inteiro de 13 dígitos, que irá representar o número de
um código de barras. A seguir, calcule digito verificador, conforme instruções abaixo, e informe se o
CÓDIGO DE BARRAS foi digitado corretamente.

Observação: inteiros de 13 dígitos são números extremamente grandes e necessitam de 2 ampliadores de
faixa (long) para serem corretamente armazenados.
Exemplo de cálculo do dígito verificador de um código de barras EAN13:
Para exemplificar o processo será utilizado o código de barras da imagem acima, mas você pode verificar com
qualquer código de barras de 13 dígitos que tiver a mão.

Exemplo de código: 9782940199617

Calculando o Dígito Verificador
Para descobrir o dígito verificador deve-se separar os 12 primeiros dígitos lidos da esquerda para direita.
9782940199617
D12 D11 D10 D9 D8 D7 D6 D5 D4 D3 D2 D1 D0
9 7 8 2 9 4 0 1 9 9 6 1 7
Universidade do Vale do Itajaí

1) Distribua os 12 primeiros dígitos em um quadro (multiplicando os dígitos das posições ímpares por 3) abaixo da esquerda para a direita, conforme representação abaixo:
D12 D11 D10 D9 D8 D7 D6 D5 D4 D3 D2 D1
9 7 8 2 9 4 0 1 9 9 6 1
1 3 1 3 1 3 1 3 1 3 1 3

2) Multiplique os valores de cada coluna:
D12 D11 D10 D9 D8 D7 D6 D5 D4 D3 D2 D1
9 7 8 2 9 4 0 1 9 9 6 1
1 3 1 3 1 3 1 3 1 3 1 3
9 21 8 6 9 12 0 3 9 27 6 3

3) Calcule o somatório dos resultados (9+21+8+6+9+12+0+3+9+27+6+3) = 113.

4) O resultado obtido (113) será divido por 10. Considere como quociente apenas o valor inteiro.
Observação: 113 dividido por 10 obtêm-se 11 como quociente.

5) Soma-se 1 ao resultado obtido (11).
Observação: 11 + 1 obtêm-se 12 como resultado.

6) Multiplica-se o resultado obtido (12) por 10.
Observação: 12 * 10 obtêm-se 120 como resultado.

7) Para obter o dígito verificador, subtraia o resultado do passo 6 (120) do resultado do passo 3 (113).
Observação: 120 - 113 obtêm-se 7 como dígito verificador.

8) Caso o resultado do dígito verificador tenha dado um resultado que for múltiplo de 10, basta
substituí-lo por zero.
Observação: como nosso dígito verificador (7) não era um múltiplo de 10, ele permanece como está.
Neste caso chega-se ao final dos cálculos e descobre-se que o dígito verificador do EAN13 é 7, portanto pode-se
afirmar que o código de barras foi digitado corretamente, pois o digito verificador encontrado é igual ao digitado pelo
usuário:
(7) == 9782940199617.

9) Por fim, informe ao usuário que o código de barras está correto se ele digitou tudo corretamente e
incorreto se ele cometeu algum erro de digitação.
