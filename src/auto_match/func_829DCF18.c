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
extern int fn_829D4B80();
extern int fn_829DCFB0();
extern unsigned int iStack_74;


void fn_829DCF18(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int aiStack_80 [3];
  int iStack_74;
  undefined1 auStack_70 [88];
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x9c90);
  if (uVar1 < 0x15) {
    iVar2 = 0;
    if (0 < (int)*(uint *)(param_1 + 0x9c90)) {
      piVar3 = &iStack_74;
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
    aiStack_80[0] = param_1;
    fn_829DCFB0(uVar1,0x14,aiStack_80,auStack_70);
    uVar1 = 0x14;
  }
  fn_829D4B80(param_2,param_1,uVar1,auStack_70);
  return;
}

