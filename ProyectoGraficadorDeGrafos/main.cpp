#include <conio.h>
#include "ConjuntoVertices.h"
#include <iostream>
#include "Grafo.h"
#include <fstream>
#include "GrafoDisplay.h"

using namespace std;
using namespace ProyectoGraficadorDeGrafos;


int main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew GrafoDisplay);

	
	_getch();
	return 0;
}