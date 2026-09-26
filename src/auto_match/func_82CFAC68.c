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
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6B890();
extern int fn_82F6BB5C();
extern unsigned int iStack00000014;


ulonglong fn_82CFAC68(int param_1)

{
  int iVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  uint uVar4;
  int iStack00000014;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iStack00000014 = iVar1;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar2 = 0xffffffffffffffff;
  }
  else {
    fn_82F6AC80(iVar1);
    uVar4 = fn_82F6B890(iVar1);
    fn_82F6BB5C();
    uVar2 = (ulonglong)uVar4;
  }
  return uVar2;
}

