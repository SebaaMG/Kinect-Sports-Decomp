typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


undefined8 fn_823653E0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint auStack_20 [4];

  Function_82520158(0xffffffff821b2b00,auStack_20,0);
  if ((auStack_20[0] == 0 || 0x79ffffff < (auStack_20[0] & 0xff000000)) ||
     ((iVar1 = *(int *)(param_1 + 0xa0), iVar1 != 0 &&
      ((*(int *)(iVar1 + 0x40) == 1 || ((iVar1 != 0 && (*(int *)(iVar1 + 0x40) == 2)))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
