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
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


ulonglong fn_829E5CA0(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uStack00000020;
  int iStack00000024;
  uint uStack00000028;
  int iStack0000002c;
  
  uStack00000028 = (uint)(param_3 >> 0x20);
  iStack0000002c = (int)param_3;
  iStack00000024 = (int)param_2;
  uStack00000020 = (uint)(param_2 >> 0x20);
  if (((uStack00000028 == 0) && (uStack00000020 == 0)) && (iStack00000024 == 0)) {
    if (iStack0000002c == 0) {
      return 0xffffffff80070057;
    }
  }
  else if (iStack00000024 < 0) {
    return 0xffffffff80070057;
  }
  if (((iStack00000024 < iStack0000002c) &&
      (((param_3 & 0xffffffff) - (param_2 & 0xffffffff) & 0xffffffff) <=
       (ulonglong)*(uint *)(param_1 + 0x34))) &&
     ((-1 < (longlong)param_2 && ((int)uStack00000020 < (int)uStack00000028)))) {
    return -(ulonglong)
            ((ulonglong)*(uint *)(param_1 + 0x30) <
            (ulonglong)uStack00000028 - (ulonglong)uStack00000020) & 0xffffffff80070057;
  }
  return 0xffffffff80070057;
}

