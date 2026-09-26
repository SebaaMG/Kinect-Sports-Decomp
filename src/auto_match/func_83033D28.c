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
extern unsigned int *auStack_20;
extern int fn_83032B08();
extern int fn_83033EA8();
extern int fn_83034268();


undefined8 fn_83033D28(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [2];
  
  uVar2 = (undefined4)param_2;
  auStack_20[0] = uVar2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_83032B08(param_2);
  }
  puVar1 = (uint *)fn_83033EA8(param_1 + 0x88,auStack_20);
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 < 2) {
      auStack_20[0] = uVar2;
      if ((param_2 & 0xffffffff) != 0) {
        fn_83032B08(param_2);
      }
      fn_83034268(param_1 + 0x88,auStack_20);
    }
    else {
      *puVar1 = *puVar1 - 1;
    }
  }
  return 1;
}

