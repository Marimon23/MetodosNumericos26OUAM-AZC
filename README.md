*Numerical Methods* — Course Code: 1151039

### Term: 26O

### Degree: Mechanical Engineering  
**Name:** María Monserrat Rodríguez Andaya  
**Student ID:** 2242043127  

### Professor: Gabriel Hurtado Aviles  
**Date:** October 6, 2026

---

## 1. What are numerical methods?

Numerical methods are mathematical techniques used to obtain approximate solutions to problems that are difficult to solve exactly. Unlike an analytical solution, which seeks an exact expression, numerical methods obtain an approximate value through successive calculations. The error represents the difference between the real value and the approximate value, so it is important to control it to obtain reliable results (Burden & Faires, 2011; Chapra & Canale, 2015).

## 2. How are they applied in my engineering field?

### Mechanical Engineering

Numerical methods are used to solve problems with many variables that cannot be easily solved with a closed-form formula.

* **Stress in parts:** they allow us to calculate stress and deformation in parts with complex geometries.
* **Heat transfer:** they allow us to determine how temperature is distributed in a part or system.

These methods make it easier to analyze real problems using approximations with sufficient accuracy (Chapra & Canale, 2015; Nieves & Domínguez, 2014).

## 3. What tools are used to work with numerical methods?

There are different tools:

* **C, C++, and Fortran:** compiled languages used to perform calculations efficiently.
* **Python:** a language used for scientific calculations.
* **MATLAB and GNU Octave:** allow us to easily work with matrices, equations, and graphs.
* **NumPy, SciPy, and Matplotlib:** Python libraries for scientific calculations and graphs.
* **BLAS and LAPACK:** libraries mainly used for linear algebra operations.

These tools allow different numerical methods to be implemented and solved (Burden & Faires, 2011; Quarteroni & Saleri, 2009).

## 4. What tools do we use in this course?

* **Docker:** allows programs to run inside containers, making it easier to work in the same environment.
* **Docker vs. virtual machine:** a virtual machine includes a complete operating system, while a container shares the computer’s operating system, making it lighter.
* **Dockerfile and compose.yaml:** the `Dockerfile` indicates how to create an image, while `compose.yaml` is used to configure and manage services.
* **Docker commands:** we use `up -d`, `exec`, `stop`, `down`, `ps`, and `logs` to start, access, stop, remove, and check containers.
* **GNU Octave:** it is used to perform numerical calculations and work with matrices.
* **Python:** it allows us to program numerical methods and perform scientific calculations.
* **C with GCC:** C is used for programming, and GCC is used to compile the programs.

The versions of these tools must be obtained directly from the container, as indicated in the activity.