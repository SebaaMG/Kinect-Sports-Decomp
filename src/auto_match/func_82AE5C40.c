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
extern int fn_82AE50A8();
extern int fn_82AE56A8();


ulonglong fn_82AE5C40(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = fn_82AE50A8(param_1 + 8,(param_2 & 0x3fffffff) << 2);
  if ((int)uVar1 != -1) {
    while (uVar2 = (param_3 & 0x3fffffff) * 4 + uVar1, (uVar2 & 0xffffffff) < 0x401) {
      uVar2 = fn_82AE56A8(param_1 + 8,uVar1,uVar2 - 1);
      if (((int)uVar2 == -1) && (uVar2 = uVar1, (uVar1 & 3) == 0)) {
        return (uVar1 & 0xffffffff) >> 2;
      }
      uVar1 = uVar2 + 4 & 0xfffffffc;
    }
  }
  return 0xffffffffffffffff;
}

