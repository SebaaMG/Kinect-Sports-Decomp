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
extern int fn_82A1D9A8();
extern int fn_8307DBA0();
extern int fn_8307DC58();
extern int fn_8307DD20();
extern int fn_8307E9D8();
extern int fn_8307E9E8();


undefined8 fn_8307E7A8(ulonglong param_1,int param_2,uint param_3,int *param_4,ulonglong param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte *pbVar14;
  uint *puVar15;
  
  lVar6 = fn_8307DBA0();
  if (((param_5 & 0xffffffff) == 0) &&
     (param_5 = fn_8307E9D8(0xffffffff832654d4,lVar6,0xffffffffa7820007),
     (param_5 & 0xffffffff) == 0)) {
    uVar7 = 0xffffffff8007000e;
  }
  else {
    uVar5 = (param_1 + (param_1 & 0x7fffffff) * 2 & 0x7ffffff) * 0x20 + 0x8f & 0xffffff80;
    uVar13 = lVar6 - uVar5;
    fn_82A1D9A8(param_5,0,lVar6);
    puVar4 = (undefined4 *)param_5;
    *puVar4 = (int)param_1;
    lVar12 = uVar5 + param_5;
    lVar6 = 0;
    puVar4[2] = puVar4 + 4;
    if ((uVar13 & 0xffffffff) != 0) {
      lVar9 = ((uVar13 - 1 & 0xffffffff) >> 7) + 1;
      do {
        dataCacheBlockFlush(lVar6 + lVar12);
        lVar6 = lVar6 + 0x80;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar4[1] = param_3 | 0x30000;
    if ((param_1 & 0xffffffff) != 0) {
      pbVar14 = (byte *)(param_2 + 8);
      iVar11 = 0;
      do {
        puVar15 = (uint *)(iVar11 + puVar4[2]);
        puVar15[0x11] = (uint)lVar12;
        uVar8 = *(uint *)(pbVar14 + -8);
        if (uVar8 < 0x5dc1) {
          iVar10 = 0;
        }
        else if (uVar8 < 0x7d01) {
          iVar10 = 1;
        }
        else {
          iVar10 = (-(uint)(0xac44 < uVar8) & 1) + 2;
        }
        uVar8 = puVar15[1];
        uVar2 = iVar10 << 0x1b;
        puVar15[1] = uVar2 | uVar8 & 0xe7ffffff;
        uVar3 = (*pbVar14 - 1 & 1) << 0x1d;
        puVar15[1] = uVar3 | uVar2 | uVar8 & 0xc7ffffff;
        puVar15[1] = (pbVar14[1] & 0xf) << 0x14 | uVar3 | uVar2 | uVar8 & 0xc70fffff;
        uVar8 = MmGetPhysicalAddress(lVar12);
        puVar15[7] = uVar8;
        bVar1 = *pbVar14;
        iVar10 = *(int *)(pbVar14 + -4);
        puVar15[1] = puVar15[1] | 0x80000000;
        *puVar15 = ((uint)bVar1 * iVar10 & 0xf80) << 0xf | *puVar15 & 0xf83fffff;
        lVar12 = ((longlong)(int)(uint)*pbVar14 * (longlong)*(int *)(pbVar14 + -4) & 0x7fffffffU) *
                 2 + lVar12;
        puVar15[0x12] = (uint)lVar12;
        uVar8 = MmGetPhysicalAddress(lVar12);
        puVar15[8] = uVar8;
        param_1 = param_1 - 1;
        lVar12 = (ulonglong)*pbVar14 * 0x100 + lVar12;
        iVar11 = iVar11 + 0x60;
        pbVar14 = pbVar14 + 0xc;
      } while (param_1 != 0);
    }
    if (((param_3 & 1) == 0) && (uVar7 = fn_8307DC58(param_5), (int)uVar7 < 0)) {
      fn_8307DD20(param_5);
      if ((puVar4[1] & 2) == 0) {
        fn_8307E9E8(0xffffffff832654d4,param_5,0xffffffffa7820007);
      }
    }
    else {
      *param_4 = (int)puVar4;
      uVar7 = 0;
    }
  }
  return uVar7;
}

