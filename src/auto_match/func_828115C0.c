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


uint fn_828115C0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = (param_2 + param_3) - 1;
  uVar6 = param_2 >> 3;
  uVar1 = uVar4 >> 3;
  uVar2 = (0x100 >> (param_2 & 7)) + 0xffU & 0xff;
  pbVar3 = (byte *)(uVar6 + param_1);
  uVar4 = ~((1 << (7 - (uVar4 & 7) & 0x3f)) + 0xffU) & 0xff;
  if (uVar6 == uVar1) {
    return uVar4 & *pbVar3 & uVar2;
  }
  if ((uVar2 & *pbVar3) == 0) {
    iVar5 = uVar1 - uVar6;
    pbVar3 = pbVar3 + 1;
    uVar6 = 0;
    if (iVar5 != 1) {
      do {
        if (*pbVar3 != 0) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        pbVar3 = pbVar3 + 1;
      } while (uVar6 < iVar5 - 1U);
    }
    return uVar4 & *pbVar3;
  }
  return 1;
}

