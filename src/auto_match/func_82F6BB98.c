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
extern int fn_82F7C468();
extern int fn_82F7C9A0();


undefined8 fn_82F6BB98(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if ((param_1[3] & 3) == 2) {
    if ((param_1[3] & 0x108) != 0) {
      uVar3 = param_1[2];
      lVar5 = (ulonglong)*param_1 - (ulonglong)uVar3;
      if (0 < lVar5) {
        uVar1 = fn_82F7C468();
        iVar2 = fn_82F7C9A0(uVar1,(ulonglong)uVar3,lVar5);
        uVar3 = param_1[3];
        if (iVar2 == (int)lVar5) {
          if ((uVar3 & 0x80) == 0) goto LAB_82f6bc10;
          uVar3 = uVar3 & 0xfffffffd;
        }
        else {
          uVar4 = 0xffffffffffffffff;
          uVar3 = uVar3 | 0x20;
        }
        param_1[3] = uVar3;
      }
    }
  }
LAB_82f6bc10:
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar4;
}

