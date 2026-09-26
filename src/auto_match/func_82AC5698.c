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


undefined8 fn_82AC5698(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*param_2 + 0x20);
  if ((param_1 < (uint *)param_2[0x11]) ||
     ((uint *)(param_2[0x12] + param_2[0x11]) < param_1 + uVar1)) {
    return 0xffffffff80004005;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = *param_1;
      if ((uint)param_2[0x15] <= (uVar2 & 0xfff) << 1) {
        return 0xffffffff80004005;
      }
      if ((uint)param_2[((uVar2 & 0xfff) + 0xb) * 2] >> 0x1e == 1) {
        return 0xffffffff80004005;
      }
      if ((uint)param_2[((uVar2 & 0xfff) + 0xb) * 2] >> 0x1e == 3) {
        return 0xffffffff80004005;
      }
      if ((uVar3 == uVar1 - 1) && ((uVar2 & 0x1000) == 0)) {
        return 0xffffffff80004005;
      }
      uVar2 = *(uint *)((uVar2 & 0xfff) * 0xc + param_2[1]);
      if ((uVar2 & 0x8000) == 0) {
        return 0xffffffff80004005;
      }
      if ((uVar2 & 0x40) != 0) {
        return 0xffffffff80004005;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

