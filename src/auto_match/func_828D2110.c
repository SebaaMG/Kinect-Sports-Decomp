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
extern unsigned int *auStack_58;
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_82880C60();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_8289F3A8();
extern int fn_828A39C0();
extern int fn_828ACBD0();
extern int fn_828ACC80();
extern int fn_828ACCE8();
extern int fn_828ACD00();
extern int fn_828ACDB8();
extern int fn_828AEBC0();
extern int fn_828AEBC8();
extern int fn_828AEBD8();
extern int fn_828AEC00();
extern int fn_828AEC70();
extern int fn_828AECC0();
extern int fn_828AF090();
extern int fn_828AF610();
extern int fn_828BE158();
extern int fn_828C8058();
extern int fn_828C8300();
extern int fn_828D9D58();
extern int fn_82A4AAA8();
extern int fn_82F63CA0();
extern unsigned int iStack00000044;
extern unsigned int iStack_60;
extern unsigned int stack0x00000044;


ulonglong fn_828D2110(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int *piVar6;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar9;
  int *piVar10;
  char cVar11;
  int iStack00000044;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  int iStack_60;
  char cStack_5c;
  undefined1 auStack_58 [88];
  
  iVar9 = (int)param_7;
  iStack00000044 = iVar9;
  piVar6 = (int *)fn_8289F2E0();
  uVar2 = (**(code **)(*piVar6 + 0xc))();
  fn_8289D8D0(param_1);
  if ((param_3 & 0xffffffff) < 4) {
    if ((int)param_3 == 0) {
      cVar11 = fn_828ACD00(param_1);
      if (cVar11 == '\0') {
        uVar3 = fn_8289D8D0(param_1);
        if ((uVar3 & 0xffffffff) == 0) {
          return uVar3;
        }
        piVar6 = *(int **)(param_1 + 0x1e0);
        if (piVar6 != *(int **)(param_1 + 0x1e4)) {
          do {
            if (*piVar6 == iVar9) {
              puVar7 = (undefined4 *)fn_828AF090(auStack_58,param_1 + 0x1e0);
              piVar6 = (int *)*puVar7;
            }
            else {
              piVar6 = piVar6 + 1;
            }
          } while (piVar6 != *(int **)(param_1 + 0x1e4));
        }
        iVar9 = fn_8289F350(param_1,param_7);
        if (iVar9 == 0) {
          iVar9 = fn_8289F3A8(param_1,param_6);
          if (iVar9 != 0) {
            fn_828C8058(param_1,3);
            return 1;
          }
          fn_828C8300(&iStack_60,param_1 + 0x268,&stack0x00000044);
          if (cStack_5c != '\0') {
            fn_82880C60(0,param_4,param_5);
            fn_828A39C0(param_1,param_6);
            uVar3 = fn_8265C9E0(0xd0);
            if ((uVar3 & 0xffffffff) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = fn_828AF610(uVar3,param_1,param_8,param_5,param_6,param_7,param_4,
                                      in_stack_00000054);
            }
            fn_8289D8D0(param_1);
            iVar9 = fn_823AA970();
            iVar8 = fn_823AA970(uVar2);
            if (iVar8 < iVar9) {
              uVar3 = fn_8265C9E0(0x98);
              if ((uVar3 & 0xffffffff) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = fn_828D9D58(uVar3,0);
              }
              fn_82886518(uVar4,0xffffffffffffffff,0xffffffffffffffff);
              uVar5 = fn_82897BD0(uVar2);
              fn_828BE158(param_1,uVar4,uVar5,0);
              fn_828AEC70(uVar2);
              return 1;
            }
          }
        }
        else {
          iVar9 = fn_8240D928();
          if (iVar9 != (int)param_6) {
            fn_828C8058(param_1,4);
            return 1;
          }
        }
      }
    }
    else if (param_3 == 1) {
      piVar6 = *(int **)(param_1 + 0x1e0);
      if (piVar6 != *(int **)(param_1 + 0x1e4)) {
        piVar10 = piVar6 + 1;
        do {
          if (*piVar6 == iVar9) {
            fn_82F63CA0(piVar6,piVar10,(*(int *)(param_1 + 0x1e4) - (int)piVar10 >> 2) << 2);
            *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + -4;
          }
          else {
            piVar6 = piVar6 + 1;
            piVar10 = piVar10 + 1;
          }
        } while (piVar6 != *(int **)(param_1 + 0x1e4));
        return 1;
      }
    }
    else if (param_3 == 2) {
      iVar9 = fn_8289D8D0(param_1);
      if (iVar9 != 0) {
        fn_8289D8D0(param_1);
        cVar11 = fn_8289DAD0();
        if (((cVar11 != '\0') && (iVar9 = fn_82A4AAA8(uVar2), iVar9 == 0)) &&
           (cVar11 = fn_828AEBC0(uVar2), cVar11 == '\0')) {
          fn_828AEBC8(uVar2);
          return 1;
        }
      }
    }
    else {
      piVar6 = (int *)fn_8289F350(param_1,param_7);
      iVar9 = fn_8289D8D0(param_1);
      if ((iVar9 == 0) || (piVar10 = (int *)fn_8289D8D0(param_1), piVar6 != piVar10)) {
        if (piVar6 == (int *)0x0) {
          fn_8257A9F0(param_1 + 600,&stack0x00000044);
          return 1;
        }
        cVar11 = fn_828ACCE8(param_1);
        if ((cVar11 == '\0') && (cVar11 = fn_828ACC80(param_1), cVar11 == '\0')) {
          (**(code **)(*piVar6 + 0xc))(piVar6);
          fn_828AEBD8();
          return 1;
        }
        (**(code **)(*piVar6 + 0xc))(piVar6);
        iVar9 = fn_82A4AAA8();
        if (iVar9 == 0) {
          uVar2 = (**(code **)(*piVar6 + 0xc))(piVar6);
          fn_828AECC0(uVar2,1);
        }
      }
      else {
        iVar9 = fn_828ACBD0(param_1);
        if (iVar9 == 3) {
          (**(code **)(*piVar6 + 0x14))(piVar6);
          fn_828ACDB8(param_1,4);
          iStack_60 = **(int **)(param_1 + 0x230);
          if ((int *)iStack_60 != *(int **)(param_1 + 0x230)) {
            do {
              uVar1 = *(undefined4 *)(iStack_60 + 0x10);
              cVar11 = fn_828AEC00(uVar1);
              if ((cVar11 != '\0') && (iVar9 = fn_82A4AAA8(uVar1), iVar9 == 0)) {
                fn_828AECC0(uVar1,1);
              }
              fn_82381BC0(&iStack_60);
            } while (iStack_60 != *(int *)(param_1 + 0x230));
            return 1;
          }
        }
      }
    }
  }
  return 1;
}

