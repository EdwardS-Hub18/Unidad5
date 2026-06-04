# Taller Unidad 5 — Métodos de Ordenamiento Eficientes

**Materia:** Estructura de Datos
**Programa:** Ingeniería de Sistemas — Universidad del Pacífico

## Integrantes

* Darin Stiven Angulo Valencia
* Edward Stiven Rodallega Aeagon
* Julio César Balareso Espinoza

---

## Descripción

Este proyecto consiste en un sistema desarrollado en lenguaje C para la gestión de contenedores en un muelle de carga.

El sistema permite registrar hasta 30 contenedores, almacenar sus pesos, ordenarlos utilizando distintos métodos de ordenamiento eficientes y realizar búsquedas mediante el algoritmo de búsqueda binaria.

Está diseñado con un menú interactivo en consola que facilita la manipulación de los datos.

---

## Funcionalidades

* Registro manual de contenedores
* Generación automática de pesos aleatorios
* Visualización de contenedores registrados
* Ordenamiento de datos con:

  * Shell Sort
  * Merge Sort
  * Quick Sort
* Búsqueda de contenedores por peso (Búsqueda Binaria)
* Control del estado del arreglo (ordenado / no ordenado)

---

## Métodos implementados

| Opción | Método           | Complejidad         |
| ------ | ---------------- | ------------------- |
| 4      | Shell Sort       | O(n log² n)         |
| 5      | Merge Sort       | O(n log n)          |
| 6      | Quick Sort       | O(n log n) promedio |
| 7      | Búsqueda Binaria | O(log n)            |

---

## Detalles técnicos

* Lenguaje: C
* Uso de arreglos estáticos
* Máximo de contenedores: 30
* Generación de números aleatorios con `rand()`
* Control de estado mediante variable `ordenado`

---

## Compilación y ejecución

### En Linux / Mac:

```bash
gcc main.c -o contenedores
./contenedores
```

### En Windows:

```bash
gcc main.c -o contenedores.exe
contenedores.exe
```

---

## Estructura del proyecto

```
unidad5/
└── tallerMetodosEficientes/
    ├── main.c
    ├── README.md
    └── evidencias/
        ├── evidencia_codigo.png
        ├── evidencia_compilacion.png
        ├── evidencia_ejecucion.png
        └── evidencia_repositorio.png
```

---

## Notas importantes

* La búsqueda binaria solo funciona si el arreglo está ordenado previamente.
* El sistema valida que no se exceda el número máximo de contenedores.
* Los pesos generados aleatoriamente están entre 500 kg y 30,000 kg.

---

## Conclusión

Este sistema permite aplicar de forma práctica distintos algoritmos de ordenamiento eficientes y técnicas de búsqueda, facilitando la comprensión de su funcionamiento y rendimiento en escenarios reales como la organización de carga en un muelle.

Además, refuerza el manejo de estructuras básicas en C, control de flujo y lógica algorítmica.
