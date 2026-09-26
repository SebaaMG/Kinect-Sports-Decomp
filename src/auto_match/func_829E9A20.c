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


undefined8 fn_829E9A20(int param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_4 + 4);
  if ((pbVar4 != (byte *)0x0) && (param_3 == *(int *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + 0x20) * 4;
    lVar2 = 0;
    if (iVar1 != 0) {
      pbVar3 = pbVar4 + iVar1;
      do {
        lVar2 = (ulonglong)*pbVar4 - (ulonglong)*param_2;
        if (lVar2 != 0) break;
        pbVar4 = pbVar4 + 1;
        param_2 = param_2 + 1;
      } while (pbVar4 != pbVar3);
    }
    if ((int)lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

