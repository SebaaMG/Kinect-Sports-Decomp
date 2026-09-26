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
extern int fn_8265C940();
extern int fn_8265C990();
extern unsigned int *lbl_83248EC4;


void fn_82ED3E48(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar7;
  longlong lVar6;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  uVar1 = ((ulonglong)*(uint *)(param_1 + 0x4024) + 0xf & 0xffffffff) >> 4;
  uVar2 = ((ulonglong)*(uint *)(param_1 + 0x4020) + 0xf & 0xffffffff) >> 4;
  uVar3 = ((ulonglong)*(uint *)(param_1 + 0x4020) + 1 & 0xffffffff) >> 1;
  if (*(int *)(param_1 + 8) != 0) {
    fn_8265C990(*(int *)(param_1 + 8),0x248c8000);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar4 = *(int *)(param_1 + 0x4018) >> 2;
  puVar5 = (undefined1 *)
           fn_8265C940((longlong)(int)uVar4 + ((ulonglong)uVar4 & 0x7fffffff) * 2,0x248c8000);
  *(undefined1 **)(param_1 + 8) = puVar5;
  puVar15 = puVar5 + (*(int *)(param_1 + 0x4018) >> 2);
  puVar14 = puVar5 + (*(int *)(param_1 + 0x4018) >> 1);
  iVar9 = 0;
  iVar10 = (int)uVar1;
  if (iVar10 != 0) {
    lVar8 = (uVar3 & 0x1fffffff) * 8 - uVar3;
    do {
      iVar12 = 0;
      iVar11 = (int)uVar2;
      if (iVar11 != 0) {
        do {
          if (iVar12 == iVar11 + -1) {
            lVar13 = (ulonglong)*(uint *)(param_1 + 0x4020) + uVar2 * -0x10 + 0x10;
          }
          else {
            lVar13 = 0x10;
          }
          if (iVar9 == iVar10 + -1) {
            iVar7 = (*(int *)(param_1 + 0x4024) - (int)(uVar1 << 4)) + 0x10;
          }
          else {
            iVar7 = 0x10;
          }
          if (((int)lVar13 == 0x10) && (iVar7 == 0x10)) {
            (**(code **)(*lbl_83248EC4 + 8))
                      (lbl_83248EC4,puVar5,param_2,0,*(undefined4 *)(param_1 + 0x4020));
            (**(code **)(*lbl_83248EC4 + 4))(lbl_83248EC4,puVar15,param_3,0,uVar3);
            (**(code **)(*lbl_83248EC4 + 4))(lbl_83248EC4,puVar14,param_4,0,uVar3);
          }
          else {
            *puVar5 = *(undefined1 *)param_2;
            *puVar15 = *(undefined1 *)param_3;
            *puVar14 = *(undefined1 *)param_4;
          }
          lVar6 = (longlong)((int)lVar13 >> 1);
          iVar12 = iVar12 + 1;
          param_2 = lVar13 + param_2;
          param_3 = lVar6 + param_3;
          param_4 = lVar6 + param_4;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        } while (iVar12 < iVar11);
      }
      iVar9 = iVar9 + 1;
      param_3 = lVar8 + param_3;
      param_4 = lVar8 + param_4;
      param_2 = (((ulonglong)*(uint *)(param_1 + 0x4020) & 0xfffffff) * 0x10 -
                (ulonglong)*(uint *)(param_1 + 0x4020)) + param_2;
    } while (iVar9 < iVar10);
  }
  return;
}

