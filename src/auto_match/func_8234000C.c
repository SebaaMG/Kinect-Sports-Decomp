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


void fn_8234000C(int param_1,ulonglong param_2,ulonglong param_3,float *param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong in_r11;
  uint uVar7;
  ulonglong uVar6;
  float *pfVar8;
  bool bVar9;
  byte in_cr6;
  
  while ((bool)(in_cr6 >> 3 & 1)) {
    pfVar8 = (float *)((int)((in_r11 & 0xffffffff) << 3) + param_1);
    uVar6 = in_r11;
    if (pfVar8[-2] < *pfVar8) {
      uVar6 = in_r11 - 1;
    }
    puVar4 = (undefined4 *)((int)((uVar6 & 0xffffffff) << 3) + param_1);
    puVar5 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    in_r11 = (uVar6 + 1 & 0x7fffffff) << 1;
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    param_2 = uVar6;
    in_cr6 = ((int)in_r11 < (int)param_3) << 3 | ((int)in_r11 == (int)param_3) << 1;
  }
  if ((bool)(in_cr6 >> 1 & 1)) {
    iVar2 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar5 = (undefined4 *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    param_2 = param_3 - 1;
    *puVar5 = *(undefined4 *)(iVar2 + -8);
    puVar5[1] = *(undefined4 *)(iVar2 + -4);
  }
  iVar2 = (int)param_2;
  uVar7 = iVar2 - 1;
  bVar9 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
  while (uVar6 = (longlong)((int)uVar7 >> 1) + (ulonglong)bVar9, param_5 < iVar2) {
    iVar3 = (int)((uVar6 & 0xffffffff) << 3);
    fVar1 = *(float *)(iVar3 + param_1);
    if (fVar1 <= *param_4) break;
    pfVar8 = (float *)((int)((param_2 & 0xffffffff) << 3) + param_1);
    iVar2 = (int)uVar6;
    uVar7 = iVar2 - 1;
    bVar9 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
    *pfVar8 = fVar1;
    pfVar8[1] = *(float *)(iVar3 + param_1 + 4);
    param_2 = uVar6;
  }
  pfVar8 = (float *)((int)((param_2 & 0xffffffff) << 3) + param_1);
  *pfVar8 = *param_4;
  pfVar8[1] = param_4[1];
  return;
}

