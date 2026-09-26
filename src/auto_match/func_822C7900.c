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


void fn_822C7900(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (*(char *)(iVar4 + 0x45) != '\0') {
    return;
  }
  puVar1 = *(undefined4 **)(iVar4 + 8);
  if (*(char *)((int)puVar1 + 0x45) == '\0') {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar2 = puVar3, *(char *)((int)puVar2 + 0x45) == '\0') {
      puVar1 = puVar2;
      puVar3 = (undefined4 *)*puVar2;
    }
    *param_1 = (int)puVar1;
    return;
  }
  while ((iVar4 = *(int *)(iVar4 + 4), *(char *)(iVar4 + 0x45) == '\0' &&
         (*param_1 == *(int *)(iVar4 + 8)))) {
    *param_1 = iVar4;
  }
  *param_1 = iVar4;
  return;
}

