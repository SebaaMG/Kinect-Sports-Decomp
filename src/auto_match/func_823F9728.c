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
extern unsigned int *auStack_24;
extern unsigned int *auStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_823F9728(int param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [9];
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&uStack_2c);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,&uStack_28);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,auStack_24);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,auStack_30);
  if (param_3 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + param_3) = uStack_2c;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + param_3) = uStack_28;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + param_3) = auStack_24[0];
    *(undefined1 *)(*(int *)(param_1 + 0x14) + param_3) = auStack_30[0];
  }
  return;
}

