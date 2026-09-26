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
extern int fn_82F49100();


undefined8 fn_82F40A78(undefined8 param_1,undefined8 param_2,short param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int aiStack_20 [4];
  
  aiStack_20[0] = 0;
  uVar2 = fn_82F49100(param_2,0,aiStack_20);
  if (-1 < (int)uVar2) {
    if ((((int)uVar2 == 0) && (uVar1 = *(uint *)(aiStack_20[0] + 0x14), (uVar1 & 0x80) == 0)) &&
       ((param_3 == 0 || ((uVar1 & 0x2000) == 0)))) {
      if ((uVar1 & 0x200) != 0) {
        return uVar2;
      }
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

