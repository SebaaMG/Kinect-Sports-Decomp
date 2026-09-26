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
extern unsigned int *auStack_440;
extern int fn_82265420();
extern int fn_822676A0();
extern int fn_82267890();
extern int fn_82267E00();
extern int fn_82268470();
extern int fn_822689B8();
extern int fn_82522ED8();
extern int fn_82537458();
extern int fn_82537B80();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E658();
extern int fn_82A1E740();
extern int fn_82A81B88();
extern int fn_82A81CD0();


void fn_822686B0(undefined8 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar6;
  ulonglong uVar4;
  int iVar7;
  undefined8 uVar5;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  undefined1 auStack_440 [1088];
  
  if (*(int *)(param_2 + 0x628) == 1) {
    cVar8 = fn_82537458(param_2 + 0x5dc,0);
    if (cVar8 != '\0') {
      fn_822689B8(param_2);
      fn_82268470(param_2);
    }
  }
  else if (*(int *)(param_2 + 0x628) == 2) {
    bVar3 = true;
    uVar9 = 0;
    piVar11 = (int *)(param_2 + 0x61c);
    iVar10 = param_2;
    do {
      iVar7 = *piVar11;
      if (iVar7 != 0) {
        if (*(int *)(iVar7 + 0x20) == 0) {
LAB_82268734:
          bVar2 = true;
        }
        else {
          iVar6 = fn_82A1E740(iVar7,0,0);
          if (iVar6 != 0x3e4) {
            *(int *)(iVar7 + 0x1c) = iVar6;
            goto LAB_82268734;
          }
          bVar2 = false;
        }
        if (bVar2) {
          uVar4 = fn_82537B80(*piVar11);
          *(int *)(iVar10 + 0xd0) = (int)uVar4;
          if (((uVar4 & 0xffffffff) == 0) ||
             (iVar7 = fn_82A81CD0(uVar4,0xffffffff832760c0), iVar7 != 0)) {
            fn_82A81B88(3,1,auStack_440,0);
            *(undefined1 **)(iVar10 + 0xd0) = auStack_440;
          }
          iVar7 = *(int *)(param_2 + 0x5c0);
          uVar4 = fn_8265C9E0(0x640);
          if ((uVar4 & 0xffffffff) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = fn_82265420(uVar4,iVar10,*(undefined4 *)(iVar7 + 0x6c),iVar7 + 0x70,
                                  *(undefined4 *)(iVar7 + 0x68));
          }
          fn_822676A0(iVar7,uVar5,iVar10);
          fn_82267E00((double)(float)piVar11[-0x27],*(undefined4 *)(param_2 + 0x5c0),uVar9);
          piVar1 = (int *)*piVar11;
          if (piVar1 != (int *)0x0) {
            if (piVar1[8] != 0) {
              if (*piVar1 == 0x3e5) {
                fn_82A1C0F0(piVar1);
              }
              fn_82522ED8(piVar1[8]);
            }
            fn_82A1E658(piVar1[3]);
            if (piVar1[9] != 0) {
              fn_8265CA20();
            }
            piVar1[9] = 0;
            piVar1[10] = 0;
            piVar1[0xb] = 0;
            fn_8265CA20(piVar1);
          }
          *piVar11 = 0;
        }
        else {
          bVar3 = false;
        }
      }
      uVar9 = uVar9 + 1;
      piVar11 = piVar11 + 1;
      iVar10 = iVar10 + 0xf0;
    } while ((uVar9 & 0xffffffff) < 3);
    if (bVar3) {
      *(undefined4 *)(param_2 + 0x628) = 3;
    }
  }
  fn_82267890(param_1,*(undefined4 *)(param_2 + 0x5c0));
  return;
}

