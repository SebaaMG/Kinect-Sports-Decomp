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
extern unsigned int *auStack_50;
extern int fn_8241CEB8();
extern int fn_824209C8();
extern int fn_82421000();
extern int fn_82421138();
extern int fn_82421270();
extern int fn_825200A8();


void fn_82420D98(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(**(int **)(param_1 + 0xc) + 0x174) == 2) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 900);
      for (uVar10 = *(uint *)(*(int *)(param_1 + 0x10) + 0x380); uVar10 < uVar1;
          uVar10 = uVar10 + 0xd0) {
        if (*(int *)(uVar10 + 0x94) != 0) {
          piVar2 = *(int **)(*(int *)(uVar10 + 0x94) + 0x8c0);
          if (piVar2 == (int *)0x0) {
            uVar5 = 0xffffffff82196288;
          }
          else {
            uVar5 = (**(code **)(*piVar2 + 0x20))();
          }
          if ((uVar5 & 0xffffffff) == 0) {
LAB_82420fa8:
            if ((((*(uint *)(uVar10 + 0x9c) & 1) != 0) &&
                (*(int *)(**(int **)(param_1 + 0xc) + 0x8a8) != 0)) &&
               (*(float *)(**(int **)(param_1 + 0xc) + 0x84c) < *(float *)(uVar10 + 0xa4))) {
              fn_82421270(param_1);
            }
          }
          else {
            uVar8 = ZEXT48(*(uint **)(param_1 + 0xc));
            lVar9 = 0xcc0;
            uVar7 = (ulonglong)**(uint **)(param_1 + 0xc);
            do {
              iVar6 = fn_825200A8(uVar5,lVar9 + uVar7);
              if (iVar6 != 0) {
                bVar4 = true;
                goto LAB_82420f1c;
              }
              lVar9 = lVar9 + 4;
            } while ((int)lVar9 < 0xce8);
            bVar4 = false;
LAB_82420f1c:
            if (bVar4) {
              uVar3 = *(uint *)uVar8;
              if ((*(int *)(uVar3 + 0x8a0) != 0) &&
                 (*(float *)(uVar3 + 0x83c) < *(float *)(uVar10 + 0xa4))) {
                fn_82421000(param_1);
              }
            }
            else {
              uVar7 = (ulonglong)*(uint *)uVar8;
              iVar6 = fn_825200A8(uVar5,uVar7 + 0xcbc);
              if (iVar6 == 0) goto LAB_82420fa8;
              if ((*(int *)((int)uVar7 + 0x8a4) != 0) &&
                 (*(float *)((int)uVar7 + 0x85c) < *(float *)(uVar10 + 0xa4))) {
                fn_82421138(param_1);
              }
            }
          }
        }
      }
    }
  }
  else {
    while (iVar6 = fn_8241CEB8(*(undefined4 *)(param_1 + 0xc),param_1,6), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421000((double)*(float *)(iVar6 + 0x10),param_1);
    }
    while (iVar6 = fn_8241CEB8(*(undefined4 *)(param_1 + 0xc),param_1,4), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421138((double)*(float *)(iVar6 + 0x10),param_1);
    }
    while (iVar6 = fn_8241CEB8(*(undefined4 *)(param_1 + 0xc),param_1,5), iVar6 != 0) {
      fn_824209C8(auStack_50,param_1);
      fn_82421270((double)*(float *)(iVar6 + 0x10),param_1);
    }
  }
  return;
}

