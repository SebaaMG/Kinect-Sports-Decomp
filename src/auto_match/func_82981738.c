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
extern int fn_82980D00();


longlong fn_82981738(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    if (*(int *)(param_2 + 4) != 1) break;
    lVar2 = fn_82981738(param_1,*(undefined4 *)(param_2 + 8));
    param_2 = *(int *)(param_2 + 0xc);
    lVar4 = lVar2 + lVar4;
  } while (param_2 != 0);
  if (param_2 == 0) {
    return lVar4;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 == 6) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    if (iVar3 == 8) {
      iVar3 = fn_82981738(param_1,*(undefined4 *)(param_2 + 0x10));
      lVar2 = (longlong)iVar3 * (longlong)*(int *)(param_2 + 0x14);
      goto LAB_82981818;
    }
    if (iVar3 == 9) {
      lVar2 = (longlong)*(int *)(param_2 + 0x20) * (longlong)*(int *)(param_2 + 0x1c);
      goto LAB_82981818;
    }
    if (iVar3 != 0xb) {
      fn_82980D00(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
  }
  lVar2 = fn_82981738(param_1,uVar1);
LAB_82981818:
  return lVar2 + lVar4;
}

