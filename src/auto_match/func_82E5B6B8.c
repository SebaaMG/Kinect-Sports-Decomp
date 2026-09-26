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


undefined8 fn_82E5B6B8(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint auStack_40 [16];
  
  uVar6 = 0;
  uVar7 = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    do {
      lVar3 = fn_82E5AF48(param_1 + 0x8c,uVar7,auStack_40);
      pbVar4 = (byte *)(-(uint)(lVar3 != 0) & auStack_40[0]);
      pbVar5 = &lbl_82154BD8;
      if (pbVar4 != (byte *)0x0) {
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != &lbl_82154BE8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          uVar6 = uVar6 + 1 & 0xffff;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xf4));
  }
  *(ushort *)*param_2 = (ushort)(uVar6 << 8) | (ushort)(uVar6 >> 8);
  *param_2 = *param_2 + 2;
  return 0;
}

