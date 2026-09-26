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


void fn_82D698D0(undefined8 param_1,int param_2,short param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  int iVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)(param_2 + 0xc);
  iVar3 = 0;
  if (*(byte *)(param_2 + 0xe) == 0) {
    return;
  }
  psVar5 = (short *)(param_2 + 0x12);
  do {
    if (*psVar5 == param_3) {
      bVar1 = *(byte *)(param_2 + 0xe);
      iVar6 = bVar1 - 1;
      *(char *)(param_2 + 0xe) = (char)iVar6;
      pbVar7 = pbVar2 + iVar6 * 8 + 4;
      *(undefined4 *)(pbVar2 + iVar3 * 8 + 4) = *(undefined4 *)pbVar7;
      *(undefined4 *)(pbVar2 + iVar3 * 8 + 8) = *(undefined4 *)(pbVar2 + iVar6 * 8 + 8);
      lVar4 = (longlong)((int)((uint)*(byte *)(param_2 + 0xd) + (uint)*pbVar2 + -1) >> 1);
      if (-1 < lVar4) {
        lVar4 = lVar4 + 1;
        iVar3 = ((uint)bVar1 * 8 + 4) - (int)pbVar7;
        do {
          *(undefined4 *)pbVar7 = *(undefined4 *)(pbVar7 + (int)(pbVar2 + iVar3));
          pbVar7 = pbVar7 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      fn_82DD8470();
      return;
    }
    iVar3 = iVar3 + 1;
    psVar5 = psVar5 + 4;
  } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0xe));
  return;
}

