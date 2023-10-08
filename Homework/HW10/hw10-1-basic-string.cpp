/*
    จงเขียนโปรแกรมเพื่อรับค่า String ที่สามารถรับชื่อและนามสกุลไว้ในตัวแปรเดียวกันได้ พร้อมกับแสดงผลบนหน้าจอคอมพิวเตอร์

    Test case:
        Kittinan Noimanee
    Output:
        Name: Kittinan Noimanee

    Test case:
        Visual Studio Code
    Output:
        Name: Visual Studio Code

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; // สร้างอาร์เรย์เก็บ String ขนาดสูงสุด 100 ตัวอักษร

    // รับค่า String จากผู้ใช้
    printf("กรุณาใส่ชื่อและนามสกุล: ");
    fgets(name, sizeof(name), stdin);

    // นำเข้าข้อมูล Newline (\n) ที่เกิดจากการใส่ Enter ออก
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // แสดงผลลัพธ์
    printf("Name: %s\n", name);

    return 0;
}

