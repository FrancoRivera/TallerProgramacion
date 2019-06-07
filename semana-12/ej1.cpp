
// Ejercio 1 - semana 12

#include <iostream>
#include <vector>

using namespace std;


// guarda los valores de enum
// enum class Sexo{ M=0, F=1};

struct t_empleado {
   char sexo;    // sexo del empleado: "M" o "F"
   float sueldo; // sueldo del empleado: 10032.20 13.30 131.99
};


// Funciones a crear;
//
// 1. Generar datos empleados
void Generar_Datos(int numero, vector<t_empleado> &empleados);
// 2. Mostrar datos empleados
void Mostrar_Datos(t_empleado empleados[]);
// 3. Promedio sueldo  empleados mujeres;
void Promedio_Sueldo_Mujeres();
// 4. Mayor sueldazo de los empleados
void Mayor_Sueldo();
// 5. Ordenar Por Sueldo  empleados
void Ordenar_por_sueldo();


// 1. Generar datos empleados
void Generar_Datos(int numero, vector<t_empleado> &empleados){
  t_empleado nuevo_empleado;

  //defino los sexos posibles
  char sexos[2] = {'M', 'F'};

  for (int i = 0; i < numero; i++) {
      // random
      nuevo_empleado.sexo = sexos[rand() % 2]; // 0 o 1
      nuevo_empleado.sueldo = rand() % 10000; // menor a 10_000

      empleados.push_back(nuevo_empleado);
  }
}



void Mostrar_Datos_Unico(t_empleado &empleado){
  cout << "Sexo: " << empleado.sexo << endl;
  cout << "Sueldo: " << empleado.sueldo << endl;

  empleado.sexo = 'F';
}

// 2. Mostrar datos empleados
void Mostrar_Datos(vector<t_empleado> empleados){

  for (int i = 0; i < empleados.size(); i++) {
    Mostrar_Datos_Unico(empleados[i]);
  }
}


// 3. Promedio sueldo  empleados mujeres;
void Promedio_Sueldo_Mujeres(vector<t_empleado> &empleados){

  float suma = 0;
  float contador = 0;

  for (int i = 0; i < empleados.size(); i++) {
    if (empleados[i].sexo == 'F') { // osea si es mujer
      contador++;
      suma += empleados[i].sueldo;
    }
  }
  cout << "El promedio del sueldo de las mujeres: " << suma/contador << endl;


};
// 4. Mayor sueldazo de los empleados
void Mayor_Sueldo(vector<t_empleado> empleados){
  float mayor = 0;
  t_empleado sueldazo;

  for (int i = 0; i < empleados.size(); i++) {
    if (empleados[i].sueldo > mayor ) { // osea si es mujer
      mayor =empleados[i].sueldo;
      sueldazo = empleados[i];
    }
  }
  cout << "El que tiene mas sueldo es: " << endl;
  Mostrar_Datos_Unico(sueldazo);

}

bool oper(t_empleado a, t_empleado b){
  return a.sueldo < b.sueldo;
}
// 5. Ordenar Por Sueldo empleados
void Ordenar_por_sueldo(vector<t_empleado> empleados){
  //ordenar por sueldo
  //
  //logica para ordenar
  sort(empleados.begin(), empleados.end(), oper);

  cout << "Empleados ordenados: " << endl;
  Mostrar_Datos(empleados);

};




int _main(){


  // ejemplo de empleado
  t_empleado franco;

  franco.sexo = 'M';
  franco.sueldo = 120; //franco trabaja gratis


  // donde vamos a almacenar todos los empleados
  vector<t_empleado> empleados;

  Generar_Datos(10, empleados);
  Mostrar_Datos(empleados);

  Mostrar_Datos_Unico(franco);
  Mostrar_Datos_Unico(franco);

  return 0;


}

int main(){
  // donde vamos a almacenar todos los empleados
  vector<t_empleado> empleados;

// 1. Generar datos empleados
   Generar_Datos(10, empleados);
// 2. Mostrar datos empleados
   Mostrar_Datos(empleados);
// 3. Promedio sueldo  empleados mujeres;
   Promedio_Sueldo_Mujeres(empleados);
// 4. Mayor sueldazo de los empleados
   Mayor_Sueldo(empleados);
// 5. Ordenar Por Sueldo  empleados
   Ordenar_por_sueldo(empleados);
   return 0;
}











// for bubble sort
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
