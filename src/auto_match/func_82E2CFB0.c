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
extern int fn_82E2A8E8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_82153828;
extern unsigned int lbl_82153838;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82E2CFB0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  
  pbVar6 = (byte *)&stack0x00000020;
  pbVar5 = &lbl_82153828;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &stack0x00000030);
  uVar3 = lbl_8202E618;
  uVar4 = lbl_8202E620;
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar7 = (byte *)&stack0x00000020;
    pbVar6 = (byte *)&lbl_821533E8;
    pbVar5 = pbVar6;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar7 != &stack0x00000030);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar7 = (byte *)&stack0x00000020;
      pbVar6 = &lbl_821533D8;
      pbVar5 = pbVar6;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar7 != &stack0x00000030);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar7 = (byte *)&stack0x00000020;
        pbVar6 = (byte *)&lbl_82153838;
        pbVar5 = pbVar6;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar5;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar5 = pbVar5 + 1;
        } while (pbVar7 != &stack0x00000030);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0xffffffffc00d36b7;
        }
      }
    }
    uVar3 = *(undefined8 *)pbVar6;
    uVar4 = *(undefined8 *)(pbVar6 + 8);
  }
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uVar3 = fn_82E2A8E8(param_1 + -4,uVar3,uVar4);
  return uVar3;
}

