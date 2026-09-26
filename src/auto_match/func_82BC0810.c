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
extern int fn_82B7BD28();


void fn_82BC0810(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = *(undefined4 *)(*param_1 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x10);
  puVar3 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_3;
    puVar2[2] = param_2;
    puVar2[3] = 0;
  }
  puVar3[2] = param_1[1];
  param_1[1] = (int)puVar3;
  return;
}

