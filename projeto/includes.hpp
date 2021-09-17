#ifdef __linux__ 
    #include <unistd.h>
    #define CLEAR "clear"
#elif _WIN32
    #include <windows.h>
    #define CLEAR "cls"
#else
    #error "OS not supported!"
#endif

#include "menu.hpp"
#include "registraApartamento.hpp"
#include "registraCasa.hpp"
#include "registraTerreno.hpp"
//#include "consultaImovel.h"
//#include "consultaBairro"
//#include "consultaValor.h"
//#include "consultaVenda.h"
//#include "consultaAluguel"
//#include "removeImovel.h"


/* obs: 
aqui não estão todas as opções do menu, pois ainda estamos decidindo quais estarão presentes em nosso programa
caso ocorra mudança, devemos lembrar de mudar os números no switch case para indicar as ações correspondentes
 */