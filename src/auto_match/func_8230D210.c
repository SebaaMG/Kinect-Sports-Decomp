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
extern int fn_822C69F0();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8288B760();
extern int fn_82F68B7C();


void fn_8230D210(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = fn_82F68B7C(*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(iVar1 + 0x168) == 0) {
    uVar2 = *(uint *)(iVar1 + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if ((uVar2 == 0) && (*(int *)(iVar1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar3 = (ulonglong)*(uint *)(iVar1 + 0x114) + 0x50;
    fn_822C6D68(lVar3,iVar1 + 0x80,iVar1 + 0xc0);
    fn_822C69F0(lVar3,iVar1 + 0x80,iVar1 + 0xc0);
  }
  return;
}

