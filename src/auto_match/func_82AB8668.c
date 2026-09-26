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
extern int fn_82AB15D0();
extern int fn_82AB50D0();
extern int fn_82AB5180();
extern int fn_82AB92B8();


void fn_82AB8668(int param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    lVar1 = fn_82AB50D0(*(undefined4 *)(param_1 + 0x48),uVar3);
    if (lVar1 != 0) {
      if (((uVar3 & 0xffffffff) == 0) ||
         ((ulonglong)*(uint *)(param_1 + 0x4c) < (uVar3 & 0xffffffff))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d70f0,0xffffffff820d7090,0x298);
      }
      fn_82AB5180(*(undefined4 *)(param_1 + 0x48),uVar3);
      iVar2 = fn_82AB92B8(lVar1);
      if (iVar2 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6840,0xffffffff820d7090,0x29e);
      }
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xffffffff) <= (ulonglong)(*(int *)(param_1 + 0x4c) + 1));
  return;
}

