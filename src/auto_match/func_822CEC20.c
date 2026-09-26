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
extern int fn_822C72E0();
extern int fn_822D6D28();
extern int fn_82375CA8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8288B760();


undefined8 fn_822CEC20(int param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar3;
  int iVar4;
  char cVar5;
  longlong lVar2;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 auStack_50 [20];
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar3 = *(uint *)(param_1 + 0x16c);
  }
  else {
    uVar3 = fn_8288B760();
    uVar3 = uVar3 & 0xff;
  }
  if (uVar3 != 0) {
    if ((param_2 & 1) == 0) {
      uVar3 = (uint)param_2 & 2;
      if ((-uVar3 & ~uVar3) >> 0x1f != *(uint *)(param_1 + 0x2a4)) {
        fn_82375CA8(*(undefined4 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x2c),0);
      }
    }
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 4) == 0) {
        iVar4 = (int)param_4;
        if ((int)param_3 == 2) {
          if (iVar4 == 0) {
            uVar7 = 0xffffffff821ad324;
          }
          else {
            uVar7 = 0xffffffff821ad304;
          }
        }
        else if ((int)param_3 == 3) {
          if (iVar4 == 0) {
            uVar7 = 0xffffffff821ad35c;
          }
          else {
            uVar7 = 0xffffffff821ad33c;
          }
        }
        else if (iVar4 == 0) {
          uVar7 = 0xffffffff821ad234;
        }
        else {
          uVar7 = 0xffffffff821ad378;
        }
        if (iVar4 == 0) {
          auStack_50[0] = *(undefined4 *)(*(int *)(param_1 + 0x1c0) + 800);
          auStack_50[0] =
               fn_82535298(auStack_50,**(undefined4 **)(*(int *)(param_1 + 0x1c0) + 0x9b8),
                                 0xffffffff83296bc0,0xffffffff83296bd0);
          fn_82536288(auStack_50);
        }
        *(int *)(param_1 + 0x354) = iVar4;
      }
      else {
        uVar7 = 0xffffffff821ad250;
      }
    }
    else {
      uVar7 = 0xffffffff821ad244;
    }
    iVar4 = fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),uVar7);
    if (iVar4 != 0) {
      uVar6 = 1;
      piVar1 = *(int **)(param_1 + 0x168);
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c0) + 0x84);
      if ((((piVar1 != (int *)0x0) && (cVar5 = fn_8288B760(piVar1), cVar5 != '\0')) && (iVar4 != 0)
          ) && (piVar1[0x2f] != 0)) {
        lVar2 = (**(code **)(*piVar1 + 0x50))(piVar1);
        fn_822D6D28(lVar2 + 400,param_2,param_3,param_4 != 0);
      }
    }
  }
  iVar4 = (*(int *)(param_1 + 0x2c) * 2 + *(int *)(param_1 + 0x28)) * 0x88 +
          *(int *)(param_1 + 0x1c0) + 0xa14;
  *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
  return uVar6;
}

