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
extern int fn_8304D6C8();
extern unsigned int uStack_48;


undefined8 fn_830489C0(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  uVar10 = 0x2d;
  iVar2 = *(int *)(param_1 + 0x44);
  iVar3 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar8 = (ulonglong)(*(uint *)(iVar4 + 0x24) >> 3) & 0x1f;
  uVar7 = (int)uVar8 * *param_2 + iVar2;
  *(uint *)(param_1 + 0x44) = uVar7;
  trapWord(6,uVar8,0);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar9 = *(int *)(param_1 + 0x2c) + iVar3;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0x50);
  }
  if (uVar9 <= uVar7) {
    uVar6 = (ulonglong)(*(uint *)(iVar4 + 0x24) >> 3) & 0x1f;
    trapWord(6,uVar6,0);
    *param_2 = *param_2 - (int)((uVar7 - uVar9) / uVar6);
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      uVar10 = 0x11;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x4c);
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      if (*(short *)(param_1 + 0x1c) == 1) {
        piVar5 = *(int **)(param_1 + 0x28);
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(piVar5,auStack_50);
          uStack_48 = 0;
          (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_50);
        }
      }
    }
  }
  trapWord(6,uVar8,0);
  fn_8304D6C8(param_1,(uint)(iVar2 - iVar3) / uVar8,*param_2,*(uint *)(param_1 + 0x2c) / uVar8);
  return uVar10;
}

