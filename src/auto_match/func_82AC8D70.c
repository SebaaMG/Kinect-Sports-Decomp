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
extern int fn_82ABE6D0();
extern int fn_82AE91E8();


undefined8 fn_82AC8D70(undefined8 param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar5;
  int iVar3;
  uint uVar4;
  
  if (((*(uint *)(param_2 + 8) >> 5 & 1) == 0) && (cVar5 = fn_82AE91E8(param_2), cVar5 != '\0')) {
    uVar4 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0) || (bVar1 = true, 0x1f < uVar4)) {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = fn_82ABE6D0(param_2);
      if (iVar3 != 0) goto LAB_82ac8d90;
    }
    else {
      uVar4 = *(uint *)((param_2 & 0xfffffffe) + 0x24);
      if (((uVar4 & 1) == 0) && (uVar4 = uVar4 & 0xfffffffe, uVar4 != 0x28)) {
        uVar4 = *(uint *)(uVar4 - 0x20) >> 7 & 0x7f;
        if ((uVar4 == 0) || (bVar1 = true, 0x1f < uVar4)) {
          bVar1 = false;
        }
        if ((bVar1) && (uVar4 = fn_82ABE6D0(), param_2 == uVar4)) {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  else {
LAB_82ac8d90:
    uVar2 = 0;
  }
  return uVar2;
}

