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
extern unsigned int *auStack_d0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA2F0();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CF1548();
extern int fn_82CFBC28();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


void fn_82CF2608(double param_1,undefined8 param_2,undefined8 param_3,int param_4,int *param_5,
                  int param_6,longlong param_7,int param_8,uint param_9,undefined8 param_10)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  undefined4 in_stack_00000064;
  uint auStack_d0 [2];
  ulonglong uStack_c8;
  int iStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&uStack_b0,*(undefined4 *)(iVar3 + 0x10),0);
  iVar9 = (int)param_10;
  uStack_c8 = (ulonglong)iVar9;
  iStack_c0 = 0;
  iStack_bc = 0;
  uStack_b8 = 0x80000000;
  dVar14 = (double)(float)(param_1 / (double)(longlong)uStack_c8);
  iVar3 = fn_82CE5410();
  if ((int)(uStack_b8 & 0x3fffffff) < iVar9) {
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&iStack_c0,param_10,4);
  }
  if (0 < *(int *)(*(int *)(param_4 * 4 + *param_5) + 0x34)) {
    iStack_bc = 0;
    fn_82CF1548(param_2,dVar14,*(undefined4 *)(param_4 * 4 + *param_5));
    iVar3 = iStack_bc;
    iVar8 = 0;
    if (0 < iStack_bc) {
      iVar10 = 0;
      do {
        if (iVar9 <= iVar8) break;
        uVar11 = 0xffffffffffffffff;
        iVar6 = *(int *)(iVar10 + iStack_c0);
        if (iVar6 != 0) {
          for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x48)) {
            uVar1 = *(undefined4 *)(iVar6 + 0x4c);
            iVar4 = fn_82CEA2F0(&uStack_b0,uVar1,&uStack_c8);
            if (iVar4 == 0) {
              uVar11 = uStack_c8 >> 0x20;
              break;
            }
            iVar4 = fn_82CEA2F0(in_stack_00000064,uVar1,auStack_d0);
            if (iVar4 == 0) {
              uVar11 = (ulonglong)auStack_d0[0];
            }
            else {
              bVar2 = false;
              iVar4 = 0;
              if (0 < *(int *)(param_8 + 0xc)) {
                iVar12 = 0;
                do {
                  iVar5 = fn_82CFBC28(*(uint *)(*(int *)(param_8 + 8) + iVar12) & 0xfffffffe,uVar1)
                  ;
                  if (iVar5 == 0) {
                    bVar2 = true;
                    uVar11 = (ulonglong)*(uint *)(iVar4 * 8 + *(int *)(param_8 + 8) + 4);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar12 = iVar12 + 8;
                } while (iVar4 < *(int *)(param_8 + 0xc));
              }
              if (bVar2) {
                iVar6 = fn_82CE5410();
                fn_82CEA160(&uStack_b0,*(undefined4 *)(iVar6 + 0x10),uVar1,uVar11);
                break;
              }
              iVar4 = fn_82CE5410();
              fn_82CEA160(in_stack_00000064,*(undefined4 *)(iVar4 + 0x10),uVar1,uVar11);
            }
          }
        }
        if (0 < (int)param_7) {
          puVar7 = (undefined4 *)(iVar10 + (param_9 & 0x3fffffff) * -4 + param_6);
          lVar13 = param_7;
          do {
            puVar7 = puVar7 + param_9;
            *puVar7 = (int)uVar11;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar8 < iVar3);
    }
  }
  iVar3 = fn_82CE5410();
  iStack_bc = 0;
  if ((uStack_b8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),iStack_c0,uStack_b8 & 0x3fffffff,4);
  }
  iStack_c0 = 0;
  uStack_b8 = 0x80000000;
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&uStack_b0,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(&uStack_b0);
  return;
}

