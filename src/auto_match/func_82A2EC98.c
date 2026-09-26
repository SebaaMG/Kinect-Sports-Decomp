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
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82A2DB28();
extern int fn_82A2E260();
extern unsigned int iStack_60;


undefined8 fn_82A2EC98(int param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iStack_60;
  undefined1 auStack_5c [4];
  longlong lStack_58;
  undefined1 auStack_50 [80];
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  uVar13 = uVar1 + param_2;
  if (((ulonglong)*(uint *)(param_1 + 0x98) < (param_2 & 0xffffffff)) ||
     ((ulonglong)*(uint *)(param_1 + 0x98) < (uVar13 & 0xffffffff))) {
    uVar6 = 0xffffffffc000007f;
  }
  else {
    uVar8 = (uVar13 + 0xa9 & 0xffffffff) / 0xaa;
    if (uVar8 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uVar8 + 0xa9) / 0xaa;
    }
    uVar14 = (ulonglong)(uVar8 >= 2);
    if (uVar11 < 2) {
      uVar9 = 0;
    }
    else {
      uVar14 = 2;
      uVar9 = (uVar11 + 0xa9) / 0xaa;
    }
    if (*(char *)(param_1 + 0xcd) == '\0') {
      lStack_58 = (((uVar9 + uVar11 + uVar8) * 2 + uVar13) * 0x1000 & 0xffffffff000) +
                  *(longlong *)(param_1 + 0x20);
      uVar6 = NtSetInformationFile(*(undefined4 *)(param_1 + 0x28),auStack_50,&lStack_58,8,0x14);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
    }
    if (((ulonglong)uVar1 != 0) && (*(byte *)(param_1 + 0xca) < uVar14)) {
      fn_82A2E260(param_1,0,0xffffffffffffffff);
      uVar11 = (ulonglong)*(byte *)(param_1 + 0xca) + 1;
      uVar8 = uVar11;
      while (uVar8 <= uVar14) {
        uVar11 = uVar11 + 1;
        uVar6 = fn_82A2DB28(param_1,0,uVar11,&iStack_60,auStack_5c);
        iVar4 = iStack_60;
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        puVar7 = (undefined4 *)(iStack_60 + -4);
        puVar10 = (undefined4 *)(param_1 + 0xac);
        lVar15 = 5;
        do {
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar10;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        uVar12 = *(uint *)(iStack_60 + 0x14);
        uVar2 = *(uint *)(param_1 + 0xa0) & 0x7fff;
        *(uint *)(iStack_60 + 0x14) = uVar12 & 0xffff8000 | uVar2;
        uVar5 = (*(uint *)(param_1 + 0xa4) & 0x7fff) << 0xf;
        *(uint *)(iStack_60 + 0x14) = uVar5 | uVar12 & 0xc0000000 | uVar2;
        uVar3 = *(uint *)(param_1 + 0xc4) & 0x80000000;
        *(uint *)(iStack_60 + 0x14) = uVar5 | uVar12 & 0x40000000 | uVar2 | uVar3;
        *(uint *)(iStack_60 + 0x14) = *(uint *)(param_1 + 0xc4) & 0x40000000 | uVar5 | uVar2 | uVar3
        ;
        *(uint *)(iStack_60 + 0xff0) = uVar1;
        XeCryptSha(iStack_60,0x1000,0,0,0,0,param_1 + 0xb0,0x14);
        uVar12 = iVar4 - *(int *)(param_1 + 0x34);
        iVar4 = (((int)uVar12 >> 0xc) + (uint)((int)uVar12 < 0 && (uVar12 & 0xfff) != 0)) * 8 +
                *(int *)(param_1 + 0x30);
        *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0x3fffffff | 0x80000000;
        uVar8 = uVar11 & 0xffffffff;
      }
    }
    uVar6 = 0;
    *(int *)(param_1 + 0x9c) = (int)uVar13;
    *(char *)(param_1 + 0xca) = (char)uVar14;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + (int)param_2;
  }
  return uVar6;
}

