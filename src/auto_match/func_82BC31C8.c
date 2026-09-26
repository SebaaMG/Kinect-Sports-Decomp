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


void fn_82BC31C8(int *param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 4))();
  iVar1 = *(int *)(&lbl_8316FF54 + param_1[6] * 0x34);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3ca8,0xffffffff820e3b18,0x598);
  }
  if (param_4 != '\0') {
    if (param_1[6] != 0x34) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c90,0xffffffff820e3b18,0x59a);
    }
    param_1[6] = 0x35;
    bVar2 = *(char *)((int)param_1 + 0x9a) == '\0';
    *(bool *)((int)param_1 + 0x9a) = bVar2;
    if ((bool)*(char *)((int)param_1 + 0x99) != bVar2) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c6c,0xffffffff820e3b18,0x59e);
    }
  }
  *(undefined1 *)(param_1 + 0x21) = param_2;
  *(undefined1 *)((int)param_1 + 0x85) = param_2;
  *(undefined1 *)((int)param_1 + 0x86) = param_2;
  *(undefined1 *)((int)param_1 + 0x87) = param_2;
  if (iVar3 == 2) {
    *(undefined1 *)(param_1 + 0x22) = param_3;
    *(undefined1 *)((int)param_1 + 0x89) = param_3;
    *(undefined1 *)((int)param_1 + 0x8a) = param_3;
    *(undefined1 *)((int)param_1 + 0x8b) = param_3;
  }
  return;
}

