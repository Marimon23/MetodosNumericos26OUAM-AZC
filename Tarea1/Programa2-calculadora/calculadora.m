x = input('Escribe el primer numero: ');
y = input('Escribe el segundo numero: ');

operacion = input('Escribe la operacion (+, -, *, /): ', 's');

if operacion == '+'
    resultado = x + y;
elseif operacion == '-'
    resultado = x - y;
elseif operacion == '*'
    resultado = x * y;
elseif operacion == '/'
    resultado = x / y;
else
    disp('Operacion no valida')
    return
end

fprintf('Resultado: %.2f\n', resultado);