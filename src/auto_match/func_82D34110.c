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


void fn_82D34110(int param_1,ushort *param_2,ushort param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  param_2[9] = (ushort)param_4;
  if ((param_2[8] & 0x8000) == 0) {
    puVar3 = (ushort *)((uint)param_2[6] * 0x14 + *(int *)(param_1 + 0x1c));
    puVar2 = (ushort *)((uint)param_2[7] * 0x14 + *(int *)(param_1 + 0x1c));
    puVar3[8] = puVar3[8] & 0x8000 | param_3;
    puVar2[8] = puVar2[8] & 0x8000 | param_3;
    fn_82D34110(param_1,puVar3,param_2[6],param_2[7]);
    fn_82D34110(param_1,puVar2,param_2[7],param_4);
    uVar1 = puVar2[3];
    if (puVar3[3] < puVar2[3]) {
      uVar1 = puVar3[3];
    }
    param_2[3] = uVar1;
    uVar1 = *puVar2;
    if (*puVar2 < *puVar3) {
      uVar1 = *puVar3;
    }
    *param_2 = uVar1;
    uVar1 = puVar2[4];
    if (puVar3[4] < puVar2[4]) {
      uVar1 = puVar3[4];
    }
    param_2[4] = uVar1;
    uVar1 = puVar2[1];
    if (puVar2[1] < puVar3[1]) {
      uVar1 = puVar3[1];
    }
    param_2[1] = uVar1;
    uVar1 = puVar2[5];
    if (puVar3[5] < puVar2[5]) {
      uVar1 = puVar3[5];
    }
    param_2[5] = uVar1;
    uVar1 = puVar2[2];
    if (puVar2[2] < puVar3[2]) {
      uVar1 = puVar3[2];
    }
    param_2[2] = uVar1;
  }
  return;
}

