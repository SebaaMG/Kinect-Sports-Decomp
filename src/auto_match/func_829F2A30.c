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
extern unsigned int iStack00000020;
extern unsigned int iStack00000024;


undefined8
fn_829F2A30(int param_1,int param_2,longlong param_3,undefined8 param_4,short param_5,
             undefined8 param_6,int param_7)

{
  ushort uVar1;
  int iStack00000020;
  int iStack00000024;
  
  iStack00000020 = (int)((ulonglong)param_3 >> 0x20);
  if ((((-1 < param_3) && (iStack00000020 < 0x50)) &&
      (iStack00000024 = (int)param_3, -1 < iStack00000024)) &&
     (((iStack00000024 < 0x3c &&
       (uVar1 = *(ushort *)((iStack00000024 * param_2 + iStack00000020) * 2 + param_1),
       ((int)(uint)uVar1 >> 3) - param_7 < 0x28)) && ((uVar1 & 7) == (int)param_5)))) {
    return 0;
  }
  return 1;
}

