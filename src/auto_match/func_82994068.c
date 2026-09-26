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
extern unsigned int *auStack_60;
extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern unsigned int uStack_54;


uint fn_82994068(int *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_60 [12];
  uint uStack_54;
  uint auStack_50 [20];
  
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,param_2[0x1b]);
  uVar3 = (**(code **)(*param_1 + 0x74))(param_1,param_2[0x1b]);
  if (iVar4 == 0xb) {
    if ((ulonglong)(uint)param_1[10] <= (uVar3 & 0xffffffff)) {
      return 0x80004005;
    }
    *param_3 = (int)uVar3;
    lVar11 = 1;
    iVar9 = (int)((uVar3 + 0x87 & 0xffffffff) << 2);
  }
  else {
    if (iVar4 != 6) {
      return 0x80004005;
    }
    if (7 < (uVar3 & 0xffffffff)) {
      return 0x80004005;
    }
    *param_3 = (int)uVar3 + 2;
    lVar11 = 3;
    iVar9 = (int)((uVar3 + 0x7f & 0xffffffff) << 2);
  }
  uVar12 = 0;
  uVar5 = 0;
  if (*(uint *)(iVar9 + (int)param_1) != 0) {
    do {
      if (uVar5 == 0) {
        uVar12 = uVar12 | 0x10000;
      }
      else if (uVar5 == 1) {
        uVar12 = uVar12 | 0x20000;
      }
      else if (uVar5 < 3) {
        uVar12 = uVar12 | 0x40000;
      }
      else if (uVar5 == 3) {
        uVar12 = uVar12 | 0x80000;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar9 + (int)param_1));
  }
  if ((lVar11 != 1) &&
     (((param_1[0x33] & 0x20U) != 0 || ((iVar4 == 6 && ((*param_2 & 0x2000000) != 0)))))) {
    uVar12 = uVar12 | 0x200000;
  }
  uVar13 = 0;
  if ((*param_2 & 0x1000000) != 0) {
    uVar13 = 0x400000;
  }
  uVar5 = fn_8295D0A8(param_1,0x200001f);
  if ((-1 < (int)uVar5) && (uVar5 = fn_8295A330(param_1,0xffffffff80000000), -1 < (int)uVar5))
  {
    if ((param_1[0x33] & 1U) != 0) {
      uVar5 = param_1[2];
      lVar6 = 0;
      uVar7 = 0;
      auStack_50[1] = 0xffffffff;
      auStack_50[2] = 0xffffffff;
      auStack_50[3] = 0xffffffff;
      if (uVar5 != 0) {
        iVar4 = param_1[5];
        iVar9 = 0;
        uVar1 = param_2[1];
        do {
          iVar2 = *(int *)(iVar9 + iVar4);
          if (((uVar1 == *(uint *)(iVar2 + 4)) && (param_2[2] == *(uint *)(iVar2 + 8))) &&
             (param_2[3] == *(uint *)(iVar2 + 0xc))) {
            auStack_50[*(int *)(iVar2 + 0x10)] = uVar7;
          }
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 4;
        } while (uVar7 < uVar5);
      }
      puVar10 = &uStack_54;
      puVar8 = auStack_50;
      lVar14 = 4;
      do {
        if (*puVar8 != 0xffffffff) {
          puVar10 = puVar10 + 1;
          *puVar10 = *puVar8;
          lVar6 = lVar6 + 1;
        }
        puVar8 = puVar8 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar5 = (**(code **)(*param_1 + 0x144))(param_1,auStack_50,lVar6,auStack_60,1);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = (**(code **)(*param_1 + 0x138))
                      (param_1,(lVar11 << 0x14 | 0x800000U) << 8 | uVar3 & 0x7ff | uVar13,uVar12,0);
    if (-1 < (int)uVar5) {
      uVar5 = fn_829548C8(param_1);
      uVar5 = (int)uVar5 >> 0x1f & uVar5;
    }
  }
  return uVar5;
}

