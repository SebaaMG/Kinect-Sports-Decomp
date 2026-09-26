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


void fn_82A4FAC0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x2c);
  iVar1 = 0;
  while ((puVar3 != (undefined4 *)0x0 && (-1 < iVar1))) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar3;
      puVar3 = (undefined4 *)puVar3[1];
    }
    iVar1 = (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2,0,param_2);
  }
  return;
}

