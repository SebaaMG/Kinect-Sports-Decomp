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
extern int fn_82FAB9C0();
extern int fn_82FFBD98();
extern int fn_82FFBE88();
extern int fn_82FFCDE0();
extern int fn_82FFF908();
extern int fn_82FFF990();
extern int fn_8302B618();
extern unsigned int lbl_832642E0;
extern unsigned int uStack00000040;


undefined8
fn_82FFD050(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  int iVar1;
  int *piVar3;
  ulonglong uVar2;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  ulonglong uStack00000040;
  
  uVar5 = 1;
  uStack00000040 = param_6;
  piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x674,param_7);
  uVar2 = uStack00000040;
  if (piVar3 == (int *)0x0) {
    uVar5 = 0xf;
  }
  else {
    if (piVar3[7] == 0) {
      piVar4 = (int *)piVar3[4];
      if (piVar4 != (int *)piVar3[5]) {
LAB_82ffd0c4:
        iVar1 = *piVar4;
        if ((*(uint *)(iVar1 + 0x14) & 0xffffff00) != 0x401100) goto LAB_82ffd120;
        uVar5 = fn_82FFCDE0(param_1,param_2,param_3,param_4,param_5,uVar2 & 0xffffffff00000000,
                              *(undefined4 *)(iVar1 + 0x1c),2);
        if ((int)uVar5 == 1) {
          uVar5 = fn_82FFF908(*(undefined4 *)(iVar1 + 0x10));
          if ((int)uVar5 == 1) goto LAB_82ffd120;
          fn_82FFBE88(param_1,*(undefined4 *)(iVar1 + 0x1c),0,0);
        }
        for (piVar6 = (int *)piVar3[4]; piVar6 != piVar4; piVar6 = piVar6 + 1) {
          iVar1 = *piVar6;
          if ((*(uint *)(iVar1 + 0x14) & 0xffffff00) == 0x401100) {
            fn_82FFF990(*(undefined4 *)(iVar1 + 0x10));
            uVar2 = fn_8302B618(param_1 + 0x39c,*(undefined4 *)(iVar1 + 0x1c));
            if ((uVar2 & 0xffffffff) != 0) {
              fn_82FFBD98(uVar2,0);
            }
          }
        }
LAB_82ffd198:
        if ((int)uVar5 == 1) goto LAB_82ffd1a0;
        goto LAB_82ffd1c0;
      }
LAB_82ffd1a0:
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    piVar3[7] = piVar3[7] + 1;
LAB_82ffd1c0:
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return uVar5;
LAB_82ffd120:
  piVar4 = piVar4 + 1;
  if (piVar4 == (int *)piVar3[5]) goto LAB_82ffd198;
  goto LAB_82ffd0c4;
}

