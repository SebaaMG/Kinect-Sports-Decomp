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
extern int fn_8265C9E0();
extern int fn_828A7138();
extern int fn_828A8008();
extern int fn_828E38D8();


void fn_828E9528(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int aiStack_20 [4];
  
  if ((param_1[1] == 0) || (*(int *)(param_1[1] + 4) != 1)) {
    uVar1 = fn_8265C9E0(0x10);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828A8008(uVar1,(undefined4 *)*param_1,*(undefined4 *)*param_1);
    }
    fn_828E38D8(param_1,uVar2);
    uVar2 = 0;
    aiStack_20[0] = *(int *)**(undefined4 **)*param_1;
  }
  else {
    aiStack_20[0] = param_1[2];
    if ((int *)aiStack_20[0] == (int *)**(undefined4 **)*param_1) {
      aiStack_20[0] = *(int *)**(undefined4 **)*param_1;
    }
    uVar2 = 1;
  }
  fn_828A7138(param_1,1,aiStack_20,uVar2);
  return;
}

