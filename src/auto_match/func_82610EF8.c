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
extern int fn_827D9698();
extern int fn_827D9ED8();
extern int fn_827DBA00();
extern unsigned int lbl_8326B7C8;


void fn_82610EF8(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    lVar2 = fn_827D9698((ulonglong)uVar1 + 0x70);
    lVar3 = fn_827D9ED8((ulonglong)uVar1);
    fn_827DBA00(lbl_8326B7C8,*(undefined4 *)(param_1 + 0x18),-(lVar2 != 0x36) & 1,
                      lVar3 + param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

