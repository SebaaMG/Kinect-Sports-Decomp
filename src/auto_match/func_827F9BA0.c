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
extern int fn_827F9A10();
extern int fn_827F9AB0();
extern int fn_827FA720();
extern int fn_827FACF0();


void fn_827F9BA0(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  
  param_1[0x26] = (int)param_2;
  uVar2 = fn_827F9A10(param_2);
  fn_827F9AB0(param_2,(uVar2 & 0xffff) - 1);
  bVar3 = 0;
  iVar1 = *(int *)(*param_1 + 0x30);
  if (iVar1 != 0) {
    bVar3 = *(char *)(iVar1 + 0x1f) != '\0';
    if (*(char *)(iVar1 + 0x20) != '\0') {
      bVar3 = bVar3 | 2;
    }
    if (*(char *)(iVar1 + 0x21) != '\0') {
      bVar3 = bVar3 | 4;
    }
    if (*(char *)(iVar1 + 0x22) != '\0') {
      bVar3 = bVar3 | 8;
    }
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      bVar3 = bVar3 | 0x10;
    }
    if (*(char *)(iVar1 + 0x1d) != '\0') {
      bVar3 = bVar3 | 0x20;
    }
    if (*(char *)(iVar1 + 0x1e) != '\0') {
      bVar3 = bVar3 | 0x40;
    }
  }
  fn_827FACF0(param_2);
  fn_827FA720(param_2,bVar3);
  return;
}

