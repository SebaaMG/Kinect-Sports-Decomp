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
extern int fn_829DE7F0();
extern int fn_82F68CC0();
extern unsigned int iStack_54;


void fn_829DEEE8(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int aiStack_60 [3];
  int iStack_54;
  undefined1 auStack_50 [80];
  
  if (*(int *)(param_2 + 0x37a0) != 0) {
    return;
  }
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x6f40);
  if (uVar1 < 0xb) {
    iVar2 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x6f40)) {
      piVar3 = &iStack_54;
      uVar4 = uVar1;
      do {
        piVar3 = piVar3 + 1;
        *piVar3 = iVar2;
        iVar2 = iVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    aiStack_60[0] = param_1;
    fn_829DE7F0(uVar1,10,aiStack_60,auStack_50);
    uVar1 = 10;
  }
  *(int *)(param_2 + 0x37a0) = (int)uVar1;
  if (uVar1 != 0) {
    piVar3 = &iStack_54;
    do {
      piVar3 = piVar3 + 1;
      fn_82F68CC0(param_2,*piVar3 * 0x590 + param_1,0x590);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x590;
    } while (uVar1 != 0);
  }
  return;
}

