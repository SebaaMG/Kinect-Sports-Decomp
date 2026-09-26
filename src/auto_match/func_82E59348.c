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
extern unsigned int lbl_820F8EA8;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_820F8ED8;
extern unsigned int lbl_820F8EE8;
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;


undefined8 fn_82E59348(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  pbVar3 = (byte *)&stack0x00000010;
  pbVar4 = &lbl_820F8EA8;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != &lbl_820F8EB8);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar3 = (byte *)&stack0x00000010;
    pbVar4 = &lbl_820F8EB8;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != &lbl_820F8EC8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar3 = (byte *)&stack0x00000010;
      pbVar4 = &lbl_820F8EC8;
      do {
        bVar1 = *pbVar4;
        bVar2 = *pbVar3;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar4 = pbVar4 + 1;
        pbVar3 = pbVar3 + 1;
      } while (pbVar4 != &lbl_820F8ED8);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
        pbVar3 = (byte *)&stack0x00000010;
        pbVar4 = &lbl_820F8ED8;
        do {
          bVar1 = *pbVar4;
          bVar2 = *pbVar3;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar4 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar4 != &lbl_820F8EE8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

