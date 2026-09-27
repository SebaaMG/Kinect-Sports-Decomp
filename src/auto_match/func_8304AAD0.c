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
extern unsigned int *auStack_70;
extern unsigned int fStack_90;
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_8304D8A0();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern float lbl_8200DFF4;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_3e;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_6c;
extern unsigned int uStack_6e;
extern unsigned int uStack_80;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_8304AAD0(int param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  uint uStack_a0;
  float fStack_90;
  int iStack_8c;
  int iStack_88;
  undefined1 uStack_80;
  undefined1 auStack_70 [2];
  ushort uStack_6e;
  uint uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ushort uStack_3e;
  
  uStack_a0 = 0;
  iVar2 = fn_8304D8A0(param_2,param_3,auStack_70,0x34,param_1 + 0x10,
                          (undefined4 *)(param_1 + 0x20),(undefined4 *)(param_1 + 0x24),&uStack_b0);
  if (iVar2 == 1) {
    uVar3 = (0x20 - (ulonglong)uStack_6e & 0xffffff) << 8;
    uVar4 = 0x1f00;
    if (uVar3 < 0x1f01) {
      uVar4 = uVar3;
    }
    *(uint *)(param_1 + 0x58) = uStack_b0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x78) = uStack_58;
    *(undefined4 *)(param_1 + 0x24) = uStack_58;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x54) = uStack_ac;
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(*(int *)(param_1 + 8) + 0xd4);
    *(uint *)(param_1 + 0x3c) = (uint)uStack_3e;
    *(undefined4 *)(param_1 + 0x40) = uStack_54;
    if (uStack_a0 != 0) {
      uVar3 = fn_82FA5060(lbl_831BC770,(ulonglong)uStack_3e << 2);
      *(int *)(param_1 + 0x38) = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return 0x34;
      }
      fn_82A1DDC0(uVar3,(ulonglong)uStack_a0 + param_2,*(int *)(param_1 + 0x3c) << 2);
      *(undefined4 *)(param_1 + 0x44) = 0;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),&fStack_90);
      fStack_90 = (float)((double)uStack_6c * (double)uStack_b0) /
                  ((float)*(uint *)(param_1 + 0x78) * lbl_8200DFF4);
      iVar2 = (int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
      uStack_a8 = ((((U64)(uStack_a8)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)iVar2)) & ((U64)0xFF)) << 56));
      uStack_80 = (undefined1)uStack_a8;
      uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 0xd4);
      if ((uVar1 == 0) || (1 < uVar1)) {
        iStack_8c = *(int *)(param_1 + 0x54);
        iStack_88 = iStack_8c + *(int *)(param_1 + 0x58);
      }
      else {
        iStack_8c = 0;
        iStack_88 = 0;
      }
      uStack_a8 = (longlong)iVar2;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),&fStack_90);
      *(undefined1 *)(param_1 + 0x51) = 2;
      trapWord(6,(ulonglong)uStack_6e << 1,0);
      *(char *)(param_1 + 0x50) = (char)uStack_6e;
      *(int *)(param_1 + 0x4c) = (int)(uVar4 / ((ulonglong)uStack_6e << 1));
      *(uint *)(param_1 + 0x48) = uStack_6c;
      return 1;
    }
  }
  return 7;
}

