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


void fn_825EA908(undefined8 param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uStack_68;
  undefined1 auStack_60 [72];
  undefined4 uStack_18;

  if ((*(int *)(param_2 + 0x80) == 0) || (*(int *)(param_2 + 0x80) == *(int *)(param_3 + 0xc) + 1))
  {
    puVar2 = &uStack_68;
    puVar1 = (undefined8 *)(param_3 + -8);
    lVar3 = 10;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uStack_18 = *(undefined4 *)(param_2 + 0x88);
    FUN_82622f28(param_1,param_2,auStack_60);
  }
  return;
}
