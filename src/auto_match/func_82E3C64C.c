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


undefined8 fn_82E3C64C(undefined8 param_1,int param_2,int *param_3)

{
  int in_r10;
  int in_r11;
  uint uVar1;
  
  uVar1 = param_2 - in_r11;
  if ((*(byte *)((uVar1 >> 3) + in_r10 + 0xe) & (&lbl_831882E8)[uVar1 & 7]) == 0) {
    return param_1;
  }
  *param_3 = (uVar1 + 9) * 2 + in_r10;
  return 0;
}

