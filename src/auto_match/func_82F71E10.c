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


ulonglong fn_82F71E10(ulonglong param_1)

{
  char cVar1;
  longlong lVar2;
  int in_r9;
  char *in_r10;
  longlong in_r11;
  int iVar3;
  byte in_cr6;
  
  while( true ) {
    iVar3 = (int)in_r11;
    if ((bool)(in_cr6 >> 1 & 1)) {
      *(char **)(in_r9 + 0x35c0) = in_r10 + 1;
      if (iVar3 != 0x40) {
        return 0xffffffffffffffff;
      }
      return param_1;
    }
    if (iVar3 == 0) {
      return 0;
    }
    if (iVar3 < 0x41) break;
    if (0x50 < iVar3) {
      return 0xffffffffffffffff;
    }
    in_r10 = in_r10 + 1;
    cVar1 = *in_r10;
    lVar2 = (param_1 & 0xfffffff) * 0x10 + in_r11;
    in_r11 = (longlong)cVar1;
    param_1 = lVar2 - 0x41;
    *(char **)(in_r9 + 0x35c0) = in_r10;
    in_cr6 = (cVar1 == '@') << 1;
  }
  return 0xffffffffffffffff;
}

