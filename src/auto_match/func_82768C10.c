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
extern int fn_826D6630();
extern int fn_82768B78();
extern int fn_82F68CC0();


void fn_82768C10(int param_1,ulonglong param_2)

{
  uint uVar1;
  short sVar3;
  short sVar4;
  undefined8 uVar2;
  undefined8 uVar5;
  char *pcVar7;
  undefined8 uVar6;
  char acStack_50 [8];
  char acStack_48 [72];
  
  sVar4 = 0;
  sVar3 = 0;
  if (((*(int *)(param_1 + 0xc) != 0) && (*(short *)(param_1 + 0x28) == 0)) &&
     (*(short *)(param_1 + 0x2a) == 0)) {
    fn_82F68CC0(acStack_48,0xffffffff82014de0,10);
    fn_82F68CC0(acStack_50,0xffffffff82014dd8,6);
    pcVar7 = acStack_48;
    sVar3 = 0;
    while ((acStack_48[0] != '\0' && (sVar3 = fn_82768B78(param_1,acStack_48[0]), sVar3 == 0))) {
      pcVar7 = pcVar7 + 1;
      acStack_48[0] = *pcVar7;
    }
    if (sVar3 != 0) {
      pcVar7 = acStack_50;
      sVar4 = 0;
      while ((acStack_50[0] != '\0' && (sVar4 = fn_82768B78(param_1,acStack_50[0]), sVar4 == 0)))
      {
        pcVar7 = pcVar7 + 1;
        acStack_50[0] = *pcVar7;
      }
    }
  }
  if ((sVar4 == 0) || (sVar3 == 0)) {
    if ((param_2 & 0xffffffff) != 0) {
      uVar6 = 0xffffffff82196582;
      uVar1 = (*(int **)(param_1 + 0xc))[5];
      uVar5 = uVar6;
      if ((uVar1 & 1) != 0) {
        uVar5 = 0xffffffff82014dd0;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        uVar6 = 0xffffffff82014dc8;
      }
      uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))();
      fn_826D6630(param_2 + 0xc,0xffffffff82014d60,uVar2,uVar6,uVar5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
    *(undefined2 *)(param_1 + 0x2a) = 0xffff;
  }
  else {
    *(short *)(param_1 + 0x28) = sVar4;
    *(short *)(param_1 + 0x2a) = sVar3;
  }
  return;
}

