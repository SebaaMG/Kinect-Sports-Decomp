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
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


undefined8
fn_82E63250(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uVar3 = 0;
  if (param_5 != 0) {
    do {
      pbVar5 = (byte *)&stack0x00000020;
      pbVar4 = param_4;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != &stack0x00000030);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      param_4 = param_4 + 0x10;
    } while (uVar3 < param_5);
  }
  return 0;
}

