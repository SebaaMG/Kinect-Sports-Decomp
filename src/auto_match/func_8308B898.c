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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_8308B898(int *param_1,undefined8 param_2,uint param_3,ushort param_4,ushort param_5,
                  short *param_6,short *param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  int iVar8;
  
  iVar2 = param_1[1];
  iVar8 = iVar2 + 2;
  iVar3 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar5 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar5 <= iVar8) {
      iVar5 = iVar8;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,iVar5,4);
  }
  param_1[1] = iVar8;
  puVar6 = (undefined2 *)((iVar2 + -1) * 4 + *param_1);
  puVar6[4] = *puVar6;
  puVar6[5] = puVar6[1];
  puVar7 = puVar6 + -2;
  if (param_5 < *puVar7) {
    puVar4 = puVar6 + 4;
    do {
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_5 < *puVar7);
  }
  if (param_5 == *puVar7) {
    puVar4 = puVar7 + 6;
    do {
      if (puVar4[-5] <= param_3) break;
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_5 == *puVar7);
  }
  puVar7[4] = param_5;
  puVar7[5] = (ushort)param_3;
  *param_7 = (short)((int)puVar7 - *param_1 >> 2) + 2;
  if (param_4 < *puVar7) {
    puVar4 = puVar7 + 4;
    do {
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_4 < *puVar7);
  }
  if (param_4 == *puVar7) {
    puVar4 = puVar7 + 4;
    do {
      if (puVar4[-3] <= param_3) break;
      uVar1 = puVar7[1];
      puVar4[-2] = *puVar7;
      puVar4[-1] = uVar1;
      puVar7 = puVar7 + -2;
      puVar4 = puVar4 + -2;
    } while (param_4 == *puVar7);
  }
  puVar7[3] = (ushort)param_3;
  puVar7[2] = param_4;
  *param_6 = (short)((int)puVar7 - *param_1 >> 2) + 1;
  return;
}

