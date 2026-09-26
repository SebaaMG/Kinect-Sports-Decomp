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
extern int fn_82B10120();
extern int fn_82B17400();
extern int fn_82B81A28();


undefined8
fn_82B837F8(int param_1,int *param_2,uint *param_3,uint param_4,uint param_5,ulonglong param_6)

{
  uint *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar6;
  int *piVar5;
  uint uVar7;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar8;
  uint uVar11;
  
  puVar1 = (uint *)param_3[4];
  if ((param_6 & 8) != 0) {
    if (puVar1[7] != *(uint *)(param_4 + 0x1c)) {
      return 0;
    }
    lVar3 = fn_82B81A28(param_2);
    for (puVar10 = (uint *)*puVar1; puVar10 != (uint *)0x0; puVar10 = (uint *)puVar10[1]) {
      if (((*puVar10 & 0xe000000) != 0) && ((*puVar10 & 8) != 0)) {
        lVar4 = fn_82B81A28(puVar1);
        if ((-(uint)(lVar3 != lVar4) & (uint)puVar10) != 0) {
          return 0;
        }
        break;
      }
    }
  }
  if (((((param_6 & 0x10) == 0) || (((puVar1[2] & 0x3f80) != 0x3800 && (puVar1[7] == param_2[7]))))
      && ((uVar9 = puVar1[2] >> 7 & 0x7f, uVar9 != 0x70 ||
          ((puVar1[7] != param_2[7] ||
           ((*(uint *)(param_4 + 0x1c) == param_2[7] &&
            ((*(uint *)(param_4 + 8) & 0x3f80) != 0x3800)))))))) &&
     (cVar6 = fn_82B17400(puVar1,param_4,param_1), cVar6 != '\0')) {
    if ((uVar9 == 0x70) && (uVar9 = param_2[7], *(uint *)(param_4 + 0x1c) != uVar9)) {
      if (uVar9 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4))) {
        if ((*(uint *)(param_1 + 0x28) & 0x4000) != 0) {
          uVar7 = *(uint *)(param_4 + 8) >> 7 & 0x7f;
          if ((uVar7 == 0x7d) || (bVar2 = false, uVar7 == 0x7c)) {
            bVar2 = true;
          }
          if (bVar2) {
            return 0;
          }
        }
        uVar7 = param_5 >> (*param_3 >> 4 & 6) & 3;
        if ((((((param_2[2] & 0x3f80U) != 0x3800) || (puVar1 = (uint *)*param_2, puVar1[1] != 0)) ||
             (puVar1[3] != param_4)) ||
            (((*puVar1 >> 5 & 3) != uVar7 || (((ulonglong)*puVar1 & 0x1f) != (param_6 & 0xffffffff))
             ))) && (piVar5 = (int *)fn_82B10120(param_1,uVar9,param_4,uVar7,param_6,
                                                       *(uint *)(param_1 + 0x28) >> 0xe & 1),
                    param_2 != piVar5)) {
          puVar10 = (uint *)(param_3[3] + 4);
          for (puVar1 = (uint *)*puVar10; puVar1 != param_3; puVar1 = (uint *)puVar1[2]) {
            puVar10 = puVar1 + 2;
          }
          *puVar10 = param_3[2];
          param_3[2] = piVar5[1];
          piVar5[1] = (int)param_3;
          uVar9 = *param_3 & 0xffffe01f | 0x1c80;
          param_3[3] = (uint)piVar5;
          goto LAB_82b83b54;
        }
      }
    }
    else {
      uVar9 = *param_3;
      if ((((param_6 & 0x18) == 0) || ((uVar9 & 0x18) == 0)) &&
         (((param_6 & 2) == 0 || ((uVar9 & 1) == 0)))) {
        if (((param_6 & 4) == 0) || (bVar2 = false, (uVar9 & 1) == 0)) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        puVar10 = (uint *)(param_3[3] + 4);
        for (puVar1 = (uint *)*puVar10; puVar1 != param_3; puVar1 = (uint *)puVar1[2]) {
          puVar10 = puVar1 + 2;
        }
        *puVar10 = param_3[2];
        param_3[2] = *(uint *)(param_4 + 4);
        *(uint **)(param_4 + 4) = param_3;
        uVar9 = *param_3;
        uVar7 = uVar9 >> 5 & 0xff;
        param_3[3] = param_4;
        uVar7 = ((((param_5 >> (uVar7 >> 5 & 6) & 3) << 2 | param_5 >> (uVar7 >> 3 & 6) & 3) << 2 |
                 param_5 >> (uVar7 >> 1 & 6) & 3) << 2 | param_5 >> ((uVar9 >> 5 & 3) << 1) & 3) <<
                5;
        *param_3 = uVar7 | uVar9 & 0xffffe01f;
        uVar8 = (ulonglong)uVar9 & 0x1f;
        if (((param_6 & 4) != 0) && ((uVar9 & 2) != 0)) {
          param_6 = param_6 - 4;
        }
        if ((param_6 & uVar8 & 4) != 0) {
          param_6 = param_6 - 4;
          uVar8 = uVar8 - 4;
        }
        uVar11 = (uint)uVar8;
        if (((param_6 & 1) != 0) && ((uVar8 & 2) != 0)) {
          uVar11 = uVar11 - 2;
        }
        uVar9 = uVar7 | uVar9 & 0xffffe000 | ((uint)param_6 | uVar11) & 0x1f;
LAB_82b83b54:
        *param_3 = uVar9;
        return 1;
      }
    }
  }
  return 0;
}

