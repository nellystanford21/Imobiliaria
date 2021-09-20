# Imobiliaria
Projeto da cadeira Linguagem de Programação I 

ESPECIFICAÇÕES	DO	PROJETO	

Você	 foi	 contratado	 para	 implementar	 um	 sistema	 que	 gerencia	 os	 imóveis	 de	 uma	imobiliária.	Todos	os	imóveis	devem	conter	algumas	informações	
relacionadas ao	endereço	do	imóvel	 (incluindo	 o	 logradouro	 (nome	 da	 rua),	 número,	 bairro,	 CEP	 e	 cidade).	O	 sistema	 também	deve	permitir	que
sejam	cadastrados	e	consultados	os	seguintes	tipos	de	imóveis:

• Casa:	 Contém	 informações	 sobre	 uma	 casa	 incluindo	 título	 anúncio, número de quartos e	área	da casa;

• Apartamento:	Contém	informações	sobre	um	apartamento	incluindo	título	anúncio,	a	sua	área,	número	de	quartos, andar,	 valor	 do	condomínio	e	número	de	
vagas	de	garagem;

• Terreno:	Contém	informações	sobre	um	terreno,	incluindo	título	anúncio	e	a	sua	área;

Além	disso,	o	sistema	deve	conter	as	seguintes	funções:

• Uma	função	que	cadastra	imóveis (casas,	apartamentos,	terrenos);	
• Uma	função	que	consulta	todos	os	imóveis	disponíveis;
• Uma	função	para	remover	um	determinado	imóvel.

Requisitos:

• Utilize	vetores.	Toda	a	exibição	e	busca	deve	ser	realizada	na	lista,	não	no	arquivo.
• O	 programa	 deve	 possuir	 um	menu	 de	 opções,	 e	 deve	 retornar	 ao	menu	 após	 cada	opção	ser	selecionada.
• Os	imóveis devem	ser	implementos	com	registros	(struct).	A	Lista	de	imóveis	deve	ser	implementada	na	forma	de	um	vetor do	registro.
• Todas	 as	 operações	 de	 cadastro,	 exibição,	 busca,	 remoção, edição devem	 ser	realizadas	na	vetor,	e	não	no	arquivo.
