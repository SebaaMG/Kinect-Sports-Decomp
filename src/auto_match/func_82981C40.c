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
extern int fn_82981738();


undefined8 fn_82981C40(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (param_2 == 0) {
            return 0xffffffff80004005;
          }
          iVar1 = *(int *)(param_2 + 4);
          if (iVar1 != 1) break;
          uVar3 = fn_82981738(param_1,*(undefined4 *)(param_2 + 8));
          if (param_3 < uVar3) {
            param_2 = *(int *)(param_2 + 8);
          }
          else {
            param_2 = *(int *)(param_2 + 0xc);
            param_3 = param_3 - uVar3;
          }
        }
        if (iVar1 != 6) break;
        param_2 = *(int *)(param_2 + 0x18);
      }
      if (iVar1 != 8) break;
      param_2 = *(int *)(param_2 + 0x10);
      uVar2 = fn_82981738(param_1,param_2);
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff80004005;
      }
      trapWord(6,uVar2,0);
      param_3 = param_3 - (int)((ulonglong)param_3 / (uVar2 & 0xffffffff)) * (int)uVar2;
    }
    if (iVar1 == 9) break;
    if (iVar1 != 0xb) {
      fn_82980D00(param_1,0,0,0xffffffff8202dc94);
      return 0;
    }
    param_2 = *(int *)(param_2 + 0x30);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if (((uVar3 == 0) || (uVar3 == 1)) || (uVar3 < 3)) {
    uVar4 = 0;
  }
  else {
    if (uVar3 != 3) goto LAB_82981d50;
    uVar4 = 3;
  }
  *(undefined4 *)(param_4 + 0x10) = uVar4;
LAB_82981d50:
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_4 + 0x1c) = 1;
  *(undefined4 *)(param_4 + 0x20) = 1;
  *(undefined4 *)(param_4 + 0x14) = uVar4;
  *(uint *)(param_4 + 0x24) = *(uint *)(param_2 + 0x24) & 0x200;
  return 0;
}

