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
extern int fn_82AF4968();
extern int fn_82B8B580();


undefined8
fn_82B8D2B8(undefined8 param_1,uint param_2,uint param_3,ulonglong param_4,ulonglong param_5)

{
  bool bVar1;
  char cVar3;
  undefined8 uVar2;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_2 + 8);
  do {
    uVar5 = param_2;
    uVar4 = uVar4 >> 7 & 0x7f;
    if (uVar4 == 0x70) {
      return 0;
    }
    if ((uVar4 == 0x7d) || (bVar1 = false, uVar4 == 0x7c)) {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    if (uVar4 == 0x71) {
      return 0;
    }
    if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3800) {
      return 0;
    }
    if (*(int *)(uVar5 + 0x1c) != *(int *)(param_3 + 0x1c)) {
      return 0;
    }
    uVar4 = param_3;
    if ((param_5 & 0xff) == 0) {
      do {
        uVar4 = *(uint *)((uVar4 & 0xfffffffe) + 0x24);
        if (((uVar4 & 1) != 0) || (uVar4 = (uVar4 & 0xfffffffe) - 0x28, uVar4 == 0)) {
          cVar3 = '\0';
          goto LAB_82b8d370;
        }
      } while (uVar4 != uVar5);
      cVar3 = '\x01';
    }
    else {
      cVar3 = fn_82AF4968(param_3,uVar5);
    }
LAB_82b8d370:
    if (cVar3 == '\0') {
      uVar2 = fn_82B8B580(param_1,uVar5,param_3,param_4,param_5);
      return uVar2;
    }
    uVar4 = *(uint *)(param_3 + 8);
    param_4 = (ulonglong)((param_4 & 0xff) == 0);
    param_2 = param_3;
    param_3 = uVar5;
  } while( true );
}

