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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D50B8();
extern int fn_827D5100();
extern int fn_827D5108();
extern int fn_827D5600();
extern int fn_827D6EF0();
extern int fn_827D9698();
extern int fn_827D9918();
extern int fn_827DF840();
extern int fn_827DFF58();
extern int fn_827E2598();
extern int fn_827E2790();
extern unsigned int iStack_54;
extern unsigned int uStack_58;


ulonglong fn_827E1E98(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar4;
  int iVar5;
  undefined8 uVar2;
  short sVar6;
  ulonglong uVar3;
  ulonglong uVar7;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [80];
  
  fn_827E2790(&uStack_58,*(undefined4 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x39) == '\0') {
    uVar7 = fn_827D50B8(uStack_58);
LAB_827e2158:
    if (((int)uVar7 == 0x3e5) || ((int)uVar7 == 0x3e4)) goto LAB_827e21d4;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar5 = fn_827D5100(uStack_58);
      if (iVar5 == 1) {
        if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
LAB_827e1fbc:
          if (iStack_54 != 0) {
            fn_822315A0();
          }
          return 0x3e5;
        }
        fn_827E2598(*(undefined4 *)(param_1 + 0x28));
        fn_827D9698();
        piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
        fn_82517978(auStack_50,uStack_58,iStack_54,0);
        (**(code **)(*piVar4 + 0xc))(piVar4,auStack_50,*(undefined4 *)(param_1 + 8));
        fn_827D9918(*(undefined4 *)(param_1 + 0x1c));
        *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))
                  (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x24) = 0;
        fn_827D5108(uStack_58,2);
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        uVar2 = fn_827D5600(param_2);
        fn_827DF840(uVar2,uVar1);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x44);
      }
      else {
        fn_82517978(auStack_50,uStack_58,iStack_54,0);
        uVar7 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                          (*(int **)(param_1 + 0x24),param_2,auStack_50);
        iVar5 = (int)uVar7;
        *(int *)(param_1 + 0x44) = iVar5;
        if (iVar5 == 0x3e5) goto LAB_827e21d4;
        if (iVar5 != 0x3e4) {
          if (iVar5 == 0) {
            fn_827E2598(*(undefined4 *)(param_1 + 0x28));
            fn_827D9698();
            piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
            fn_82517978(auStack_50,uStack_58,iStack_54,0);
            (**(code **)(*piVar4 + 8))(piVar4,auStack_50,*(undefined4 *)(param_1 + 8),param_1);
          }
          if (*(int *)(param_1 + 0x30) != 0) {
            fn_827D5108(uStack_58,1);
            goto LAB_827e1fbc;
          }
          if (iVar5 == 0) {
            fn_827E2598(*(undefined4 *)(param_1 + 0x28));
            fn_827D9698();
            piVar4 = (int *)fn_827D6EF0(param_2,auStack_60);
            fn_82517978(auStack_50,uStack_58,iStack_54,0);
            (**(code **)(*piVar4 + 0xc))(piVar4,auStack_50,*(undefined4 *)(param_1 + 8));
          }
          fn_827D9918(*(undefined4 *)(param_1 + 0x1c));
          *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))
                    (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
          *(undefined4 *)(param_1 + 0x24) = 0;
          uVar1 = *(undefined4 *)(param_1 + 0x28);
          uVar2 = fn_827D5600(param_2);
          fn_827DF840(uVar2,uVar1);
        }
      }
      goto LAB_827e2158;
    }
    uVar7 = 2;
    fn_827D5078(*(undefined4 *)(param_1 + 0xc),0);
  }
  iVar5 = fn_827D5100(uStack_58);
  if (iVar5 != 1) {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + 1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (((int)uVar7 != 0) && (iVar5 = *(int *)(param_1 + 0x28), iVar5 != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      uVar2 = fn_827D5600(param_2);
      sVar6 = fn_827DFF58(uVar2,iVar5,uVar1);
      if (sVar6 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
  }
LAB_827e21d4:
  if ((*(char *)(param_1 + 0x39) == '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    fn_82517978(auStack_50,uStack_58,iStack_54,0);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                      (*(int **)(param_1 + 0x24),param_2,auStack_50);
    if (((uVar3 & 0xffffffff) == 0x3e5) || ((uVar3 & 0xffffffff) == 0x3e4)) {
      if (iStack_54 == 0) {
        return uVar3;
      }
      fn_822315A0();
      return uVar3;
    }
    fn_827D9918(*(undefined4 *)(param_1 + 0x1c));
    *(char *)(param_1 + 0x49) = *(char *)(param_1 + 0x49) + '\x01';
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))
              (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return uVar7;
}

