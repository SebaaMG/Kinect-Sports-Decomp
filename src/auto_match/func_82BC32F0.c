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
extern int fn_82AB15D0();
extern unsigned int lbl_8316FF54;


bool fn_82BC32F0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(&lbl_8316FF54 + iVar1 * 0x34);
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3ca8,0xffffffff820e3b18,0x5b9);
  }
  if (iVar1 == 0x35) {
    if (*(char *)(param_1 + 0x99) != *(char *)(param_1 + 0x9a)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c6c,0xffffffff820e3b18,0x5bc);
    }
    *(bool *)(param_1 + 0x9a) = *(char *)(param_1 + 0x9a) == '\0';
  }
  return iVar1 == 0x35;
}

