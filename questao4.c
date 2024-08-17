#include <stdio.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

struct retangulo {
    struct ponto sup_esq;
    struct ponto inf_dir;
};

float calcArea(struct retangulo ret) {
    float base = fabs(ret.sup_esq.x - ret.inf_dir.x);
    float altura = fabs(ret.sup_esq.y - ret.inf_dir.y);
    return base * altura;
}

float calcDiag(struct retangulo ret) {
    float base = fabs(ret.sup_esq.x - ret.inf_dir.x);
    float altura = fabs(ret.sup_esq.y - ret.inf_dir.y);
    return sqrt(base * base + altura * altura);
}

float calcPeri(struct retangulo ret) {
    float base = fabs(ret.sup_esq.x - ret.inf_dir.x);
    float altura = fabs(ret.sup_esq.y - ret.inf_dir.y);
    return 2 * (base + altura);
}

int main() {
    struct retangulo ret;
    float area, diag, perim;

    printf("digite as coordenadas do ponto superior esquerdo (X e Y): ");
    scanf("%f %f", &ret.sup_esq.x, &ret.sup_esq.y);
    printf("digite as coordenadas do ponto inferior direito (X e Y): ");
    scanf("%f %f", &ret.inf_dir.x, &ret.inf_dir.y); 

    area = calcArea(ret);
    diag = calcDiagonal(ret);
    perim = calcPerimeter(ret);

    printf("área do retangulo: %.2f\n", area);
    printf("comprimento diagonal: %.2f\n", diag);
    printf("perimetro do retangulo: %.2f\n", perim);
}