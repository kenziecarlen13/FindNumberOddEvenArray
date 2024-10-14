# Program Ganjil atau Genap dan Tampilkan Elemen Array

## Deskripsi Program
Buatlah program yang memiliki dua fungsi. Fungsi pertama (`ganjilGenap`) untuk memeriksa apakah panjang array adalah ganjil atau genap. Fungsi kedua (`PanjangArray`) untuk menampilkan elemen tertentu dari array berdasarkan panjang array tersebut.

### PENTING!!
- Jika panjang array ganjil
    - tampilkan elemen terakhir.
- Jika panjang array genap:
  - Jika panjang array kurang dari 3, tampilkan "Elemen ke-3: 0" dan "Elemen ke-6: 0".
  - Jika panjang array di antara 3 hingga 5, tampilkan elemen ke-3 dan "Elemen ke-6: 0".
  - Jika panjang array lebih dari atau sama dengan 6, tampilkan elemen ke-3 dan elemen ke-6.
  
Program juga harus memeriksa apakah panjang array adalah ganjil atau genap, dan menampilkan informasi tersebut.

## Test Case (Output)

### Test Case 1:
**Input Array**: `{10}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 10

### Test Case 2:
**Input Array**: `{10, 11}`  
**Output**:   
Array merupakan Genap<br>
Elemen ke-3: 0<br>
Elemen ke-6: 0

### Test Case 3:
**Input Array**: `{10, 11, 12}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 12


### Test Case 4:
**Input Array**: `{10, 11, 12, 13}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 12<br>
Elemen ke-6: 0

### Test Case 5:
**Input Array**: `{10, 11, 12, 13, 14}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 14

### Test Case 6:
**Input Array**: `{10, 11, 12, 13, 14, 15}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 12<br>
Elemen ke-6: 15

### Test Case 7:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 16

### Test Case 8:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16, 17}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 12<br>
Elemen ke-6: 15

### Test Case 9:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16, 17, 18}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 18

### Test Case 10:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16, 17, 18, 19}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 12<br>
Elemen ke-6: 15

### Test Case 11:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}`  
**Output**:  
Array merupakan Ganjil<br>
Elemen terakhir: 20

### Test Case 12:
**Input Array**: `{10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21}`  
**Output**:  
Array merupakan Genap<br>
Elemen ke-3: 12<br>
Elemen ke-6: 15
