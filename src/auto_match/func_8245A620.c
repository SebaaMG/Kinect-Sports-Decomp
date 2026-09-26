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
extern int fn_82579EF0();
extern int fn_82579F78();


void fn_8245A620(int param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  *(int *)(param_1 + 4) = (int)param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = fn_82579F78(param_2 + 0x6c8,0xffffffff821bab94);
  *(uint *)(param_1 + 8) = uVar1 & 0xff;
  iVar2 = fn_82579EF0(param_2 + 0x6c8,0xffffffff821babac,0);
  if ((iVar2 < 1) || (0x80000 < iVar2)) {
    iVar2 = 0x80000;
  }
  *(int *)(param_1 + 0x80074) = iVar2;
  RtlInitializeCriticalSection(param_1 + 0x8008c);
  return;
}

