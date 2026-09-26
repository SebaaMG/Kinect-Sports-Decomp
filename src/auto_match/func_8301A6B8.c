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
extern int fn_82FB60A0();
extern unsigned int lbl_831BC768;


undefined8 fn_8301A6B8(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  uVar2 = fn_82FB60A0(param_1 + 4,8,0xffffffffffffffff,lbl_831BC768);
  uVar1 = lbl_831BC768;
  if ((int)uVar2 == 1) {
    *(undefined4 *)(param_1 + 0x32c) = 0;
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    puVar3 = (undefined4 *)(param_1 + 0x24);
    lVar4 = 0xc1;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = 1;
  }
  return uVar2;
}

