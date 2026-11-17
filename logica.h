#ifndef LOGICA_H
#define LOGICA_H

#include "config.h"
#include "raylib.h"

#define CANT_ZOMBIS 65//provisional
#define CANT_PLANTAS 45 //provisional
#define CANT_SOLES 10 //provisional 
#define CANT_PROYECTILES 50 //provisional


typedef struct {
    int fila;
    float x;
    int vida;
    int dano;
    int tipo;
} Zombi;

typedef struct {
    float x;
    int activo;
    int disponible;
} Cortacesped;


typedef struct{
    int tipo;
    int fila;
    int columna;
    float vida;
    int dano;
    int costoSoles;
    float cooldown;
    float temporizador;
    int activa;
} Planta;

typedef struct {
    float x;
    float y;
    int activo;
    float cooldown;
} Sol;



typedef struct {
    float x;
    float y;
    int fila;
    int dano;
    int activo;
} Proyectil;




extern Zombi zombis[CANT_ZOMBIS];
extern Planta plantas[CANT_PLANTAS];
extern int solesJugador;
extern Sol soles[CANT_SOLES];
extern float temporizadorSol;
extern int plantaSeleccionada;
extern Proyectil proyectiles[CANT_PROYECTILES];
extern int oleadaActual;
extern int zombisRestantes;
extern float temporizadorOleada;
extern Cortacesped cortacespedes[FILAS];
extern int juegoPerdido;
extern float temporizadorEntreOleadas;
extern int zombisFlagPendientes;
extern int palaSeleccionada;
extern int juegoGanado;




//zombie
void inicializarZombis(void);
void moverZombis(float tiempo);
int zombieVivo(int numeroZombie);
void recibirDano(int numeroZombie, int cantidadDano);

//plantas
void inicializarPlantas(void);
int colocarPlanta(int fila, int columna, int tipo);
void quitarPlanta(int fila, int columna);


//sol
void inicializarSoles(void);
void generarSol(void);
void recogerSol(Vector2 mousePos);
void actualizarSoles(float tiempo);
int generarSolEn(float x, float y);
void producirSoles(float tiempo);


//tarjetas
void seleccionarPlanta(int mouseX, int mouseY);

//disparos
void inicializarProyectiles(void);
int generarProyectil(float x, float y, int fila, int dano);
void moverProyectiles(float tiempo);
int hayZombieDelante(int fila, float x);
void detectarImpactos(void);
void actualizarDisparos(float tiempo);

//ataque
int hayPlantaDelante(int fila, float x);
void atacarPlanta(float tiempo);


//oleada
void iniciarOleada(void);
int generarZombi(void);
void actualizarOleadas(float tiempo);


void inicializarCortacespedes(void);
void activarCortacespedes(void);
void actualizarCortacespedes(float tiempo);

void comprobarDerrota(void);




#endif

