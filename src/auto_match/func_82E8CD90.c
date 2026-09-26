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
extern int fn_82E83AC0();
extern int fn_82E859B0();
extern int fn_82E866E8();
extern int fn_82E86EF8();
extern int fn_82E86F80();
extern int fn_82E89640();
extern int fn_82EF6A40();
extern int fn_82F07248();
extern int fn_82F0F9A0();
extern int fn_82F1DDA0();
extern int fn_82F65350();
extern int fn_82F691F0();


void fn_82E8CD90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  ulonglong uVar6;
  
  fn_82E83AC0(param_1,*(undefined4 *)(param_1 + 0x2a4));
  fn_82F1DDA0(param_1,*(undefined4 *)(param_1 + 0x588));
  uVar3 = fn_82EF6A40(param_1,*(undefined4 *)(param_1 + 0x588));
  *(undefined4 *)(param_1 + 0x51a4) = uVar3;
  if (*(int *)(param_1 + 0x978) != 0) {
    fn_82F07248(param_1);
  }
  if ((*(int *)(param_1 + 0x7b38) != 0) || (*(int *)(param_1 + 0x6d54) == 0)) {
    fn_82E859B0(param_1);
  }
  if (*(int *)(param_1 + 0xa58) == 0) {
    *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_1 + 0xa20);
  }
  if (*(int *)(param_1 + 0xa04) != 0) {
    if ((*(int *)(param_1 + 0x1a80) == 0) || (*(int *)(param_1 + 0x6de8) == 1)) {
      if ((*(int *)(param_1 + 0xa58) != 0) && (*(int *)(param_1 + 0x4f20) != 0)) {
        fn_82E866E8(param_1);
      }
    }
    else {
      uVar4 = fn_82F65350();
      *(uint *)(param_1 + 0xa1c) = uVar4 & 3;
    }
    if (*(int *)(param_1 + 0xa40) < *(int *)(param_1 + 0xa1c)) {
      *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa40);
    }
    fn_82E86EF8(param_1,*(undefined4 *)(param_1 + 0xa1c));
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    *(undefined4 *)(param_1 + 0xa44) = *(undefined4 *)(param_1 + 0xa1c);
  }
  else if (*(int *)(param_1 + 0x6de4) == 0) {
    *(undefined4 *)(param_1 + 0xa48) = *(undefined4 *)(param_1 + 0xa1c);
  }
  else {
    *(undefined4 *)(param_1 + 0xa4c) = *(undefined4 *)(param_1 + 0xa1c);
  }
  if (*(int *)(param_1 + 0x6d90) == 0) {
    uVar3 = (**(code **)(param_1 + 0x1b90))(param_1);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x6d8c);
    *(undefined4 *)(param_1 + 0x6d8c) = 0;
    uVar3 = (**(code **)(param_1 + 0x1b90))();
    *(undefined4 *)(param_1 + 0x4c00) = uVar3;
    *(undefined4 *)(param_1 + 0x6d8c) = 1;
    uVar3 = (**(code **)(param_1 + 0x1b90))(param_1);
    *(undefined4 *)(param_1 + 0x6d8c) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x4c00) = uVar3;
  if (*(int *)(param_1 + 0xa04) != 0) {
    fn_82E86F80(param_1);
  }
  if ((-1 < *(int *)(param_1 + 0x69c)) && (-1 < *(int *)(param_1 + 0x6a0))) {
    if (*(int *)(param_1 + 0x6d64) == 0) {
      sVar5 = (-(ushort)(*(int *)(param_1 + 0x6de4) != 0) & 0xfffe) + 1;
    }
    else {
      sVar5 = 0;
    }
    uVar6 = 0;
    if ((*(uint *)(param_1 + 0x2d0) & 0x7fffffff) != 0) {
      do {
        iVar2 = (int)((((longlong)*(int *)(param_1 + 0x69c) * (longlong)*(int *)(param_1 + 0x2d0) &
                       0x3fffffffU) * 4 + uVar6 & 0xffffffff) << 1);
        if (*(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) = sVar5;
        }
        iVar2 = (int)((((longlong)(*(int *)(param_1 + 0x69c) * 2 + 1) *
                        (longlong)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) * 2 + uVar6 & 0xffffffff)
                     << 1);
        if (*(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) = sVar5;
        }
        iVar2 = (int)((((longlong)*(int *)(param_1 + 0x6a0) * (longlong)*(int *)(param_1 + 0x2d0) &
                       0x3fffffffU) * 4 + uVar6 & 0xffffffff) << 1);
        if (*(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) = sVar5;
        }
        iVar2 = (int)((((longlong)(*(int *)(param_1 + 0x6a0) * 2 + 1) *
                        (longlong)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) * 2 + uVar6 & 0xffffffff)
                     << 1);
        if (*(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) != 0x4000) {
          *(short *)(iVar2 + *(int *)(param_1 + 0x9f4)) = sVar5;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < ((ulonglong)*(uint *)(param_1 + 0x2d0) & 0x7fffffff) << 1);
    }
  }
  if ((*(int *)(param_1 + 0x7984) != 0) && (*(int *)(param_1 + 0x4f2c) == 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0x79a0),0,*(undefined4 *)(param_1 + 0x2d4));
  }
  if ((*(int *)(param_1 + 0x1be4) == 0) || (param_2 == 0)) {
    fn_82F0F9A0(param_1,1);
    fn_82E89640(param_1,*(undefined4 *)(param_1 + 0x2a4));
  }
  return;
}

