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
extern int fn_82631578();
extern int fn_82631920();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_82647620(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x3148);
  do {
    if (*piVar1 != *(int *)(param_1 + 0x3ac4)) {
      fn_8263A1B8(param_1,uVar2,0);
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((uVar2 & 0xffffffff) < 4);
  if (*(int *)(param_1 + 0x3158) != *(int *)(param_1 + 0x3abc)) {
    fn_8263A508(param_1,0);
  }
  fn_82631920(param_1,0);
                    /* WARNING: Subroutine does not return */
  fn_82631578(param_1,0);
}

