int maximo(const int v[], int n) {
    int mejor = v[0];
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int v[] = {10, 20, 30, 40, 50};
    return maximo(v, 5);
}