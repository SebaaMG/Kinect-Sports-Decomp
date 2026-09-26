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
extern int fn_82D7C038();


void fn_82DB0380(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x60)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar4 = *(uint *)(iVar1 + *(int *)(param_3 + 0x5c));
      iVar1 = iVar1 + 4;
      if (iVar2 == *(int *)(param_3 + 0x60)) {
        uVar3 = *(int *)(param_3 + 0x58) + uVar4;
      }
      else {
        uVar3 = uVar4 + 0x200;
      }
      for (; uVar4 < uVar3; uVar4 = *(byte *)(uVar4 + 3) + uVar4) {
        fn_82D7C038(param_1,param_2,uVar4,param_4,param_5,param_6);
      }
    } while (iVar2 < *(int *)(param_3 + 0x60));
  }
  return;
}

