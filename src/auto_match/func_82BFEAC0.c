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
extern unsigned int *auStack_40;
extern int fn_82A2B760();


/* WARNING: Removing unreachable block (ram,0x82a2a5a4) */

undefined4 fn_82BFEAC0(void)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 auStack_40 [10];
  
  iVar2 = NtCreateSemaphore(auStack_40,0,0,0x7fffffff);
  if (iVar2 < 0) {
    fn_82A2B760();
    auStack_40[0] = 0;
  }
  else {
    uVar1 = 0xb7;
    if (iVar2 != 0x40000000) {
      uVar1 = 0;
    }
    thunk_FUN_82a2b748(uVar1);
  }
  return auStack_40[0];
}

