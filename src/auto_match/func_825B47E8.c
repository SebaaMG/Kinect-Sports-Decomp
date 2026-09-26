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


void fn_825B47E8(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  puVar1 = (undefined4 *)param_1[1];
  if ((puVar1 == (undefined4 *)0x0) || (param_2 <= puVar1)) {
    param_2[1] = puVar1;
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = param_2;
    }
    param_1[1] = (int)param_2;
  }
  else {
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    while ((iVar2 != 0 && (puVar3 = (undefined4 *)*piVar4, puVar3 < param_2))) {
      iVar2 = puVar3[1];
      puVar1 = puVar3;
      piVar4 = puVar3 + 1;
    }
    iVar2 = *piVar4;
    *param_2 = puVar1;
    param_2[1] = iVar2;
    *piVar4 = (int)param_2;
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[1] = param_2;
    }
  }
  *param_1 = *param_1 + 1;
  return;
}

