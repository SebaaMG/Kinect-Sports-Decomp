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
extern unsigned int fStack_50;
extern int fn_8304D8A0();
extern unsigned int lbl_8217DB8C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_79;


undefined8 fn_8304C228(int param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 uStack_79;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  ushort uStack_64;
  struct { float first; undefined4 second; } stack_pair_50;

  undefined4 uStack_48;
  undefined1 uStack_40;
  
  puVar8 = (uint *)(param_1 + 0x24);
  uVar4 = fn_8304D8A0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),auStack_70
                          ,0x12,param_1 + 0x10,(uint *)(param_1 + 0x20),puVar8,
                          (int *)(param_1 + 0x2c));
  if ((int)uVar4 == 1) {
    iVar1 = *(int *)(param_1 + 0x30);
    uVar5 = iVar1 + *(int *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x5c) = (uint)uStack_64;
    if ((param_2 == 1) || (uVar2 = *puVar8, uVar2 == 0)) {
      *(int *)(param_1 + 0x4c) = iVar1;
      *(uint *)(param_1 + 0x50) = uVar5;
      trapWord(6,(ulonglong)uStack_64,0);
      *puVar8 = (uint)((ulonglong)(uVar5 - iVar1) / (ulonglong)(uint)uStack_64 << 6);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x20);
      uVar6 = (uVar3 >> 6) * (uint)uStack_64 + iVar1;
      uVar7 = (uVar2 + 1 >> 6) * (uint)uStack_64 + iVar1;
      *(uint *)(param_1 + 0x4c) = uVar6;
      *(uint *)(param_1 + 0x50) = uVar7;
      if (((uVar2 < uVar3) || (uVar5 < uVar6)) || (uVar5 < uVar7)) {
        return 7;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&stack_pair_50.first);
    stack_pair_50.first = (float)uStack_6c * (float)uStack_64 * lbl_8217DB8C;
    if ((param_2 == 0) || (1 < param_2)) {
      stack_pair_50.second = *(undefined4 *)(param_1 + 0x4c);
      uStack_48 = *(undefined4 *)(param_1 + 0x50);
    }
    uStack_79 = (undefined1)(int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_40 = uStack_79;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),&stack_pair_50.first);
    uVar4 = 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x30);
  }
  return uVar4;
}

