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


void fn_82A3AAB8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar3;
  undefined1 *puVar2;
  
  uVar1 = *(char *)(param_1 + 0x18) - param_2;
  cVar3 = (char)uVar1;
  *(char *)(param_1 + 0x18) = cVar3;
  *(uint *)(param_1 + 0x14) = param_3 << (uVar1 & 0x3f) | *(uint *)(param_1 + 0x14);
  if ('\x10' < cVar3) {
    return;
  }
  do {
    if (*(uint *)(param_1 + 0x85c) <= *(uint *)(param_1 + 0x858)) {
      *(undefined1 *)(param_1 + 0x19) = 1;
      *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_1 + 0x854);
    }
    **(undefined1 **)(param_1 + 0x858) = *(undefined1 *)(param_1 + 0x15);
    puVar2 = (undefined1 *)(*(int *)(param_1 + 0x858) + 1);
    *(undefined1 **)(param_1 + 0x858) = puVar2;
    *puVar2 = *(undefined1 *)(param_1 + 0x14);
    cVar3 = *(char *)(param_1 + 0x18) + '\x10';
    *(int *)(param_1 + 0x858) = *(int *)(param_1 + 0x858) + 1;
    *(char *)(param_1 + 0x18) = cVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 0x10;
  } while (cVar3 < '\x11');
  return;
}

