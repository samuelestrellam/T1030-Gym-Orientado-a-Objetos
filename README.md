# T1030-Fynix-Orientado-a-Objetos
Este proyecto consiste en el diseño de un sistema para administrar un gimnasio usando Programación Orientada a Objetos y diagramas UML. Su objetivo es organizar la información de usuarios, entrenadores, rutinas, membresías y pagos, evitando el manejo manual que suele generar errores.

Problema

En muchos gimnasios pequeños la información se maneja de forma manual, lo que puede causar:

pérdida de datos de usuarios
pagos no registrados correctamente
membresías vencidas sin control
mala asignación de rutinas
desorganización general

Clases del sistema

Persona: contiene datos básicos como id, nombre, edad y teléfono.
Usuario: representa a los clientes del gimnasio.
Entrenador: asigna rutinas a los usuarios.
Rutina: define los entrenamientos.
Membresía: controla la vigencia del acceso al gimnasio.
Pago: registra los pagos realizados.
Gym: administra todo el sistema.

Relaciones UML

Herencia: Usuario y Entrenador heredan de Persona.
Asociación: Usuario se relaciona con Rutina y Pago.
Composición: Gym contiene y organiza los entrenadores.

Casos de fallo

Membresías vencidas no detectadas
Pagos rechazados o no registrados
Usuarios duplicados
Rutinas inexistentes o mal asignadas
Errores en el registro de información

Conclusión

El sistema mejora la organización del gimnasio al automatizar el control de usuarios, pagos y rutinas, reduciendo errores y facilitando la administración.
