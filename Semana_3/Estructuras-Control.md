# 🧠 Tema 3: Estructuras de control – Condicionales `if`, `else`, `switch`

**Curso:** Fundamentos de Programación en C++  
**Docente:** Ing. Cristian Omar Torres Chegue  
**Institución:** Universidad Autónoma de Guerrero (UAGro)  
**Programa:** Maestría en Ingeniería para la Innovación y Desarrollo Tecnológico (MIIDT)  

---

## 📘 Objetivo del tema

Comprender y aplicar las **estructuras de control condicional** en C++ (`if`, `else if`, `else` y `switch`) para la **toma de decisiones** en los programas.  
El estudiante aprenderá a controlar el flujo de ejecución de un programa dependiendo de condiciones lógicas.

---

## 🔍 Contenido

### 1️⃣ ¿Qué son las estructuras de control?

Las **estructuras de control** permiten modificar la secuencia normal de ejecución de un programa.  
Existen tres tipos principales:

1. **Secuenciales:** ejecutan instrucciones una tras otra.  
2. **Condicionales:** ejecutan una u otra parte del código según una condición.  
3. **Repetitivas:** repiten bloques de código (veremos en el siguiente tema).  

En este módulo estudiaremos las **estructuras condicionales**.

---

### 2️⃣ Estructura condicional simple: `if`

Evalúa una **condición booleana** y ejecuta un bloque de código solo si la condición es verdadera.

#### 💻 Ejemplo:
```cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    }

    return 0;
}
```
---

### 3️⃣ Estructura condicional doble: `if - else`

Permite ejecutar un bloque si la condición es verdadera, y otro diferente si es falsa.

#### 💻 Ejemplo:
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}
```
---

### 4️⃣ Estructura condicional múltiple: `if - else if - else`

Evalúa varias condiciones en orden.
El programa ejecuta solo el primer bloque cuya condición sea verdadera.

#### 💻 Ejemplo:
```cpp
#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingresa tu calificación (0-100): ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 80) {
        cout << "Muy bien" << endl;
    } else if (nota >= 70) {
        cout << "Bien" << endl;
    } else {
        cout << "Reprobado" << endl;
    }

    return 0;
}
```

🧩 Explicación:

 * Se evalúan las condiciones de arriba hacia abajo.
 * Cuando una se cumple, las demás ya no se revisan.

---

 ### 5️⃣ Estructura condicional `switch`

Permite comparar una **variable entera o carácter** con diferentes **casos posibles.**
Es útil cuando existen **múltiples opciones fijas.**

#### 💻 Ejemplo:
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "Menú de opciones:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Salir" << endl;
    cout << "Selecciona una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Seleccionaste Sumar" << endl;
            break;
        case 2:
            cout << "Seleccionaste Restar" << endl;
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}
```
🧠 **Claves importantes:**

* Cada `case` representa una opción.
* `break`; evita que se ejecuten los siguientes casos.
* `default`: se ejecuta si ninguna opción coincide.

🧩 **Comparación rápida**

| Estructura        | Uso principal           | Evalúa           | Permite rangos | Requiere `break` |
| ----------------- | ----------------------- | ---------------- | -------------- | ---------------- |
| `if`              | Condición simple        | Expresión lógica | ✅ Sí           | ❌ No             |
| `if-else`         | Dos caminos posibles    | Expresión lógica | ✅ Sí           | ❌ No             |
| `if-else if-else` | Múltiples condiciones   | Expresión lógica | ✅ Sí           | ❌ No             |
| `switch`          | Múltiples valores fijos | Valor exacto     | ❌ No           | ✅ Sí             |


🧮 **Actividades prácticas**

* **Actividad 1**: Escribe un programa que determine si un número es positivo, negativo o cero.
* **Actividad 2**: Crea un programa que indique si un alumno aprobó (≥70) o reprobó usando if-else.
* **Actividad 3**: Diseña un menú interactivo con switch que permita seleccionar entre tres operaciones matemáticas.
* **Actividad 4**: Crea un programa que indique el día de la semana según un número (1 = Lunes, ..., 7 = Domingo).
* **Actividad 5**: Usa if-else if para determinar el nivel de rendimiento académico (Excelente, Bueno, Regular, Insuficiente).

💡 **Recomendaciones**

| Concepto                   | Descripción                                                        |
| -------------------------- | ------------------------------------------------------------------ |
| **Estructura condicional** | Permite decidir qué bloque de código ejecutar según una condición. |
| **if**                     | Evalúa una condición y ejecuta un bloque si es verdadera.          |
| **else**                   | Se ejecuta cuando la condición anterior es falsa.                  |
| **switch**                 | Evalúa una variable contra múltiples valores fijos.                |
| **break**                  | Finaliza un caso dentro de un `switch`.                            |
| **default**                | Se ejecuta si ninguna condición anterior se cumple.                |
