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


void fn_8249F338(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  
  iVar2 = param_2;
  while( true ) {
    iVar5 = (iVar2 + 1) * 2;
    if (param_3 <= iVar5) break;
    pfVar7 = (float *)((iVar2 + 1) * 0x18 + param_1);
    if (*pfVar7 < pfVar7[-3]) {
      iVar5 = iVar5 + -1;
    }
    puVar4 = (undefined4 *)(iVar5 * 0xc + param_1);
    iVar1 = iVar2 * 0xc + param_1;
    *(undefined4 *)(iVar2 * 0xc + param_1) = *puVar4;
    *(undefined4 *)(iVar1 + 4) = puVar4[1];
    *(undefined4 *)(iVar1 + 8) = puVar4[2];
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_3 * 0xc + param_1;
    iVar1 = iVar2 * 0xc + param_1;
    *(undefined4 *)(iVar2 * 0xc + param_1) = *(undefined4 *)(iVar5 + -0xc);
    iVar2 = param_3 + -1;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + -8);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + -4);
  }
  uVar6 = iVar2 - 1;
  iVar5 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while ((param_2 < iVar2 && (pfVar7 = (float *)(iVar5 * 0xc + param_1), *pfVar7 < *param_4))) {
    pfVar3 = (float *)(iVar2 * 0xc + param_1);
    uVar6 = iVar5 - 1;
    *pfVar3 = *pfVar7;
    pfVar3[1] = pfVar7[1];
    pfVar3[2] = pfVar7[2];
    iVar2 = iVar5;
    iVar5 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  }
  *(float *)(iVar2 * 0xc + param_1) = *param_4;
  param_1 = iVar2 * 0xc + param_1;
  *(float *)(param_1 + 4) = param_4[1];
  *(float *)(param_1 + 8) = param_4[2];
  return;
}

