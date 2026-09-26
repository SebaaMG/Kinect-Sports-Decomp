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


void fn_827BF710(int *param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  
  if ((param_1[0x34] != 0) ||
     (((iVar1 = param_1[5], iVar1 != 0x65 && (iVar1 != 0x66)) && (iVar1 != 0x67)))) {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(param_1[0x53] + 0x14))(param_1,param_2,param_4);
  pcVar2 = *(code **)(param_1[0x53] + 0x18);
  if ((param_4 & 0xffffffff) != 0) {
    puVar3 = (undefined1 *)(param_3 + -1);
    do {
      puVar3 = puVar3 + 1;
      param_4 = param_4 - 1;
      (*pcVar2)(param_1,*puVar3);
    } while ((param_4 & 0xffffffff) != 0);
  }
  return;
}

