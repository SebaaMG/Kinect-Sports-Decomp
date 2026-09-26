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


void fn_829BEC10(int param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  iVar2 = 0;
  param_4 = (undefined4 *)*param_4;
  if (*(int *)(param_1 + 0x13c) < 1) {
    return;
  }
  param_3 = param_3 - (int)param_4;
  do {
    puVar5 = (undefined1 *)*param_4;
    puVar4 = puVar5 + *(int *)(param_1 + 0x70);
    if (puVar5 < puVar4) {
      puVar3 = (undefined1 *)(*(int *)(param_3 + (int)param_4) + -1);
      do {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
        *puVar5 = uVar1;
        puVar5[1] = uVar1;
        puVar5 = puVar5 + 2;
      } while (puVar5 < puVar4);
    }
    iVar2 = iVar2 + 1;
    param_4 = param_4 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x13c));
  return;
}

