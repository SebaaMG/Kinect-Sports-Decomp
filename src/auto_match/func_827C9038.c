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
extern int fn_82F63BA0();
extern int fn_82F678E0();
extern int fn_82F67A4C();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


ulonglong fn_827C9038(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  int iStack00000014;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uStack_20 = 0xffffffff;
  iStack00000014 = iVar1;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if ((*(uint *)(iVar1 + 0xc) & 0x40) == 0) {
      fn_82F6AC80(iVar1);
      uStack_20 = fn_82F678E0(iVar1);
      fn_82F67A4C();
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    uVar2 = (ulonglong)uStack_20;
  }
  return uVar2;
}

