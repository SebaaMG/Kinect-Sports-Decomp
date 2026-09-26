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
extern int fn_82F6DCE0();
extern int fn_82F6EDE8();


void fn_82B7C2F0(int param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x5e0) = *(int *)(param_1 + 0x5e0) + 1;
  lVar1 = fn_82F6DCE0((ulonglong)*(uint *)(param_1 + 0x5dc) +
                            (ulonglong)*(uint *)(param_1 + 0x5d8),
                            0x2000 - (ulonglong)*(uint *)(param_1 + 0x5dc),0xffffffff821c4da8,
                            0xffffffff820db480);
  lVar1 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x5dc);
  *(int *)(param_1 + 0x5dc) = (int)lVar1;
  iVar2 = fn_82F6EDE8(lVar1 + (ulonglong)*(uint *)(param_1 + 0x5d8),0x2000 - lVar1,param_2,param_3)
  ;
  iVar2 = iVar2 + *(int *)(param_1 + 0x5dc);
  *(int *)(param_1 + 0x5dc) = iVar2;
  if (0x1fff < iVar2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db460,0xffffffff820db408,0x631);
  }
  return;
}

