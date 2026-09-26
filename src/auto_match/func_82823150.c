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
extern unsigned int lbl_8320A778;


void fn_82823150(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = lbl_8320A778;
  puVar2 = (undefined4 *)*param_1;
  while (puVar1 = puVar2, puVar1 != lbl_8320A778) {
    param_1 = puVar1;
    puVar2 = (undefined4 *)*puVar1;
  }
  *param_2 = (int)param_1;
  puVar2 = (undefined4 *)param_1[1];
  *param_2 = (int)puVar2;
  if (puVar2 == puVar3) {
    *param_2 = 0;
  }
  puVar3 = lbl_8320A778;
  iVar4 = *param_2;
  if (*param_2 == 0) {
    *param_2 = (int)param_1;
    return;
  }
  do {
    iVar5 = iVar4;
    puVar2 = *(undefined4 **)(iVar5 + 4);
    *param_2 = (int)puVar2;
    if (puVar2 == puVar3) {
      *param_2 = 0;
    }
    iVar4 = *param_2;
  } while (*param_2 != 0);
  *param_2 = iVar5;
  return;
}

