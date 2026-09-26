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
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;
extern unsigned int uStack_8;


undefined8 fn_82AC4650(ulonglong param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  byte bVar5;
  ulonglong uStack00000010;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uStack00000010 = param_1;
  puVar4 = &uStack_10;
  pbVar3 = (byte *)&stack0x00000010;
  uStack_10 = param_1 & 0xf800;
  do {
    bVar5 = *(byte *)puVar4;
    bVar1 = *pbVar3;
    if ((ulonglong)bVar5 - (ulonglong)bVar1 != 0) break;
    puVar4 = (ulonglong *)((int)puVar4 + 1);
    pbVar3 = pbVar3 + 1;
  } while (puVar4 != &uStack_8);
  if ((int)((ulonglong)bVar5 - (ulonglong)bVar1) == 0) {
    uVar2 = (uint)param_2[*param_2 * 4 + 3] >> 0xd & 7;
    if ((byte *)(param_2 + *param_2 * 4 + 4) != (byte *)0x0) {
      bVar5 = *(byte *)(param_2 + *param_2 * 4 + 4);
      if ((0x22 < bVar5) || (bVar5 == 0)) {
        bVar5 = 0;
      }
      if (((bVar5 == 0x21) && (uVar2 != 0)) && (uVar2 < 5)) {
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

