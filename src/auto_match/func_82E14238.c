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
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CFBBF0();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D00310();
extern int fn_82D00450();
extern int fn_82E0E658();
extern int fn_82E12FE0();
extern int fn_82E132A0();
extern int fn_82E14240();
extern int fn_82E1BC40();
extern int iRam831d0ea0;
extern unsigned int iStack_74;
extern unsigned int iStack_88;
extern unsigned int *lbl_8323FD9C;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;


/* WARNING: Removing unreachable block (ram,0x82e13e58) */

int * fn_82E14238(longlong param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char acStack_90 [4];
  int *piStack_8c;
  int iStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_78;
  int iStack_74;
  uint uStack_70;
  
  lVar8 = param_1 + 0x14;
  iVar3 = fn_82D00310(lVar8,param_2,&piStack_8c);
  piVar4 = piStack_8c;
  if (iVar3 != 0) {
    uVar1 = fn_82E0E658();
    uVar1 = fn_82D001D8(lVar8,uVar1);
    fn_82D002F0(acStack_90,lVar8,uVar1);
    if (acStack_90[0] == '\0') {
      uVar1 = (**(code **)(*lbl_8323FD9C + 0x10))();
      fn_82CE4040();
      uVar2 = fn_82E0E658();
      fn_82D000A0(lVar8,uVar2,uVar1);
    }
    piVar4 = (int *)0x0;
    piStack_8c = (int *)0x0;
    uVar1 = fn_82E0E658();
    iVar3 = fn_82CFBBF0(param_2,uVar1);
    if (iVar3 == 0) {
      fn_82E14240(lVar8,param_2,&piStack_8c);
      piVar4 = piStack_8c;
    }
    else {
      iStack_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0x80000000;
      uVar1 = fn_82E0E658();
      iVar3 = fn_82E132A0(param_1,param_2,uVar1,&iStack_88);
      if (iVar3 == 1) {
        iVar3 = fn_82CE5410();
        uStack_84 = 0;
        if ((uStack_80 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),iStack_88,uStack_80 & 0x3fffffff,4);
        }
        piVar4 = (int *)0x0;
      }
      else {
        uStack_70 = 0;
        piVar7 = (int *)0x831d0ea0;
        piVar5 = piVar7;
        iVar3 = iRam831d0ea0;
        while (iVar3 != 0) {
          piVar5 = piVar5 + 1;
          uStack_70 = uStack_70 + 1;
          iVar3 = *piVar5;
        }
        iStack_74 = 0;
        iVar3 = iRam831d0ea0;
        while (iVar3 != 0) {
          piVar7 = piVar7 + 1;
          iStack_74 = iStack_74 + 1;
          iVar3 = *piVar7;
        }
        uStack_70 = uStack_70 | 0x80000000;
        uStack_78 = 0x831d0ea0;
        uVar9 = (ulonglong)uStack_84 - 1;
        if (-1 < (longlong)uVar9) {
          lVar10 = (uVar9 & 0x3fffffff) << 2;
          do {
            iVar3 = (int)lVar10;
            uVar1 = fn_82D00450(lVar8,*(undefined4 *)(*(int *)(iVar3 + iStack_88) + 4),0);
            piVar4 = (int *)fn_82D00450(lVar8,**(undefined4 **)(iVar3 + iStack_88),0);
            if (piVar4 == (int *)0x0) {
              piVar5 = (int *)fn_82E12FE0(**(undefined4 **)(iVar3 + iStack_88),&uStack_78);
              iVar6 = fn_82CE5410();
              iVar6 = (**(code **)(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x4c);
              *(undefined2 *)(iVar6 + 4) = 0x4c;
              piVar4 = (int *)fn_82E1BC40(iVar6,**(undefined4 **)
                                                        (*(int *)(iVar3 + iStack_88) + 8),uVar1);
              iVar6 = *piVar4;
              uVar1 = (**(code **)(*piVar5 + 0xc))(piVar5);
              (**(code **)(iVar6 + 0x18))(piVar4,uVar1);
              (**(code **)(*piVar4 + 0x24))(piVar4,piVar5);
              uVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
              fn_82D000A0(lVar8,uVar1,piVar4);
            }
            iVar3 = fn_82CFBBF0(**(undefined4 **)(iVar3 + iStack_88),param_2);
            if (iVar3 == 0) break;
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + -4;
          } while (-1 < (longlong)uVar9);
        }
        fn_82CE5410();
        iVar3 = fn_82CE5410();
        uStack_84 = 0;
        if ((uStack_80 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),iStack_88,uStack_80 & 0x3fffffff,4);
        }
      }
    }
  }
  return piVar4;
}

