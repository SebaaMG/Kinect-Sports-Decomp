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


void fn_8233FFA0(int param_1,ulonglong param_2,ulonglong param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  float *pfVar10;
  bool bVar11;
  
  uVar4 = param_2;
  while( true ) {
    uVar8 = uVar4 + 1 & 0x7fffffff;
    uVar7 = uVar8 * 2;
    if ((int)param_3 <= (int)uVar7) break;
    pfVar10 = (float *)((int)(uVar8 << 4) + param_1);
    if (pfVar10[-2] < *pfVar10) {
      uVar7 = uVar7 - 1;
    }
    puVar5 = (undefined4 *)((int)((uVar7 & 0xffffffff) << 3) + param_1);
    puVar6 = (undefined4 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
    uVar4 = uVar7;
  }
  if ((int)uVar7 == (int)param_3) {
    iVar2 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar6 = (undefined4 *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    uVar4 = param_3 - 1;
    *puVar6 = *(undefined4 *)(iVar2 + -8);
    puVar6[1] = *(undefined4 *)(iVar2 + -4);
  }
  iVar2 = (int)uVar4;
  uVar9 = iVar2 - 1;
  bVar11 = (int)uVar9 < 0 && (uVar9 & 1) != 0;
  while (uVar8 = (longlong)((int)uVar9 >> 1) + (ulonglong)bVar11, (int)param_2 < iVar2) {
    iVar3 = (int)((uVar8 & 0xffffffff) << 3);
    fVar1 = *(float *)(iVar3 + param_1);
    if (fVar1 <= *param_4) break;
    pfVar10 = (float *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    iVar2 = (int)uVar8;
    uVar9 = iVar2 - 1;
    bVar11 = (int)uVar9 < 0 && (uVar9 & 1) != 0;
    *pfVar10 = fVar1;
    pfVar10[1] = *(float *)(iVar3 + param_1 + 4);
    uVar4 = uVar8;
  }
  pfVar10 = (float *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
  *pfVar10 = *param_4;
  pfVar10[1] = param_4[1];
  return;
}

