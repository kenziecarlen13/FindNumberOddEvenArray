#include <stdio.h>

void ganjilGenap(int size) {
    const char* namaKalian = "";//nanti diisi dengan ganjil atau genap, sebagai default value.
    //ganti variabel namaKalian dengan nama kalian.
    //fungsi void ganjilGenap digunakan untuk menunjukkan panjang dari array ini merupakan ganjil atau genap
    //outputnya "Array merupakan Ganjil/Array merupakan Genap"
    //kerjakan di sini....

}

void PanjangArray(int namaKalian[], int size) {
    //fungsi PanjangArray digunakan untuk mencari elemen elemen dari setiap array
    //ketentuan memunculkan element dapat dilihat di README.

}


//JANGAN PUSING DULU, PAHAMI DAN KERJAKAN PELAN PELAN....
int main() //bagian ini JANGAN dirubah
{
    int a[] = {10};  // output: Elemen terakhir: 10 (ganjil)
    int b[] = {10, 11};  // output: Elemen ke-3: 0, Elemen ke-6: 0 (genap)
    int c[] = {10, 11, 12};  // output: Elemen terakhir: 12 (ganjil)
    int d[] = {10, 11, 12, 13};  // output: Elemen ke-3: 12, Elemen ke-6: 0 (genap)
    int e[] = {10, 11, 12, 13, 14};  // output: Elemen terakhir: 14 (ganjil)
    int f[] = {10, 11, 12, 13, 14, 15};  // output: Elemen ke-3: 12, Elemen ke-6: 15 (genap)
    int g[] = {10, 11, 12, 13, 14, 15, 16};  // output: Elemen terakhir: 16 (ganjil)
    int h[] = {10, 11, 12, 13, 14, 15, 16, 17};  // output: Elemen ke-3: 12, Elemen ke-6: 15 (genap)
    int i[] = {10, 11, 12, 13, 14, 15, 16, 17, 18};  // output: Elemen terakhir: 18 (ganjil)
    int j[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};  // output: Elemen ke-3: 12, Elemen ke-6: 15 (genap)
    int k[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};  // output: Elemen terakhir: 20 (ganjil)
    int l[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};  // output: Elemen ke-3: 12, Elemen ke-6: 15 (genap)

    ganjilGenap(sizeof(a) / sizeof(a[0]));
    PanjangArray(a, sizeof(a) / sizeof(a[0]));
    
    ganjilGenap(sizeof(b) / sizeof(b[0]));
    PanjangArray(b, sizeof(b) / sizeof(b[0]));
    
    ganjilGenap(sizeof(c) / sizeof(c[0]));
    PanjangArray(c, sizeof(c) / sizeof(c[0]));

    ganjilGenap(sizeof(d) / sizeof(d[0]));
    PanjangArray(d, sizeof(d) / sizeof(d[0]));
    
    ganjilGenap(sizeof(e) / sizeof(e[0]));
    PanjangArray(e, sizeof(e) / sizeof(e[0]));

    ganjilGenap(sizeof(f) / sizeof(f[0]));
    PanjangArray(f, sizeof(f) / sizeof(f[0]));

    ganjilGenap(sizeof(g) / sizeof(g[0]));    
    PanjangArray(g, sizeof(g) / sizeof(g[0]));

    ganjilGenap(sizeof(h) / sizeof(h[0]));
    PanjangArray(h, sizeof(h) / sizeof(h[0]));

    ganjilGenap(sizeof(i) / sizeof(i[0]));
    PanjangArray(i, sizeof(i) / sizeof(i[0]));

    ganjilGenap(sizeof(j) / sizeof(j[0]));
    PanjangArray(j, sizeof(j) / sizeof(j[0]));

    ganjilGenap(sizeof(k) / sizeof(k[0]));
    PanjangArray(k, sizeof(k) / sizeof(k[0]));

    ganjilGenap(sizeof(l) / sizeof(l[0]));
    PanjangArray(l, sizeof(l) / sizeof(l[0]));

    return 0;
}
