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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82B86C90();
extern int fn_82B8E280();
extern unsigned int uStack_58;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * fn_82B8EA70(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined4 auStack_60 [2];
  uint uStack_58;
  undefined1 auStack_50 [80];
  
  uVar1 = *(uint *)(param_2 + 8);
  bVar3 = false;
  uStack_58 = 0;
  if (((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 0x19 & 1) == 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((0x52 < uVar1) && (uVar1 < 0x60)) {
      bVar3 = true;
    }
    if (((!bVar3) && (uVar1 != 0x7d)) &&
       (uVar2 = fn_82B86C90(param_2,auStack_50,auStack_60),
       (uVar2 & 0xffffffff) == (ulonglong)((1 << (*(uint *)(param_2 + 8) >> 0xe & 7)) - 1))) {
      fn_82B8E280(param_1,param_3,param_2,uVar2,auStack_50,param_4,auStack_60[0]);
      return param_1;
    }
  }
  *param_1 = (ulonglong)uStack_58 << 0x20;
  return param_1;
}

