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


void fn_830828C0(int param_1)

{
  undefined1 uVar1;
  ushort *puVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x13') {
    uVar1 = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xc) = uVar1;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x400;
  }
  if ((*(char *)(param_1 + 0xc) != '\x18') && (*(char *)(param_1 + 0xc) != '\x1f')) {
    return;
  }
  puVar2 = (ushort *)(param_1 + 0x10);
  if ((*(ushort *)(param_1 + 0x10) & 8) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *puVar2 = *puVar2 & 0xfff7;
  }
  if ((*puVar2 & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *puVar2 = *puVar2 & 0xffef;
  }
  if ((*puVar2 & 0x20) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 8;
  *puVar2 = *puVar2 & 0xffdf;
  return;
}

