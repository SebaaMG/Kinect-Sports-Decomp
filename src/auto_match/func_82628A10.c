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
extern int fn_827D9EA8();
extern int fn_827DB6D0();
extern int fn_827DBA00();
extern int fn_827DBD80();


void fn_82628A10(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_827DB6D0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),param_2,0
                            ,param_3,param_1 + 0x24);
  if (iVar2 == 0) {
    uVar1 = fn_827D9EA8(*(undefined4 *)(param_1 + 0xc));
    iVar2 = fn_827DBA00(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),uVar1,0
                              ,0,0,param_1 + 0x1c,param_1 + 0x20);
    if (iVar2 == 0) {
      fn_827DBD80(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0xc),param_2,0,
                        param_3,param_1 + 0x34);
    }
  }
  return;
}

