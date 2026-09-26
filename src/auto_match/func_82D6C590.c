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
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_260;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D6C590(int param_1,undefined4 *param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar4;
  ulonglong uVar3;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined1 auStack_270 [16];
  int iStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  undefined1 auStack_250 [592];
  
  uStack_258 = param_2[2];
  puStack_254 = param_2;
  piVar4 = (int *)(**(code **)(*(int *)*param_2 + 0x10))();
  uVar3 = (**(code **)(*piVar4 + 8))();
  iVar6 = (int)uVar3;
  do {
    if (iVar6 == -1) {
      return;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      puVar9 = *(uint **)(param_1 + 0xc);
      do {
        if ((ulonglong)*puVar9 == (uVar3 & 0xffffffff)) goto LAB_82d6c624;
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x10));
    }
    iVar6 = -1;
LAB_82d6c624:
    pcVar5 = (char *)(**(code **)(*(int *)(param_4[3] + 0xc) + 4))
                               (auStack_270,param_4[3] + 0xc,param_4,param_3,param_2,piVar4,uVar3);
    if (*pcVar5 == '\0') {
      if (iVar6 != -1) {
        piVar1 = *(int **)(iVar6 * 8 + *(int *)(param_1 + 0xc) + 4);
        (**(code **)(*piVar1 + 0x1c))(piVar1,param_5);
        iVar10 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar10;
        if (iVar10 != iVar6) {
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 8);
          iVar6 = (iVar10 * 8 + *(int *)(param_1 + 0xc)) - (int)puVar11;
          lVar12 = 2;
          do {
            *puVar11 = *(undefined4 *)(iVar6 + (int)puVar11);
            puVar11 = puVar11 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
    }
    else {
      iStack_260 = (**(code **)(*piVar4 + 0x14))(piVar4,uVar3,auStack_250);
      uVar7 = (undefined4)uVar3;
      uStack_25c = uVar7;
      if (iVar6 == -1) {
        iVar6 = fn_82CE5410();
        if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),(int *)(param_1 + 0xc),8);
        }
        iVar6 = *(int *)(param_1 + 0xc);
        iVar2 = *(int *)(param_1 + 0x10) * 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(undefined4 *)(iVar2 + iVar6) = uVar7;
        iVar10 = *param_4;
        iVar8 = iVar10 + 0x5a0;
        if (param_4[5] == 0) {
          iVar8 = iVar10 + 0x1a0;
        }
        uVar7 = (**(code **)((uint)*(byte *)(*(int *)(iStack_260 + 0xc) * 0x20 + iVar8 +
                                            *(int *)(*param_3 + 0xc)) * 0x14 + iVar10 + 0x9a0))
                          (&iStack_260,param_3,param_4,*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(iVar2 + iVar6 + 4) = uVar7;
      }
      else {
        piVar1 = *(int **)(iVar6 * 8 + *(int *)(param_1 + 0xc) + 4);
        (**(code **)(*piVar1 + 0x20))(piVar1,&iStack_260,param_3,param_4,param_5);
      }
    }
    uVar3 = (**(code **)(*piVar4 + 0xc))(piVar4,uVar3);
    iVar6 = (int)uVar3;
  } while( true );
}

