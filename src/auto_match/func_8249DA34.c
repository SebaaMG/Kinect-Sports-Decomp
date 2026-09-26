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


void fn_8249DA34(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_r9;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_r11;
  
  puVar1 = *(undefined4 **)(in_r9 + 4);
  if (in_r11 != puVar1) {
    puVar4 = in_r11 + -4;
    do {
      puVar4[2] = *in_r11;
      puVar2 = in_r11 + 1;
      in_r11 = in_r11 + 2;
      puVar4[3] = *puVar2;
      puVar4 = puVar4 + 2;
    } while (in_r11 != puVar1);
  }
  iVar5 = *(int *)(in_r9 + 4) + -8;
  for (iVar3 = iVar5; iVar3 != *(int *)(in_r9 + 4); iVar3 = iVar3 + 8) {
  }
  *(int *)(in_r9 + 4) = iVar5;
  return;
}

