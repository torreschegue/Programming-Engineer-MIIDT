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

## 📋 Tipos de datos más comunes:

| Tipo de dato | Descripción                    | Ejemplo                       |
| ------------ | ------------------------------ | ----------------------------- |
| `int`        | Entero (sin decimales)         | `int edad = 25;`              |
| `float`      | Decimal de precisión simple    | `float peso = 65.4;`          |
| `double`     | Decimal de precisión doble     | `double pi = 3.14159;`        |
| `char`       | Carácter individual            | `char letra = 'A';`           |
| `string`     | Cadena de caracteres           | `string nombre = "Cristian";` |
| `bool`       | Valor lógico (verdadero/falso) | `bool encendido = true;`      |



#### 💻 Ejemplo Variables:
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
```
---
### 2️⃣ Constantes

Una constante es un valor que no puede modificarse durante la ejecución del programa.
Se declara con la palabra clave **const**. Nota: las constantes siempre van en mayusculas.

#### 💻 Ejemplo Constantes:
```cpp
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.1416;
    double radio = 5;
    double area = PI * radio * radio;

    cout << "Área del círculo: " << area << endl;
    return 0;
}
```
---
### 3️⃣ Operadores aritméticos

Los operadores aritméticos permiten realizar operaciones matemáticas básicas entre variables numéricas.

| Operador | Descripción                | Ejemplo  | Resultado |
| -------- | -------------------------- | -------- | --------- |
| `+`      | Suma                       | `5 + 3`  | 8         |
| `-`      | Resta                      | `5 - 2`  | 3         |
| `*`      | Multiplicación             | `4 * 3`  | 12        |
| `/`      | División                   | `10 / 2` | 5         |
| `%`      | Módulo (resto de división) | `10 % 3` | 1         |

#### 💻 Ejemplo Operadores Aritmetcos:
```cpp
int a = 10, b = 3;
cout << "Suma: " << (a + b) << endl;
cout << "Resta: " << (a - b) << endl;
cout << "Multiplicación: " << (a * b) << endl;
cout << "División: " << (a / b) << endl;
cout << "Módulo: " << (a % b) << endl;
```

---
### 4️⃣ Operadores de asignación

Sirven para asignar valores a variables o modificar su contenido actual.

| Operador | Ejemplo   | Equivalente a | Descripción             |
| -------- | --------- | ------------- | ----------------------- |
| `=`      | `x = 5;`  | —             | Asigna el valor 5 a x   |
| `+=`     | `x += 2;` | `x = x + 2;`  | Suma y asigna           |
| `-=`     | `x -= 3;` | `x = x - 3;`  | Resta y asigna          |
| `*=`     | `x *= 4;` | `x = x * 4;`  | Multiplica y asigna     |
| `/=`     | `x /= 2;` | `x = x / 2;`  | Divide y asigna         |
| `%=`     | `x %= 3;` | `x = x % 3;`  | Calcula módulo y asigna |

#### 💻 Ejemplo Operadores Asignacion:
```cpp
int x = 10;
x += 5;  // ahora x = 15
x *= 2;  // ahora x = 30
cout << "Valor final de x: " << x << endl;
```

---

### 5️⃣ Operadores relacionales
Comparan dos valores y devuelven un resultado booleano (**true** o **false**).

| Operador | Descripción       | Ejemplo  | Resultado |
| -------- | ----------------- | -------- | --------- |
| `==`     | Igual a           | `5 == 5` | true      |
| `!=`     | Diferente de      | `5 != 3` | true      |
| `>`      | Mayor que         | `10 > 8` | true      |
| `<`      | Menor que         | `3 < 7`  | true      |
| `>=`     | Mayor o igual que | `8 >= 8` | true      |
| `<=`     | Menor o igual que | `5 <= 6` | true      |

#### 💻 Ejemplo Operadores Relacionales:
```cpp
int a = 8, b = 10;
cout << (a == b) << endl;  // 0 (false)
cout << (a < b) << endl;   // 1 (true)
```
---

> _“Las variables dan vida al programa, las constantes le dan estabilidad.”_  
> — Ing. Cristian Omar Torres Chegue


