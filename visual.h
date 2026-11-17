#ifndef VISUAL_H
#define VISUAL_H

void iniciarVentana(void);
void cerrarVentana(void);

void dibujarJardin(void);
void cargarCasa(void);
void dibujarCasa(void);
void liberarCasa(void);
void cargarPala(void);
void liberarPala(void);


void cargarZombieNormal(void);
void liberarZombieNormal(void);
void cargarZombieSinCabeza(void);
void liberarZombieSinCabeza(void);
void cargarZombieFlag(void);
void liberarZombieFlag(void);

void dibujarZombieFlag(int x, int y);
void dibujarZombieSinCabeza(int x, int y);
void dibujarZombie(int x, int y); 


void cargarPlantas(void);
void liberarPlantas(void);

void dibujarPlantas(void);
void dibujarMenu(void);
void dibujarSoles(void);
void dibujarProyectiles(void);
void dibujarOleada(void);

void cargarCortacesped(void);
void liberarCortacesped(void);
void dibujarCortacespedes(void);
void dibujarCarril(void);

#endif