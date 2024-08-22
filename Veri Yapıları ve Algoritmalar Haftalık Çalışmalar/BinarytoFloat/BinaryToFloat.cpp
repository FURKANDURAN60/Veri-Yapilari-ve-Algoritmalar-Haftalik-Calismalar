#include <iostream>
#include <bitset>
#include <cmath>

float binaryToFloat(const std::bitset<32>& bits) {
    // İşaret bitini al
    int sign = bits[31] == 0 ? 1 : -1;

    // Üst sınıf bitlerini al
    int exponent = 0;
    for (int i = 30; i >= 23; --i) {
        exponent = (exponent << 1) | bits[i];
    }

    // Kesirli kısmı al
    float fraction = 1.0;
    for (int i = 22; i >= 0; --i) {
        fraction += (bits[i] == 1) ? (1.0f / pow(2, 23 - i)) : 0.0f;
    }

    // IEEE 754 formatına göre sayıyı hesapla
    float result = sign * fraction * pow(2, exponent - 127);

    return result;
}

int main() {
    // 32 bitlik bir ikili sayı örneği
    std::bitset<32> binaryNumber("01000011000010000010100011000000");

    // İkili sayıyı ondalıklı bir kayan noktalı sayıya dönüştür
    float decimalNumber = binaryToFloat(binaryNumber);

    // Sonucu yazdır
    std::cout << "Binary: " << binaryNumber << std::endl;
    std::cout << "Decimal: " << decimalNumber << std::endl;

    return 0;
}
