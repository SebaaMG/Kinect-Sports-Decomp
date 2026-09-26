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


longlong fn_826338A0(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar1 = *param_1;
  uVar3 = uVar1 >> 0xf & 1;
  uVar4 = (uVar1 >> 4 | uVar1) >> 0x10 & 0xf;
  if ((uVar3 != 0) && ((uVar1 & 0x4000) != 0)) {
    uVar4 = 0xf;
  }
  if ((uVar3 == 0) || (bVar2 = true, 0xf < (uVar1 & 0x3f))) {
    bVar2 = false;
  }
  if ((!bVar2) || (lVar5 = 1, uVar4 == 0)) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    return lVar5;
  }
  if (param_2 == (uint *)0x0) {
    return lVar5;
  }
  *param_2 = uVar4;
  return lVar5;
}

