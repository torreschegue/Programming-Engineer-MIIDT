# 🧠 Tema 1: Conceptos básicos, entorno de desarrollo y primer programa

**Curso:** Fundamentos de Programación en C++  
**Docente:** Ing. Cristian Omar Torres Chegue  
**Institución:** Universidad Autónoma de Guerrero (UAGro)  
**Programa:** Maestría en Ingeniería para la Innovación y Desarrollo Tecnológico (MIIDT)  

---

## 📘 Objetivo del tema

Introducir al estudiante en los fundamentos esenciales de la programación y familiarizarlo con el entorno de desarrollo necesario para crear, compilar y ejecutar programas en C++.  
Al finalizar esta sesión, el alumno será capaz de comprender la estructura básica de un programa y ejecutar su primer código funcional en C++.

---

## 🔍 Contenido

### 1️⃣ Conceptos básicos de programación
- **Programa:** Conjunto de instrucciones que la computadora ejecuta para resolver un problema.  
- **Lenguaje de programación:** Medio que permite comunicarse con la computadora utilizando una sintaxis definida (en este caso, **C++**).  
- **Algoritmo:** Secuencia lógica y ordenada de pasos que permiten resolver un problema.  
- **Compilador:** Herramienta que traduce el código fuente a lenguaje máquina.  
- **Depuración:** Proceso de detectar y corregir errores en el código.  

---

### 2️⃣ Entorno de desarrollo

Para programar en C++ se requiere un entorno de trabajo que permita escribir, compilar y ejecutar el código.  

#### 🔧 Herramientas recomendadas:
- **Compilador:**  
  - GNU Compiler Collection (**g++**)  
  - Microsoft Visual C++  
  - Clang  

- **Entornos de desarrollo (IDE):**  
  - [Visual Studio Code](https://code.visualstudio.com/)  
  - [Code::Blocks](http://www.codeblocks.org/downloads)  
  - [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)  
  - [CLion](https://www.jetbrains.com/clion/)  

#### ⚙️ Instalación rápida (en Windows)
1. Instala **MinGW** desde [https://osdn.net/projects/mingw/](https://osdn.net/projects/mingw/).  
2. Agrega la ruta `C:\MinGW\bin` a las variables de entorno del sistema.  
3. Verifica la instalación ejecutando en la terminal:  
   ```bash
   g++ --version
