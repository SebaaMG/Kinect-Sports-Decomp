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


undefined8 fn_825DB6A8(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;

  iVar1 = param_2 + 0x38;
  iVar2 = param_3 + 0xa0;
  lVar3 = 3;
  do {
    Function_82A1DD38(iVar1,iVar2,0xc);
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 0xc;
  } while (lVar3 != 0);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_3 + 0xc4);
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 200);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x9c);
  return 1;
}
