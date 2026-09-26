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
extern int fn_82DD8470();


void fn_82D75710(int param_1,short param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar4;
  longlong lVar3;
  short *psVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar4 = 0;
  if (*(byte *)(param_1 + 0x32) == 0) {
    return;
  }
  psVar5 = (short *)(param_1 + 0x36);
  do {
    if (*psVar5 == param_2) {
      pbVar2 = (byte *)(param_1 + 0x30);
      bVar1 = *(byte *)(param_1 + 0x32);
      iVar6 = bVar1 - 1;
      *(char *)(param_1 + 0x32) = (char)iVar6;
      pbVar7 = pbVar2 + iVar6 * 8 + 4;
      *(undefined4 *)(pbVar2 + iVar4 * 8 + 4) = *(undefined4 *)pbVar7;
      *(undefined4 *)(pbVar2 + iVar4 * 8 + 8) = *(undefined4 *)(pbVar2 + iVar6 * 8 + 8);
      lVar3 = (longlong)((int)((uint)*(byte *)(param_1 + 0x31) + (uint)*pbVar2 + -1) >> 1);
      if (-1 < lVar3) {
        lVar3 = lVar3 + 1;
        iVar4 = ((uint)bVar1 * 8 + 4) - (int)pbVar7;
        do {
          *(undefined4 *)pbVar7 = *(undefined4 *)(pbVar7 + (int)(pbVar2 + iVar4));
          pbVar7 = pbVar7 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      fn_82DD8470();
      return;
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 4;
  } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x32));
  return;
}

