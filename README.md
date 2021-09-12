# Imobiliaria
Projeto da cadeira Linguagem de Programação I 

ESPECIFICAÇÕES	DO	PROJETO	

Você	 foi	 contratado	 para	 implementar	 um	 sistema	 que	 gerencia	 os	 imóveis	 de	 uma	imobiliária.	Todos	os	imóveis	devem	conter	algumas	informações	
relacionadas ao	endereço	do	imóvel	 (incluindo	 o	 logradouro	 (nome	 da	 rua),	 número,	 bairro,	 CEP	 e	 cidade),	 o	 valor	 desse imóvel	e	 se	ele	
está	disponível	para	aluguel	ou	venda.	O	 sistema	 também	deve	permitir	que	sejam	cadastrados	e	consultados	os	seguintes	tipos	de	imóveis:

• Casa:	 Contém	 informações	 sobre	 uma	 casa	 incluindo	 título	 anúncio,	 o	 número	 de	
pavimentos,	número	de	quartos,	área	do	terreno	e	área	construída;

• Apartamento:	Contém	informações	sobre	um	apartamento	incluindo	título	anúncio,	a	
sua	área,	número	de	quartos,	posição	(ex:	nascente	sul,	nascente	norte), andar,	 valor	
do	condomínio	e	número	de	vagas	de	garagem.

• Terreno:	Contém	informações	sobre	um	terreno,	incluindo	título	anúncio	e	a	sua	área.

Além	disso,	o	sistema	deve	conter	as	seguintes	funções:

• Uma	função	que	cadastra	imóveis (casas,	apartamentos,	terrenos);	
• Uma	função	que	consulta	todos	os	imóveis	disponíveis;
• Uma	função	que	busca	um	imóvel	por	título;
• Uma	função	que	busca	um	imóvel	por	bairro;
• Uma	função	que	busca	os	imóveis	acima	de	um	determinado	valor.
• Uma	 função	 que	 retorna	 todos	 os	 imóveis	 disponíveis	 para	 vender	 por	 tipo	 (casa,	
apartamento, terreno);
• Uma	 função	 que	 retorna	 todos	 os	 imóveis	 disponíveis	 para	 alugar	 por	 tipo	 (casa,	
apartamento,	terreno);
• Uma	função	para	remover	um	determinado	imóvel.
• Uma	função	para	editar	um	determinado	imóvel.
• Uma	função	para	salvar	a	lista	em	um	arquivo.
• Uma	função	para	ler	a	lista	em	um	arquivo.
• Utilize	vetores.	Toda	a	exibição	e	busca	deve	ser	realizada	na	lista,	não	no	arquivo.
• O	 programa	 deve	 possuir	 um	menu	 de	 opções,	 e	 deve	 retornar	 ao	menu	 após	 cada	
opção	ser	selecionada.
• Os	imóveis devem	ser	implementos	com	registros	(struct).	A	Lista	de	imóveis	deve	ser	
implementada	na	forma	de	um	vetor do	registro.
• Todas	 as	 operações	 de	 cadastro,	 exibição,	 busca,	 remoção, edição devem	 ser	
realizadas	na	vetor,	e	não	no	arquivo.
• Grupos	individuais,	dupla	ou	trio.
