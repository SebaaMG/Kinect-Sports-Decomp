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


undefined8 fn_82E27090(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x28;
  if (((0x27 < param_2) && (uVar1 = *param_1, 0x27 < uVar1)) && (uVar1 < 0x4001)) {
    if (((*(ushort *)((int)param_1 + 0xe) < 9) && (param_1[4] == 0)) || (param_1[8] != 0)) {
      uVar2 = param_1[8];
      if (uVar2 == 0) {
        uVar2 = 1 << (*(ushort *)((int)param_1 + 0xe) & 0x3f);
      }
      if (0x100 < uVar2) {
        return 0xffffffffc00d36b4;
      }
      iVar3 = (uVar2 + 10) * 4;
    }
    if (param_1[4] == 3) {
      iVar3 = iVar3 + 0xc;
    }
    if ((uVar1 + iVar3) - 0x28 <= param_2) {
      return 0;
    }
  }
  return 0xffffffffc00d36b4;
}

