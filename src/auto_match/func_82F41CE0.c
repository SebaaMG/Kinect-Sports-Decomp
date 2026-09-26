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


undefined8 fn_82F41CE0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar1 = *param_1;
  while( true ) {
    if (uVar1 == 0) break;
    uVar2 = *param_2;
    if (uVar1 != uVar2) {
      uVar3 = uVar1;
      if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
        uVar3 = uVar1 & 0xffdf;
      }
      if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
        uVar2 = uVar2 & 0xffdf;
      }
      if (uVar3 != uVar2) break;
    }
    param_1 = param_1 + 1;
    uVar1 = *param_1;
    param_2 = param_2 + 1;
  }
  if ((uVar1 == 0) && (*param_2 == 0)) {
    return 1;
  }
  return 0;
}

