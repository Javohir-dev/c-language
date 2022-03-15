// ! "%f" & "%d" haqida:
#include <stdio.h>

int main()
{
    int butunson = 5;// pythondagi f"" o'rniga: intager uchun "%d":
    printf("bu raqamning type intager:%d\n", butunson); //>>>bu raqamning type intager:5

    float number = 6.6; // float uchun "%f" ishlatamiz:
    printf("bu raqamning type float:%.2f\n", number); //>>>bu raqamning type float:6.60

    printf("%f\n", butunson + number);

    return 0;
}

// ? "%f" ni ishlatganimizda raqamlar >>>6.600000 bo'lib chiqadi shuni oldini olish uchun "%.2f" . dan keyingi 2 nuqtadan kegin 2ta raqam qolib qolgani ko'rinmasin degani, nuqtadan kegin hohlagan sonimuzni qoyishimiz mumki.
