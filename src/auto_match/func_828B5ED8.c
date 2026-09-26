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
extern int fn_828B5C10();


void fn_828B5ED8(int *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  puVar1 = (undefined2 *)param_1[1];
  if ((puVar1 <= param_2) || (bVar4 = true, param_2 < (undefined2 *)*param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    iVar2 = *param_1;
    if (puVar1 == (undefined2 *)param_1[2]) {
      fn_828B5C10(param_1,1);
    }
    puVar1 = (undefined2 *)param_1[1];
    if (puVar1 != (undefined2 *)0x0) {
      iVar3 = *param_1;
      iVar2 = ((int)param_2 - iVar2 >> 2) * 4;
      *puVar1 = *(undefined2 *)(iVar2 + iVar3);
      puVar1[1] = *(undefined2 *)(iVar2 + iVar3 + 2);
    }
  }
  else {
    if (puVar1 == (undefined2 *)param_1[2]) {
      fn_828B5C10(param_1,1);
    }
    puVar1 = (undefined2 *)param_1[1];
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

