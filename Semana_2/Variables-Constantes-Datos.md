# 🧠 Tema 2: Variables y tipos de datos, constantes, operadores y expresiones

**Curso:** Fundamentos de Programación en C++  
**Docente:** Ing. Cristian Omar Torres Chegue  
**Institución:** Universidad Autónoma de Guerrero (UAGro)  
**Programa:** Maestría en Ingeniería para la Innovación y Desarrollo Tecnológico (MIIDT)  

---

## 📘 Objetivo del tema

Comprender y aplicar los conceptos de **variables**, **tipos de datos**, **constantes**, **operadores** y **expresiones** en C++ para representar y manipular información dentro de un programa.  
El estudiante aprenderá a declarar variables, definir constantes y utilizar correctamente los distintos operadores del lenguaje.

---

## 🔍 Contenido

### 1️⃣ Variables y tipos de datos

Una **variable** es un espacio en memoria reservado para almacenar un valor que puede cambiar durante la ejecución del programa.  
Cada variable tiene un **nombre**, un **tipo de dato** y un **valor**.

#### 💻 Ejemplo:
```cpp
#include <iostream>
using namespace std;

int main() {
    int edad = 22;
    double altura = 1.75;
    char inicial = 'C';
    string nombre = "Cristian";
    bool activo = true;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Altura: " << altura << " m" << endl;
    cout << "Activo: " << activo << endl;

    return 0;
}

## 📋 Tipos de datos más comunes:

| Tipo de dato | Descripción                    | Ejemplo                       |
| ------------ | ------------------------------ | ----------------------------- |
| `int`        | Entero (sin decimales)         | `int edad = 25;`              |
| `float`      | Decimal de precisión simple    | `float peso = 65.4;`          |
| `double`     | Decimal de precisión doble     | `double pi = 3.14159;`        |
| `char`       | Carácter individual            | `char letra = 'A';`           |
| `string`     | Cadena de caracteres           | `string nombre = "Cristian";` |
| `bool`       | Valor lógico (verdadero/falso) | `bool encendido = true;`      |


### 2️⃣ Constantes

Una constante es un valor que no puede modificarse durante la ejecución del programa.
Se declara con la palabra clave const.
