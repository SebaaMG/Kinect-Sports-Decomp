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


void fn_83062AD8(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  puVar5 = (undefined4 *)(param_3 + 8);
  if ((undefined4 *)(param_3 + 8) != puVar1) {
    puVar4 = (undefined4 *)(param_3 + -8);
    do {
      puVar4[2] = *puVar5;
      puVar2 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      puVar4[3] = *puVar2;
      puVar4 = puVar4 + 2;
    } while (puVar5 != puVar1);
  }
  iVar6 = *(int *)(param_2 + 4) + -8;
  for (iVar3 = iVar6; iVar3 != *(int *)(param_2 + 4); iVar3 = iVar3 + 8) {
  }
  *(int *)(param_2 + 4) = iVar6;
  *param_1 = param_3;
  return;
}

