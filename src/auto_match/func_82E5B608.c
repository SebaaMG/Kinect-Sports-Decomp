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
extern unsigned int *auStack_40;
extern int fn_82E5AF48();
extern unsigned int lbl_82154BD8;
extern unsigned int lbl_82154BE8;


longlong fn_82E5B608(int param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint auStack_40 [16];
  
  lVar7 = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar3 = fn_82E5AF48(param_1 + 0x8c,uVar8,auStack_40);
      pbVar4 = (byte *)(-(uint)(lVar3 != 0) & auStack_40[0]);
      pbVar6 = &lbl_82154BD8;
      pbVar5 = pbVar4;
      if (pbVar4 != (byte *)0x0) {
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar6 != &lbl_82154BE8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          lVar7 = (ulonglong)*(uint *)(pbVar4 + 0x14) + lVar7 + 0x16;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xf4));
  }
  return lVar7;
}

