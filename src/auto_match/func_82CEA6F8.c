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


uint fn_82CEA6F8(int *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    uVar2 = ((uint)param_2 >> 4) * -0x61c8864f;
    while( true ) {
      uVar2 = uVar2 & uVar1;
      lVar3 = *(longlong *)(uVar2 * 0x10 + *param_1);
      if (lVar3 == -1) break;
      if (lVar3 == param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    }
  }
  return uVar1 + 1;
}

