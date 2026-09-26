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
extern unsigned int *auStack_30;
extern int fn_8263C620();
extern int fn_829F5000();


void fn_82A13C78(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [48];
  
  fn_829F5000(3,auStack_30,8);
  uVar1 = 0;
  do {
    if (uVar1 == 0) {
      fn_8263C620(*(int *)(param_1 + 0x1ab4) * 0x38 + param_1 + 0xc28,0);
    }
    else {
      uVar2 = 0;
      do {
        fn_8263C620((*(int *)(param_1 + 0x1ab4) * 8 + uVar1) * 0x38 + param_1 + 0xcd0,uVar2,0);
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < 4);
    }
    fn_8263C620((*(int *)(param_1 + 0x1ab4) * 8 + uVar1) * 0x38 + param_1 + 0x1290,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  *(undefined4 *)(param_1 + 0x1ab4) = 0xffffffff;
  return;
}

