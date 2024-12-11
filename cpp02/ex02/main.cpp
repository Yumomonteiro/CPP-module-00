/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:53:10 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/11 13:30:17 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main() {
    // Teste de inicialização com valores inteiros e float
    Fixed a; // Representando 0 com precisão de ponto fixo
    Fixed b(52.25f);
    Fixed c(10.5f);

    // Teste da conversão para int e float
    std::cout << "Valor de a (int): " << a.toInt() << std::endl;
    std::cout << "Valor de a (float): " << a.toFloat() << std::endl;

    std::cout << "Valor de b (int): " << b.toInt() << std::endl;  
    std::cout << "Valor de b (float): " << b.toFloat() << std::endl; 

    std::cout << "Valor de c (int): " << c.toInt() << std::endl;
    std::cout << "Valor de c (float): " << c.toFloat() << std::endl; 

    // Teste dos operadores de incremento e decremento
    std::cout << "\nIncrementos e Decrementos:" << std::endl;
    std::cout << "a: " << a << std::endl;     
    std::cout << "++a: " << ++a << std::endl; 
    std::cout << "a (após ++a): " << a << std::endl;

    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a (após a++): " << a << std::endl;

    

    std::cout << "--a: " << --a << std::endl;  // Esperado: 53
    std::cout << "a (após --a): " << a << std::endl; // Esperado: 53

    std::cout << "a--: " << a-- << std::endl;  // Esperado: 53
    std::cout << "a (após a--): " << a << std::endl; // Esperado: 52

    // Teste de operadores aritméticos
    std::cout << "\nOperações Aritméticas:" << std::endl;
    std::cout << "a + b: " << a + b << std::endl;  // Esperado: 104.25
    std::cout << "a - b: " << a - b << std::endl;  // Esperado: -0.25
    std::cout << "a * b: " << a * b << std::endl;  // Esperado: 2729.0 (aproximadamente)
    std::cout << "a / b: " << a / b << std::endl;  // Esperado: 1.0

    // Teste de operadores de comparação
    std::cout << "\nOperadores de Comparação:" << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;  // Esperado: 0 (falso)
    std::cout << "a < b: " << (a < b) << std::endl;  // Esperado: 1 (verdadeiro)
    std::cout << "a >= b: " << (a >= b) << std::endl; // Esperado: 0 (falso)
    std::cout << "a <= b: " << (a <= b) << std::endl; // Esperado: 1 (verdadeiro)
    std::cout << "a == b: " << (a == b) << std::endl; // Esperado: 0 (falso)
    std::cout << "a != b: " << (a != b) << std::endl; // Esperado: 1 (verdadeiro)

    // Teste das funções min e max
    std::cout << "\nMin e Max:" << std::endl;
    std::cout << "Min entre a e b: " << Fixed::min(a, b) << std::endl; // Esperado: b
    std::cout << "Max entre a e b: " << Fixed::max(a, b) << std::endl; // Esperado: a

    // Teste de min e max constantes
    Fixed const d(100.0f);
    Fixed const e(150.0f);
    std::cout << "Min entre d e e (const): " << Fixed::min(d, e) << std::endl; // Esperado: d
    std::cout << "Max entre d e e (const): " << Fixed::max(d, e) << std::endl; // Esperado: e

    return 0;
}
