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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82720748();


void fn_827255B0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int aiStack_20 [2];
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1,0);
  fn_82696D38(aiStack_20,uVar3,uVar1,0xffffffffffffffff,0);
  iVar2 = *(int *)(param_1 + 0x18);
  fn_82720748(iVar2,*(undefined4 *)(param_1 + 8),aiStack_20,
                (ulonglong)*(uint *)(param_1 + 0x1c) - 1,
                (longlong)(*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 4) +
                ((ulonglong)*(uint *)(iVar2 + 0x1c) & 0x7ffffff) * 0x20 + -0x21);
  lVar4 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
  *(int *)(aiStack_20[0] + 8) = (int)lVar4;
  if (lVar4 == 0) {
    fn_826944C8(aiStack_20[0]);
  }
  return;
}

