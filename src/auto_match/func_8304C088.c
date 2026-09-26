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
extern unsigned int *auStack_40;
extern int fn_8304D6C8();
extern unsigned int uStack_38;


undefined8 fn_8304C088(int param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  uVar8 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x5c);
  uVar9 = 0x2d;
  *param_2 = (uVar8 >> 6) << 6;
  trapWord(6,(ulonglong)uVar4,0);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar7 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x50);
  }
  uVar5 = *(uint *)(param_1 + 0x5c);
  uVar8 = uVar5 * (uVar8 >> 6) + *(int *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) = uVar8;
  if (uVar7 <= uVar8) {
    trapWord(6,(ulonglong)uVar5,0);
    *param_2 = *param_2 - (int)((ulonglong)(uVar8 - uVar7) / (ulonglong)uVar5 << 6);
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      uVar9 = 0x11;
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x4c);
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      if (*(short *)(param_1 + 0x1c) == 1) {
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))(piVar6,auStack_40);
          uStack_38 = 0;
          (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_40);
        }
      }
    }
  }
  trapWord(6,(ulonglong)*(uint *)(param_1 + 0x5c),0);
  fn_8304D6C8(param_1,(((ulonglong)uVar2 - (ulonglong)uVar3 & 0x3ffffff) << 6) /
                          (ulonglong)uVar4,*param_2,
                  (((ulonglong)*(uint *)(param_1 + 0x2c) & 0x3ffffff) << 6) /
                  (ulonglong)*(uint *)(param_1 + 0x5c));
  return uVar9;
}

