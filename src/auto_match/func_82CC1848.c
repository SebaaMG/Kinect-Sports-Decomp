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
extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int uStack_e0;


void fn_82CC1848(undefined8 param_1,int param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7,uint param_8)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  undefined4 uStack_e0;
  
  lVar2 = fn_82F6A53C();
  dVar15 = (double)(longlong)in_stack_00000074;
  dVar20 = (double)(longlong)in_stack_0000006c;
  iVar3 = (int)lVar2;
  iVar1 = iVar3 >> 1;
  uVar12 = 0;
  if (0 < param_2) {
    uVar5 = (ulonglong)in_stack_00000054;
    uVar10 = (ulonglong)in_stack_0000005c;
    lVar6 = param_6 - uVar5;
    uStack_e0 = in_stack_0000006c >> 0x1f;
    uVar7 = (ulonglong)uStack_e0;
    uVar9 = (ulonglong)uStack_e0;
    dVar16 = -dVar20;
    lVar11 = 0;
    dVar17 = lbl_82005710;
    dVar18 = lbl_82110F68;
    dVar19 = lbl_82005730;
    do {
      dVar21 = dVar15 - (double)(longlong)(int)uVar12;
      if (dVar16 <= dVar21) {
        if (dVar21 <= dVar20) {
          dVar14 = (double)fn_82F65D50(dVar21 / dVar20);
          uVar7 = -(ulonglong)(uint)(int)((dVar14 * dVar20 - dVar21) + dVar19);
          uVar9 = -(ulonglong)(uint)(int)(((dVar18 - dVar14) * dVar20 - dVar21) + dVar19);
          if ((longlong)(uVar9 + uVar12) < 0) {
            if ((longlong)(uVar7 + uVar12) < 0) goto LAB_82cc1924;
            if (dVar21 <= dVar17) goto LAB_82cc190c;
            iVar8 = 1;
            lVar4 = (longlong)(int)uVar7 * (longlong)iVar3 + lVar11 + param_3;
          }
          else {
            iVar8 = 1;
            lVar4 = (longlong)(int)uVar9 * (longlong)iVar3 + lVar11 + param_3;
          }
        }
        else {
LAB_82cc1924:
          iVar8 = 2;
          lVar4 = lVar6 + uVar5;
        }
      }
      else {
LAB_82cc190c:
        iVar8 = 0;
        lVar4 = lVar6 + (param_3 - param_6) + uVar5;
      }
      fn_82F68CC0(uVar5,lVar4,lVar2);
      if ((uVar12 & 1) == 0) {
        lVar4 = (longlong)((int)uVar12 >> 1) * (longlong)iVar1;
        if (iVar8 == 1) {
          if ((longlong)(uVar9 + uVar12) < 0) {
            iVar8 = (int)uVar7;
          }
          else {
            iVar8 = (int)uVar9;
          }
          lVar13 = (longlong)(iVar8 >> 1) * (longlong)iVar1 + lVar4;
          fn_82F68CC0(lVar4 + uVar10,lVar13 + param_4,iVar1);
          lVar13 = lVar13 + param_5;
        }
        else if (iVar8 == 0) {
          fn_82F68CC0(lVar4 + uVar10,lVar4 + param_4,iVar1);
          lVar13 = lVar4 + param_5;
        }
        else {
          if (iVar8 != 2) goto code_r0x82cc1a50;
          fn_82F68CC0(lVar4 + uVar10,lVar4 + param_7,iVar1);
          lVar13 = lVar4 + (ulonglong)param_8;
        }
        fn_82F68CC0(lVar4 + (ulonglong)in_stack_00000064,lVar13,iVar1);
      }
code_r0x82cc1a50:
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + lVar2;
      uVar5 = uVar5 + lVar2;
    } while ((int)uVar12 < param_2);
  }
  fn_82F6A588();
  return;
}

