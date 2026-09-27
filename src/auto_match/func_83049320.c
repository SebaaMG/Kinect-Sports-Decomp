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
extern int fn_8307E4F8();
extern unsigned int uStack_16;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_83049320(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  struct { undefined4 first; undefined4 second; } stack_pair_20;

  byte bStack_18;
  byte bStack_17;
  undefined1 uStack_16;
  
  param_3 = param_3 & 0xffff;
  if ((param_3 == 0) || (1 < param_3)) {
    stack_pair_20.first = *param_2;
    stack_pair_20.second = param_2[1];
    bStack_18 = *(byte *)(param_2 + 2) >> 4;
    bStack_17 = *(byte *)(param_2 + 2) & 0xf;
    if (param_3 == 0) {
      iVar1 = 0xff;
    }
    else {
      iVar1 = param_3 - 1;
      if (0xfe < iVar1) {
        iVar1 = 0xfe;
      }
    }
  }
  else {
    iVar1 = 0;
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    bStack_18 = 0;
    bStack_17 = 1;
  }
  uStack_16 = (undefined1)iVar1;
  fn_8307E4F8(*(undefined4 *)(param_1 + 0x28),0,&stack_pair_20.first);
  return;
}

