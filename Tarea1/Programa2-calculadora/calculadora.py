x = float(input('Escribe el primer numero: '))
y = float(input('Escribe el segundo numero: '))

operacion = input('Escribe la operacion (+, -, *, /): ')

if operacion == '+':
    resultado = x + y
elif operacion == '-':
    resultado = x - y
elif operacion == '*':
    resultado = x * y
elif operacion == '/':
    if y == 0:
        print('No se puede dividir entre cero')
        exit()
    resultado = x / y
else:
    print('Operacion no valida')
    exit()

print(f'Resultado: {resultado:.2f}')