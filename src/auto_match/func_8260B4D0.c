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
extern int fn_827F3C20();
extern int fn_827F40B8();
extern int fn_827FA1E8();
extern int fn_82F68CC0();


void fn_8260B4D0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar5;
  
  fn_827F40B8();
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar4 = fn_827F3C20(param_1);
    iVar6 = fn_827F3C20(param_1);
    uVar1 = *(ushort *)(iVar6 + 0x32);
    iVar6 = fn_827F3C20(param_1);
    uVar2 = *(ushort *)(iVar6 + 0x2e);
    iVar6 = fn_827F3C20(param_1);
    uVar3 = *(uint *)(iVar6 + 0x84);
    uVar5 = fn_827FA1E8(uVar4);
    fn_82F68CC0((ulonglong)uVar3 + ((ulonglong)uVar2 + (ulonglong)uVar1 * 0xc) * 4,
                 *(undefined4 *)(param_1 + 0xbc),(uVar5 & 0x3fffffff) << 2);
  }
  return;
}

