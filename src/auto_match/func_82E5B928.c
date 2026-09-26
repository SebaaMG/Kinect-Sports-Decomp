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
extern int fn_82E5AFB0();
extern int fn_82E5B608();
extern int fn_82E5BF90();


undefined8 fn_82E5B928(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint auStack_50 [2];
  longlong alStack_48 [9];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar3 = 0x58;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x160) != 0) {
      do {
        lVar2 = fn_82E5AFB0(param_1 + 0xf8,uVar4,auStack_50);
        uVar4 = uVar4 + 1;
        lVar3 = (ulonglong)*(ushort *)((-(uint)(lVar2 != 0) & auStack_50[0]) + 6) + lVar3 + 4;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x160));
    }
    lVar2 = fn_82E5B608(param_1);
    lVar2 = lVar2 + lVar3;
    alStack_48[0] = 0;
    lVar3 = lVar2;
    if (*(int *)(param_1 + 0x88) != 0) {
      fn_82E5BF90(*(int *)(param_1 + 0x88),0,alStack_48);
      lVar3 = alStack_48[0] + lVar2;
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar3;
    }
    *(longlong *)(param_1 + 0x20) = lVar3;
    uVar1 = 0;
  }
  return uVar1;
}

