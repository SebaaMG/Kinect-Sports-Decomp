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
extern int fn_826561B0();


undefined8 fn_826525A0(int param_1,char *param_2)

{
  byte bVar1;
  
  if (param_2 == (char *)0x0) {
    return 0xffffffff82da0017;
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 0x6c) {
    if ((bVar1 != 0x6b) && (bVar1 != 0x61)) {
      if (bVar1 < 99) {
        return 0x2da0000;
      }
      if (100 < bVar1) {
        if (bVar1 < 0x66) {
          return 0x2da0000;
        }
        if (0x67 < bVar1) {
          return 0x2da0000;
        }
      }
    }
  }
  else {
    if (bVar1 == 0x6d) {
      fn_826561B0(param_1);
      return 0x2da0000;
    }
    if (bVar1 != 0x74) {
      return 0x2da0000;
    }
  }
  sprintf(param_2,"PIX!NO");
  return 0x2da0000;
}

