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


undefined8 fn_82F022F0(int param_1,byte param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_3 = param_2;
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = 1;
  if (uVar1 == 0) {
    if (param_2 != 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    return uVar2;
  }
  if (uVar1 != 1) {
    if (2 < uVar1) {
      return uVar2;
    }
    if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
      uVar2 = 2;
      *param_3 = 3;
      *param_4 = param_2;
    }
    *(uint *)(param_1 + 0x30) = (uint)LZCOUNT((uint)param_2) >> 5;
    return uVar2;
  }
  *(uint *)(param_1 + 0x30) = -(uint)(param_2 == 0) & 2;
  return uVar2;
}

