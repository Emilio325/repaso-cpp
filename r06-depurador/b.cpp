int pares(const int v[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;
    return c;
}

int main() {
    int v[] = {10, 20, 30, 40, 50};
    return pares(v, 5);
}