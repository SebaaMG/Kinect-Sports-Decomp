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


void fn_82F28800(int param_1,int param_2,int param_3)

{
  ushort uVar2;
  undefined1 *puVar1;
  short *psVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  psVar3 = (short *)(param_1 + 4);
  param_2 = param_2 + 2;
  lVar6 = 8;
  do {
    iVar5 = 0;
    lVar7 = 2;
    do {
      uVar2 = psVar3[-2] + (ushort)*(byte *)(param_2 + iVar5 + -2);
      uVar4 = (ulonglong)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      *(char *)(param_2 + iVar5 + -2) = (char)uVar4;
      uVar2 = psVar3[-1] + (ushort)*(byte *)(param_2 + -1 + iVar5);
      uVar4 = (ulonglong)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      *(char *)(param_2 + -1 + iVar5) = (char)uVar4;
      uVar2 = (ushort)*(byte *)(param_2 + iVar5) + *psVar3;
      uVar4 = (ulonglong)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      puVar1 = (undefined1 *)(param_2 + 1 + iVar5);
      *(char *)(param_2 + iVar5) = (char)uVar4;
      uVar2 = psVar3[1] + (ushort)*(byte *)(param_2 + 1 + iVar5);
      uVar4 = (ulonglong)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      iVar5 = iVar5 + 4;
      *puVar1 = (char)uVar4;
      psVar3 = psVar3 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = lVar6 + -1;
    param_2 = param_2 + param_3;
  } while (lVar6 != 0);
  return;
}

