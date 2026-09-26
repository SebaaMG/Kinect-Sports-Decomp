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
extern int fn_8304D6C8();


undefined8 fn_83048088(int param_1,uint *param_2)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)(param_1 + 0x3c);
  uVar7 = (uint)uVar1 * *param_2;
  if (*(short *)(param_1 + 0x1c) == 1) {
    iVar6 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  uVar4 = iVar6 - *(int *)(param_1 + 0x28);
  if (uVar4 < uVar7) {
    trapWord(6,(ulonglong)uVar1,0);
    *param_2 = uVar4 / uVar1;
    uVar7 = uVar4;
  }
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0x3c);
  trapWord(6,uVar3,0);
  trapWord(6,uVar3,0);
  fn_8304D6C8(param_1,((ulonglong)*(uint *)(param_1 + 0x28) -
                           (ulonglong)*(uint *)(param_1 + 0x38) & 0xffffffff) / uVar3,*param_2,
                  *(uint *)(param_1 + 0x34) / uVar3);
  iVar5 = *(int *)(param_1 + 0x28) + uVar7;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == iVar6) {
    sVar2 = *(short *)(param_1 + 0x1c);
    if (sVar2 == 1) {
      return 0x11;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x1c) = sVar2 + -1;
      return 0x2d;
    }
  }
  return 0x2d;
}

