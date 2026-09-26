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
extern unsigned int lbl_831882E8;


undefined8 fn_82E3C5F8(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_3 = 0;
  while( true ) {
    if (param_1 == 0) {
      return 0xffffffff80004005;
    }
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 <= param_2) && (param_2 < uVar1 + 0x14)) break;
    param_1 = *(int *)(param_1 + 0x3c);
  }
  param_2 = param_2 - uVar1;
  if ((*(byte *)((param_2 >> 3) + param_1 + 0xe) & (&lbl_831882E8)[param_2 & 7]) == 0) {
    return 0xffffffff80004005;
  }
  *param_3 = (param_2 + 9) * 2 + param_1;
  return 0;
}

