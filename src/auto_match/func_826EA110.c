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


ulonglong fn_826EA110(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  pcVar3 = (char *)((int)puVar1 + 0x21);
  uVar2 = (**(code **)(*(int *)puVar1[7] + 0x28))((int *)puVar1[7],pcVar3,0x800);
  if ((uVar2 & 0xffffffff) == 0) {
    if (*(char *)(puVar1 + 8) != '\0') {
      return uVar2;
    }
    *(undefined1 *)((int)puVar1 + 0x22) = 0xd9;
    uVar2 = 2;
    *pcVar3 = -1;
  }
  if ((((*(char *)(puVar1 + 8) != '\0') && (3 < (uVar2 & 0xffffffff))) && (*pcVar3 == -1)) &&
     (((*(char *)((int)puVar1 + 0x22) == -0x27 && (*(char *)((int)puVar1 + 0x23) == -1)) &&
      (*(char *)(puVar1 + 9) == -0x28)))) {
    *(undefined1 *)(puVar1 + 9) = 0xd9;
    *(undefined1 *)((int)puVar1 + 0x22) = 0xd8;
  }
  puVar1[1] = (int)uVar2;
  *puVar1 = pcVar3;
  *(undefined1 *)(puVar1 + 8) = 0;
  return 1;
}

