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
extern int fn_8260D428();


int * fn_8258EBF8(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  puVar5 = puVar4;
  puVar6 = (undefined4 *)puVar4[1];
  while (*(char *)((int)puVar6 + 0x39) == '\0') {
    puVar3 = puVar6 + 3;
    puVar2 = param_3;
    if (0xf < (uint)param_3[5]) {
      puVar2 = (undefined4 *)*param_3;
    }
    iVar1 = fn_8260D428(puVar3,0,puVar6[7],puVar2,param_3[4]);
    if (iVar1 < 0) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      if (*(char *)((int)puVar4 + 0x39) != '\0') {
        if (0xf < (uint)puVar6[8]) {
          puVar3 = (undefined4 *)*puVar3;
        }
        iVar1 = fn_8260D428(param_3,0,param_3[4],puVar3,puVar6[7]);
        if (iVar1 < 0) {
          puVar4 = puVar6;
        }
      }
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if (*(char *)((int)puVar4 + 0x39) == '\0') {
    puVar6 = (undefined4 *)*puVar4;
  }
  else {
    puVar6 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  }
  while (*(char *)((int)puVar6 + 0x39) == '\0') {
    puVar3 = puVar6 + 3;
    if (0xf < (uint)puVar6[8]) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar1 = fn_8260D428(param_3,0,param_3[4],puVar3,puVar6[7]);
    if (iVar1 < 0) {
      puVar4 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
    else {
      puVar6 = (undefined4 *)puVar6[2];
    }
  }
  *param_1 = (int)puVar5;
  param_1[1] = (int)puVar4;
  return param_1;
}

