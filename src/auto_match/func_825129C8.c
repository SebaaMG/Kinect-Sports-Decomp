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
extern int fn_82512C30();
extern int fn_82512CC8();
extern int fn_82512E18();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


int fn_825129C8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = fn_82512C30();
  uStack_28 = 0;
  uVar1 = *(uint *)(iVar2 + 0x10);
  lVar3 = (ulonglong)uVar1 + 1;
  iStack_30 = (int)lVar3;
  *(int *)(iVar2 + 0x10) = iStack_30;
  if (lVar3 == 0) {
    iStack_30 = uVar1 + 2;
    *(int *)(iVar2 + 0x10) = iStack_30;
  }
  uStack_2c = param_1;
  fn_82512E18(iVar2 + 0x24,&iStack_30);
  fn_82512CC8(iVar2);
  return iStack_30;
}

