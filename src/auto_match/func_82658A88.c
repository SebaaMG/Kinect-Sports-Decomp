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


ulonglong fn_82658A88(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte bVar5;
  
  uVar1 = *param_1;
  uVar3 = 0;
  if ((uVar1 & 0x8000) == 0) {
    return uVar3;
  }
  uVar4 = 0;
  do {
    uVar2 = 1 << (uVar4 & 0x3f);
    bVar5 = ((uVar1 >> 0x10 & uVar2 & 0xf) != 0) * '\x02' + ((uVar1 >> 0x14 & uVar2 & 0xf) != 0);
    if (bVar5 == 0) {
      if ((uVar1 & 0x4000) != 0) {
        uVar3 = uVar3 | 4;
      }
    }
    else if (bVar5 == 1) {
      uVar3 = uVar3 | 2;
    }
    else if (bVar5 < 3) {
      uVar3 = uVar3 | 1;
    }
    else if (bVar5 == 3) {
      uVar3 = uVar3 | 8;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  return uVar3;
}

