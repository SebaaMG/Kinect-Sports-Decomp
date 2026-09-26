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


void fn_8249D154(void)

{
  int in_r6;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_r11;
  longlong lVar5;
  
  iVar3 = *(int *)(in_r6 + 4);
  if (in_r11 != iVar3) {
    iVar4 = in_r11 + -0x14;
    do {
      puVar2 = (undefined4 *)(in_r11 + -4);
      puVar1 = (undefined4 *)(iVar4 + -4);
      lVar5 = 5;
      do {
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      in_r11 = in_r11 + 0x14;
      iVar4 = iVar4 + 0x14;
    } while (in_r11 != iVar3);
  }
  iVar4 = *(int *)(in_r6 + 4) + -0x14;
  for (iVar3 = iVar4; iVar3 != *(int *)(in_r6 + 4); iVar3 = iVar3 + 0x14) {
  }
  *(int *)(in_r6 + 4) = iVar4;
  return;
}

