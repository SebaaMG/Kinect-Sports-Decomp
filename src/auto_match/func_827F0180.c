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
extern int fn_827EFA58();
extern int fn_827EFB98();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827F3ED8();
extern int fn_827F3EE0();
extern int fn_827F74C0();
extern int fn_827F92F0();
extern int fn_82A1DDC0();


void fn_827F0180(int param_1,undefined8 param_2,undefined1 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(param_1 + 300);
  *(ushort *)(param_1 + 300) = uVar1 & 0xfffe | 1;
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      uVar2 = fn_827F3EB0();
      fn_82A1DDC0(param_2,*(undefined4 *)(param_1 + 0x110),(uVar2 & 0x3ffffff) << 6);
      uVar3 = fn_827F3C20(param_1);
      fn_827F74C0(uVar3,param_2);
      uVar3 = fn_827F3C20(param_1);
      fn_827F92F0(uVar3,param_3);
    }
    if (((param_4 & 0xffffffff) != 0) && (iVar4 = fn_827F3ED8(param_1), iVar4 != 0)) {
      uVar2 = fn_827F3ED8(param_1);
      uVar3 = fn_827EFA58(param_1);
      fn_82A1DDC0(param_4,uVar3,(uVar2 & 0x3fffffff) << 2);
    }
    if (((param_5 & 0xffffffff) != 0) && (iVar4 = fn_827F3EE0(param_1), iVar4 != 0)) {
      uVar2 = fn_827F3EE0(param_1);
      uVar3 = fn_827EFB98(param_1);
      fn_82A1DDC0(param_5,uVar3,(uVar2 & 0x3fffffff) << 2);
    }
  }
  return;
}

