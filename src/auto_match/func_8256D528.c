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


undefined4 * fn_8256D528(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [4];
  int iStack_1c;

  puVar2 = (undefined4 *)Function_82365BD8(auStack_20);
  uVar1 = puVar2[1];
  puVar2[1] = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *puVar2;
  *puVar2 = *param_1;
  *param_1 = uVar1;
  if (iStack_1c != 0) {
    Function_822315A0();
  }
  return param_1;
}
