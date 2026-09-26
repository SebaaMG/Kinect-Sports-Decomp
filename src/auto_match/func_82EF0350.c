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
extern int fn_82EEFC00();
extern int fn_82EEFD30();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


undefined8 fn_82EF0350(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *apuStack_60 [4];
  ulonglong uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar2 = 0x2c;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x26c) != 0) {
      do {
        fn_82EEFD30(param_1 + 0x1b0,uVar3,apuStack_60);
        uVar3 = uVar3 + 1;
        uStack_50 = *apuStack_60[0];
        lVar2 = (uStack_50 >> 0x20 & 0x7fffffff) * 2 + lVar2 + 2;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x26c));
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x1ac) != 0) {
      do {
        fn_82EEFC00(param_1 + 0x48,uVar3,apuStack_60);
        uVar3 = uVar3 + 1;
        uStack_50 = *apuStack_60[0];
        uStack_48 = *(uint *)(apuStack_60[0] + 1);
        uStack_44 = *(undefined4 *)((int)apuStack_60[0] + 0xc);
        lVar2 = ((ulonglong)uStack_48 & 0x7fffffff) * 2 + lVar2 + 8;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1ac));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
    *(longlong *)(param_1 + 0x20) = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}

