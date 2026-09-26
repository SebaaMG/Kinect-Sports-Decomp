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


void fn_827CF108(int param_1,uint *param_2,ulonglong param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x44);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x154) + 8);
    param_4 = param_4 - (int)param_2;
    do {
      puVar1 = puVar1 + 1;
      (*(code *)*puVar1)(param_1,iVar3,(ulonglong)*param_2 + (param_3 & 0x3fffffff) * 4,
                         ((longlong)*(int *)(iVar3 + 0xc) * (longlong)param_5 & 0x3fffffffU) * 4 +
                         (ulonglong)*(uint *)(param_4 + (int)param_2));
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 0x54;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  return;
}

