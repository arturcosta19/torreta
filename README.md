# readme
Documentação

Autores

	Artur Assunção Costa
	
	Daniel Curcio Lott Guimarães
	
	Lucas Kelly Martins Lacerda

Objetivo

	O equipamento a ser construído é capaz de detectar alvos em uma área varrida por 180°, de raio 30cm. Ao detectar qualquer objeto nessa área, o dispositivo dispara balas na direção do alvo, até que este saia de seu raio de alcance.

Resumo

O DBB é um equipamento constituído por dois diferentes subsistemas: Detecção de alvos e arremesso de projéteis. 

O subsistema de detecção de alvos funciona com um sensor ultrassônico acoplado a um servo que rotaciona uma base em 180°. O sensor avalia então se há algum objeto em um raio de 30cm. Caso algum objeto seja detectado por esse sistema, então o sistema de arremesso dos projéteis é acionado. 

O subsistema de arremesso de projéteis consiste em um servo que movimenta uma bala em direção à dois motores CC que são acionados em sentidos opostos. Quando a bala passa pelos motores, ela é arremessada por uma rampa em direção ao objeto detectado pelo subsistema de detecção. Os motores CC são acionados através de um transistor NPN.

Para maiores detalhes, ler o Dispenser de Balas Balistico - DBB©. Código-fonte disponível também no mesmo repositório.
