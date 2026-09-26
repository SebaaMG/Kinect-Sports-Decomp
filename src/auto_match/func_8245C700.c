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
extern int fn_8245C7B8();
extern int fn_8245C8D0();
extern int fn_82579EF0();
extern int fn_82579F78();


void fn_8245C700(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  fn_8245C7B8();
  iVar3 = param_1 + 0x6c8;
  iVar1 = fn_82579EF0(iVar3,0xffffffff821bacd0,0x8000);
  if (iVar1 < 0x8000) {
    iVar1 = 0x8000;
  }
  else if (0x1000000 < iVar1) {
    iVar1 = 0x1000000;
  }
  *(int *)(param_1 + 0x668) = iVar1;
  iVar1 = fn_82579EF0(iVar3,0xffffffff821bacf0,0x8000);
  if (iVar1 < 0x8000) {
    iVar1 = 0x8000;
  }
  else if (0x200000 < iVar1) {
    iVar1 = 0x200000;
  }
  *(int *)(param_1 + 0x66c) = iVar1;
  uVar2 = fn_82579F78(iVar3,0xffffffff821bad10);
  *(uint *)(param_1 + 0x660) = uVar2 & 0xff;
  fn_8245C8D0(param_1);
  return;
}

