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
extern unsigned int lbl_8322B22C;


void fn_82BE9320(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar3 = lbl_8322B22C;
  if (lbl_8322B22C == 0) {
    return;
  }
  if (param_1 == (byte *)0x0) {
    *(undefined4 *)(lbl_8322B22C + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = 0;
    *(undefined4 *)(iVar3 + 0xa0) = 0;
    return;
  }
  pbVar5 = param_1;
  pbVar4 = (byte *)(lbl_8322B22C + 0x98);
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != param_1 + 0xc);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    return;
  }
  *(undefined4 *)(lbl_8322B22C + 0x98) = *(undefined4 *)param_1;
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(lbl_8322B22C + 0x134) = 1;
  return;
}

