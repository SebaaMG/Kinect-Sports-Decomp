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
extern int fn_82A43408();
extern int fn_82F68CC0();


undefined8
fn_82A509A8(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4,undefined8 param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar1 = *(byte **)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4) * 4;
  lVar4 = 0;
  if (iVar3 != 0) {
    pbVar6 = pbVar1;
    pbVar5 = param_4;
    do {
      lVar4 = (ulonglong)*pbVar6 - (ulonglong)*pbVar5;
      if (lVar4 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != pbVar1 + iVar3);
  }
  if ((int)lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82F68CC0(pbVar1,param_4);
    uVar2 = fn_82A43408(param_1,param_5);
  }
  return uVar2;
}

