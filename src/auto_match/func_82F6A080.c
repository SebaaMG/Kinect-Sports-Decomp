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


longlong fn_82F6A080(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (7 < (param_3 & 0xffffffff)) {
    uVar5 = (param_3 & 0xffffffff) >> 3;
    param_3 = param_3 & 7;
    uVar4 = *param_2;
    uVar3 = *param_1;
    while( true ) {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0 || uVar3 != uVar4) break;
      param_2 = param_2 + 1;
      uVar4 = *param_2;
      param_1 = param_1 + 1;
      uVar3 = *param_1;
    }
    if (uVar3 != uVar4) {
      if (uVar3 < uVar4) {
        return -1;
      }
      return 1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if ((int)param_3 != 0) {
    bVar1 = *(byte *)param_2;
    bVar2 = *(byte *)param_1;
    while( true ) {
      param_3 = param_3 - 1;
      if (param_3 == 0 || bVar2 != bVar1) break;
      param_2 = (ulonglong *)((int)param_2 + 1);
      bVar1 = *(byte *)param_2;
      param_1 = (ulonglong *)((int)param_1 + 1);
      bVar2 = *(byte *)param_1;
    }
    return (ulonglong)bVar2 - (ulonglong)bVar1;
  }
  return 0;
}

