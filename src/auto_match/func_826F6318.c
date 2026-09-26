typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8268E080();


void fn_826F6318(int param_1,ulonglong param_2,char param_3)

{
  if ((param_2 & 0xffffffff) != 0) {
    fn_8268E080(param_2,0x148,param_1 + 0xb30);
    fn_8268E080(param_2,0x14b,param_1 + 0xb48);
    fn_8268E080(param_2,0x149,param_1 + 0xb38);
    fn_8268E080(param_2,0x14a,param_1 + 0xb40);
    fn_8268E080(param_2,0x14c,param_1 + 0xb50);
    fn_8268E080(param_2,0x14d,param_1 + 0xb58);
    fn_8268E080(param_2,0x14e,param_1 + 0xb60);
    fn_8268E080(param_2,0x14f,param_1 + 0xb68);
    fn_8268E080(param_2,0x150,param_1 + 0xb70);
    fn_8268E080(param_2,0x151,param_1 + 0xb80);
    fn_8268E080(param_2,0x153,param_1 + 0xb88);
    fn_8268E080(param_2,0x154,param_1 + 0xb8c);
    fn_8268E080(param_2,0x155,param_1 + 0xb78);
  }
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0xb30) = 0;
    *(undefined8 *)(param_1 + 0xb48) = 0;
    *(undefined8 *)(param_1 + 0xb38) = 0;
    *(undefined8 *)(param_1 + 0xb40) = 0;
    *(undefined8 *)(param_1 + 0xb50) = 0;
    *(undefined8 *)(param_1 + 0xb58) = 0;
    *(undefined8 *)(param_1 + 0xb60) = 0;
    *(undefined8 *)(param_1 + 0xb68) = 0;
    *(undefined8 *)(param_1 + 0xb70) = 0;
    *(undefined8 *)(param_1 + 0xb80) = 0;
    *(undefined4 *)(param_1 + 0xb88) = 0;
    *(undefined4 *)(param_1 + 0xb8c) = 0;
    *(undefined4 *)(param_1 + 0xb78) = 0;
  }
  return;
}

