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
extern unsigned int *auStack_20;
extern int fn_826BCD88();
extern int fn_826BD078();


undefined8 fn_826EF920(uint *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint auStack_20 [2];
  
  auStack_20[0] = *param_1;
  uVar3 = param_1[1] + auStack_20[0];
  if (auStack_20[0] != uVar3) {
    do {
      uVar1 = fn_826BD078(auStack_20);
      if ((uVar1 == 0) || (iVar2 = fn_826BCD88(0xffffffff820094c8,uVar1 & 0xffff), iVar2 == 0)) {
        return 0;
      }
    } while (auStack_20[0] < uVar3);
  }
  return 1;
}

