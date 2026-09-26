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
extern unsigned int *auStack_3c;
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_828ACC68();
extern int fn_828BE158();
extern int fn_828D2040();
extern int fn_828D25A8();
extern int fn_828DA2A8();
extern int fn_828DB600();
extern int fn_828DB668();
extern int fn_82A4AAA8();
extern int fn_82F622E0();
extern unsigned int iStack_40;


void fn_828DB8F8(int param_1,undefined8 param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar7;
  int *piVar8;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar10;
  longlong lVar6;
  int iVar9;
  int iStack_40;
  undefined4 auStack_3c [15];
  
  if (param_3 == 0) {
    iVar9 = fn_8289D8D0(param_1);
    if (iVar9 != 0) {
      fn_8289D8D0(param_1);
      cVar10 = fn_8289DAD0();
      if (cVar10 != '\0') {
        uVar4 = fn_8265C9E0(0x98);
        if ((uVar4 & 0xffffffff) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = fn_828DB600(uVar4,1);
        }
        iStack_40 = **(int **)(param_1 + 0x230);
        if ((int *)iStack_40 != *(int **)(param_1 + 0x230)) {
          do {
            uVar1 = *(undefined4 *)(iStack_40 + 0x10);
            iVar9 = fn_82A4AAA8(uVar1);
            if ((iVar9 != 2) && (iVar9 = fn_82897BD0(uVar1), iVar9 != (int)param_2)) {
              auStack_3c[0] = fn_823AA970(uVar1);
              fn_8257A9F0(lVar6 + 0x84,auStack_3c);
            }
            fn_82381BC0(&iStack_40);
          } while (iStack_40 != *(int *)(param_1 + 0x230));
        }
        fn_82886518(lVar6,0xffffffffffffffff,0xffffffffffffffff);
        fn_828BE158(param_1,lVar6,param_2,0);
        fn_828DA2A8(param_1,param_2);
      }
    }
  }
  else if (param_3 == 1) {
    cVar10 = fn_828ACC68(param_1);
    if ((cVar10 != '\0') && (*(char *)(param_1 + 0x1dc) == '\0')) {
      fn_828DB668(param_1 + 0x1e0,param_4);
      *(undefined1 *)(param_1 + 0x1dc) = 1;
      piVar7 = (int *)*param_4;
      if (((param_4[1] - (int)piVar7 & 0xfffffffcU) != 0) && (piVar7 != (int *)param_4[1])) {
        do {
          iVar9 = *piVar7;
          uVar4 = fn_8265C9E0(0x98);
          if ((uVar4 & 0xffffffff) == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = fn_828DB600(uVar4,2);
          }
          iStack_40 = iVar9;
          fn_8257A9F0(lVar6 + 0x84,&iStack_40);
          fn_82886518(lVar6,0xffffffffffffffff,0xffffffffffffffff);
          fn_828BE158(param_1,lVar6,param_2,0);
          piVar7 = piVar7 + 1;
        } while (piVar7 != (int *)param_4[1]);
      }
    }
  }
  else if (param_3 < 3) {
    if (param_4[1] - *param_4 >> 2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F622E0(0xffffffff821ae698);
    }
    uVar1 = *(undefined4 *)*param_4;
    piVar7 = (int *)fn_8289F350(param_1,uVar1);
    piVar8 = (int *)fn_8289F2E0(param_1,param_2);
    uVar2 = (**(code **)(*piVar8 + 0xc))();
    if (piVar7 == (int *)0x0) {
      uVar4 = fn_8265C9E0(0xd8);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_828D2040(uVar4,1,uVar1);
      }
      fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
      fn_828BE158(param_1,uVar2,param_2,0);
    }
    else {
      uVar3 = (**(code **)(*piVar7 + 0xc))(piVar7);
      uVar4 = fn_8265C9E0(0xd8);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_828D25A8(uVar4,0,uVar3);
      }
      fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      uVar5 = fn_82897BD0(uVar2);
      fn_828BE158(param_1,uVar3,uVar5,0);
      uVar4 = fn_8265C9E0(0xd8);
      if ((uVar4 & 0xffffffff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_828D25A8(uVar4,0,uVar2);
      }
      fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
      uVar3 = fn_82897BD0(piVar7);
      fn_828BE158(param_1,uVar2,uVar3,0);
    }
  }
  return;
}

