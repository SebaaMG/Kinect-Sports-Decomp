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
extern int fn_82A6CF00();
extern int fn_82BA02A8();


undefined8 fn_82A75DF8(int param_1,int param_2,uint *param_3,uint *param_4,int *param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar13 = *(uint *)(param_2 + 0x28);
  uVar5 = *(uint *)(param_2 + 0x24);
  iVar10 = *(int *)(param_2 + 0x20);
  pbVar11 = *(byte **)(param_2 + 0x1c);
  uVar9 = *(uint *)(param_2 + 0x30);
  uVar8 = *(uint *)(param_2 + 0x2c);
  uVar7 = 0x17;
  uVar6 = 0;
  if (uVar13 < 0x17) {
    if (uVar9 != 0) {
      uVar4 = 0x20 - uVar13;
      if (uVar9 <= 0x20 - uVar13) {
        uVar4 = uVar9;
      }
      uVar9 = uVar9 - uVar4;
      uVar5 = uVar5 << (uVar4 & 0x3f) | uVar8 >> (uVar9 & 0x3f);
      uVar8 = (1 << (uVar9 & 0x3f)) - 1U & uVar8;
      uVar13 = uVar4 + uVar13;
    }
    uVar12 = (ulonglong)uVar5;
    if (*(code **)(param_2 + 0x54) == fn_82BA02A8) {
      for (; (uVar13 < 0x19 && (uVar5 = (uint)uVar12, iVar10 != 0)); iVar10 = iVar10 + -1) {
        uVar13 = uVar13 + 8;
        uVar12 = (uVar12 & 0xffffff) << 8 | (ulonglong)*pbVar11;
        uVar5 = (uint)uVar12;
        pbVar11 = pbVar11 + 1;
      }
    }
    else {
      for (; (uVar13 < 0x19 && (uVar5 = (uint)uVar12, iVar10 != 0)); iVar10 = iVar10 + -1) {
        uVar2 = (**(code **)(param_2 + 0x54))(*pbVar11);
        uVar13 = uVar13 + 8;
        uVar12 = (uVar12 & 0xffffff) << 8 | uVar2 & 0xffffffff000000ff;
        uVar5 = (uint)uVar12;
        pbVar11 = pbVar11 + 1;
      }
    }
    if (uVar13 < 0x17) {
      *(uint *)(param_2 + 0x24) = uVar5;
      *(uint *)(param_2 + 0x28) = uVar13;
      *(int *)(param_2 + 0x20) = iVar10;
      *(byte **)(param_2 + 0x1c) = pbVar11;
      *(uint *)(param_2 + 0x30) = uVar9;
      *(uint *)(param_2 + 0x2c) = uVar8;
      uVar6 = fn_82A6CF00(param_2,1,0x17);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      uVar13 = *(uint *)(param_2 + 0x28);
      uVar5 = *(uint *)(param_2 + 0x24);
      iVar10 = *(int *)(param_2 + 0x20);
      pbVar11 = *(byte **)(param_2 + 0x1c);
      uVar9 = *(uint *)(param_2 + 0x30);
      uVar8 = *(uint *)(param_2 + 0x2c);
      if (uVar13 < 0x17) {
        uVar7 = uVar13;
      }
    }
  }
  *(uint *)(param_2 + 0x24) = uVar5;
  *(uint *)(param_2 + 0x28) = uVar13;
  *(int *)(param_2 + 0x20) = iVar10;
  *(byte **)(param_2 + 0x1c) = pbVar11;
  *(uint *)(param_2 + 0x30) = uVar9;
  *(uint *)(param_2 + 0x2c) = uVar8;
  uVar13 = (uVar5 >> ((int)(short)((short)uVar13 - (short)uVar7) & 0x3fU)) << (0x20 - uVar7 & 0x3f);
  uVar5 = uVar13 >> 0x1d & 6;
  puVar3 = (ushort *)(uVar5 + param_1);
  uVar1 = *(ushort *)(uVar5 + param_1);
  uVar5 = (uint)uVar1;
  if ((uVar1 & 0x8000) == 0) {
    uVar12 = (ulonglong)uVar13;
    puVar3 = puVar3 + (uVar13 >> 0x1c & 3) + uVar5;
    uVar1 = *puVar3;
    uVar5 = (uint)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      puVar3 = puVar3 + (int)((uVar12 & 0xfffffff) >> 0x1a) + (uint)uVar1;
      uVar1 = *puVar3;
      uVar5 = (uint)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        puVar3 = puVar3 + (uVar13 >> 0x18 & 3) + (uint)uVar1;
        uVar1 = *puVar3;
        uVar5 = (uint)uVar1;
        if ((uVar1 & 0x8000) == 0) {
          puVar3 = puVar3 + (int)((uVar12 & 0xffffff) >> 0x16) + (uint)uVar1;
          uVar1 = *puVar3;
          uVar5 = (uint)uVar1;
          if ((uVar1 & 0x8000) == 0) {
            puVar3 = puVar3 + (int)((uVar12 & 0x3fffff) >> 0x14) + (uint)uVar1;
            uVar1 = *puVar3;
            uVar5 = (uint)uVar1;
            if ((uVar1 & 0x8000) == 0) {
              puVar3 = puVar3 + (int)((uVar12 & 0xfffff) >> 0x12) + (uint)uVar1;
              uVar1 = *puVar3;
              uVar5 = (uint)uVar1;
              if ((uVar1 & 0x8000) == 0) {
                puVar3 = puVar3 + (uVar13 >> 0x10 & 3) + (uint)uVar1;
                uVar1 = *puVar3;
                uVar5 = (uint)uVar1;
                if ((uVar1 & 0x8000) == 0) {
                  puVar3 = puVar3 + (int)((uVar12 & 0xffff) >> 0xf) + (uint)uVar1;
                  uVar1 = *puVar3;
                  uVar5 = (uint)uVar1;
                  if ((uVar1 & 0x8000) == 0) {
                    puVar3 = puVar3 + (int)((uVar12 & 0x7fff) >> 0xe) + (uint)uVar1;
                    uVar1 = *puVar3;
                    uVar5 = (uint)uVar1;
                    if ((uVar1 & 0x8000) == 0) {
                      puVar3 = puVar3 + (int)((uVar12 & 0x3fff) >> 0xd) + (uint)uVar1;
                      uVar1 = *puVar3;
                      uVar5 = (uint)uVar1;
                      if ((uVar1 & 0x8000) == 0) {
                        uVar2 = (uVar12 & 0x1fff) << 0x13;
                        puVar3 = puVar3 + (int)((uVar12 & 0x1fff) >> 0xc) + (uint)uVar1;
                        uVar1 = *puVar3;
                        uVar5 = (uint)uVar1;
                        if ((uVar1 & 0x8000) == 0) {
                          puVar3 = puVar3 + (int)((uVar2 & 0x7fffffff) >> 0x1e) + (uint)uVar1;
                          uVar1 = *puVar3;
                          uVar5 = (uint)uVar1;
                          if ((uVar1 & 0x8000) == 0) {
                            puVar3 = puVar3 + ((uint)((uVar2 & 0x7fffffff) >> 0x1d) & 1) +
                                              (uint)uVar1;
                            uVar1 = *puVar3;
                            uVar5 = (uint)uVar1;
                            if ((uVar1 & 0x8000) == 0) {
                              puVar3 = puVar3 + uVar1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = uVar5 >> 10 & 0x1f;
  *param_3 = uVar9;
  *param_4 = uVar5 & 0x3ff;
  if (0x3fb < (uVar5 & 0x3ff)) {
    *param_4 = (uint)puVar3[(uVar5 & 3) + 1];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = uVar13 << uVar9;
  }
  return uVar6;
}

