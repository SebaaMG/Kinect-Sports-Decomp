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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_7c;
extern int fn_82F69348();
extern int fn_82F69390();
extern int fn_82F69420();
extern int fn_82F69650();
extern int fn_82F69860();
extern int fn_82F698B8();
extern int fn_82F6FA38();
extern int fn_82F801C8();
extern int fn_82F80228();
extern int fn_82F80AC8();
extern int fn_82F80C10();
extern int fn_82F81260();
extern int fn_82F812C0();
extern int fn_82F86A50();
extern unsigned int uStack_80;


int fn_82F80D88(uint *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uStack_80;
  uint auStack_7c [31];
  
  uVar8 = param_4;
  uVar10 = param_5;
  uVar11 = param_4;
  uVar13 = param_5;
  uVar14 = param_6;
  uVar15 = param_7;
  iVar4 = fn_82F801C8(param_2,param_4,param_5);
  iVar6 = (int)param_5;
  if ((iVar4 < -1) || (iVar5 = iVar4, *(int *)(iVar6 + 4) <= iVar4)) {
    iVar5 = fn_82F812C0();
  }
  uVar16 = (ulonglong)*param_1;
  if (uVar16 == 0xe06d7363) {
    uVar16 = 0x19930000;
    uVar15 = 0x19930000;
    uVar14 = 0x19930000;
    if ((param_1[4] == 3) &&
       ((((uVar17 = param_1[5], uVar17 == 0x19930520 || (uVar17 == 0x19930521)) ||
         (uVar17 == 0x19930522)) && (param_1[7] == 0)))) {
      iVar5 = fn_82F6FA38();
      if (*(int *)(iVar5 + 0x7c) == 0) {
        return iVar5;
      }
      iVar5 = fn_82F6FA38();
      param_1 = *(uint **)(iVar5 + 0x7c);
      iVar5 = fn_82F6FA38();
      param_3 = (ulonglong)*(uint *)(iVar5 + 0x80);
      uVar8 = 1;
      iVar5 = fn_82F86A50(param_1,1);
      if (iVar5 == 0) {
        iVar5 = fn_82F812C0();
      }
      if (*param_1 != 0xe06d7363) goto LAB_82f80ff8;
      if ((param_1[4] == 3) &&
         ((((uVar17 = param_1[5], uVar17 == 0x19930520 || (uVar17 == 0x19930521)) ||
           (uVar17 == 0x19930522)) && (param_1[7] == 0)))) {
        iVar5 = fn_82F812C0();
      }
    }
    if (((*param_1 == 0xe06d7363) && (param_1[4] == 3)) &&
       ((uVar17 = param_1[5], uVar17 == 0x19930520 ||
        ((uVar17 == 0x19930521 || (uVar17 == 0x19930522)))))) {
      if (*(int *)(iVar6 + 0xc) == 0) {
        return iVar5;
      }
      iVar6 = fn_82F69650(param_2,param_5,iVar4,&uStack_80,auStack_7c,param_4);
      if (auStack_7c[0] <= uStack_80) {
        return iVar6;
      }
      puVar18 = (uint *)(iVar6 + 0x10);
      do {
        uVar17 = uStack_80;
        if (((int)puVar18[-4] <= iVar4) && (iVar4 <= (int)puVar18[-3])) {
          uVar16 = (ulonglong)puVar18[-1];
          uVar14 = (ulonglong)*puVar18;
          if (0 < (int)puVar18[-1]) {
            puVar1 = *(uint **)(param_1[7] + 0xc);
            uVar2 = *puVar1;
            do {
              uVar19 = (ulonglong)uVar2;
              uVar12 = ZEXT48(puVar1);
              if (0 < (int)uVar2) {
                do {
                  uVar12 = uVar12 + 4;
                  uVar9 = (ulonglong)*(uint *)uVar12;
                  iVar6 = fn_82F80228(uVar14,uVar9);
                  if (iVar6 != 0) {
                    iVar6 = fn_82F80AC8(param_1,param_2,param_3,param_4,param_5,uVar14,uVar9,
                                          puVar18 + -4);
                    uVar17 = uStack_80;
                    goto LAB_82f80fd8;
                  }
                  uVar19 = uVar19 - 1;
                  iVar6 = 0;
                } while (0 < (longlong)uVar19);
              }
              uVar16 = uVar16 - 1;
              uVar14 = uVar14 + 0x10;
            } while (0 < (longlong)uVar16);
          }
        }
LAB_82f80fd8:
        uStack_80 = uVar17 + 1;
        puVar18 = puVar18 + 5;
        if (auStack_7c[0] <= uStack_80) {
          return iVar6;
        }
      } while( true );
    }
  }
LAB_82f80ff8:
  if (*(int *)(iVar6 + 0xc) != 0) {
    if ((param_6 & 0xff) == 0) {
      iVar5 = fn_82F80C10(param_1,param_2,param_3,param_4,param_5,iVar4,param_7,param_8);
    }
    else {
      piVar7 = (int *)fn_82F81260();
      iVar6 = (int)uVar13;
      if ((piVar7[1] & 0x66U) == 0) {
        if (*(int *)(iVar6 + 0xc) != 0) {
          if ((((*piVar7 == -0x1f928c9d) && (2 < (uint)piVar7[4])) && (0x19930522 < (uint)piVar7[5])
              ) && (*(code **)(piVar7[7] + 8) != (code *)0x0)) {
            iVar6 = (**(code **)(piVar7[7] + 8))(piVar7,uVar8,uVar10,uVar11,uVar13);
            return iVar6;
          }
          fn_82F80D88(piVar7,uVar8,uVar10,uVar11,uVar13,uVar16,uVar14,uVar15);
        }
      }
      else if ((*(int *)(iVar6 + 4) != 0) && ((int)uVar14 == 0)) {
        puVar18 = (uint *)uVar11;
        if (((piVar7[1] & 0x20U) == 0) || (iVar4 = fn_82F69348(), iVar4 == 0)) {
          fn_82F69420(uVar8,uVar11,uVar13);
          if (((*(int *)(iVar6 + 0xc) != 0) && (iVar6 = *(int *)(puVar18[2] + 4), iVar6 != 0)) &&
             (puVar3 = *(undefined4 **)(iVar6 + 8), puVar3 != (undefined4 *)0x0)) {
            fn_82F698B8(puVar3);
            iVar4 = fn_82F69860(*puVar3);
            if ((iVar4 != 0) && ((code *)puVar3[1] != (code *)0x0)) {
              (*(code *)puVar3[1])(*puVar3);
              *puVar3 = 0;
            }
            *(undefined4 *)(iVar6 + 8) = 0;
          }
        }
        else {
          iVar6 = fn_82F6FA38();
          if (*(int *)(iVar6 + 0x8c) == 0) {
            fn_82F812C0();
          }
          iVar6 = fn_82F6FA38();
          fn_82F69390(*(undefined4 *)(iVar6 + 0x8c),uVar10);
          uVar17 = *puVar18;
          iVar6 = fn_82F6FA38();
          *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x30) = (ulonglong)uVar17;
          uVar17 = puVar18[1];
          iVar6 = fn_82F6FA38();
          *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x38) = (ulonglong)uVar17;
          uVar17 = puVar18[2];
          iVar6 = fn_82F6FA38();
          *(ulonglong *)(*(int *)(iVar6 + 0x8c) + 0x40) = (ulonglong)uVar17;
          uVar8 = fn_82F69348();
          fn_82F69390(uVar10,uVar8);
        }
      }
      iVar5 = 1;
    }
  }
  return iVar5;
}

