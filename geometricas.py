import math

def main():
    # área do triângulo
    base = float(input("Digite a base do triângulo: "))
    altura = float(input("Digite a altura do triângulo: "))
    print("Área do Triângulo: ", (base * altura) / 2)

    # área do quadrado
    lado = float(input("Digite o lado do quadrado: "))
    print("Área do Quadrado: ", lado * lado)

    # área do losango
    diagonal1 = float(input("Digite a primeira diagonal do losango: "))
    diagonal2 = float(input("Digite a segunda diagonal do losango: "))
    print("Área do Losango: ", (diagonal1 * diagonal2) / 2)

    # área do retângulo
    lado1 = float(input("Digite o primeiro lado do retângulo: "))
    lado2 = float(input("Digite o segundo lado do retângulo: "))
    print("Área do Retângulo: ", lado1 * lado2)

    # área do trapézio
    base_maior = float(input("Digite a base maior do trapézio: "))
    base_menor = float(input("Digite a base menor do trapézio: "))
    altura = float(input("Digite a altura do trapézio: "))
    print("Área do Trapézio: ", ((base_maior + base_menor) / 2) * altura)

    # área do círculo
    raio = float(input("Digite o raio do círculo: "))
    print("Área do Círculo: ", math.pi * raio * raio)

if __name__ == "__main__":
    main()
