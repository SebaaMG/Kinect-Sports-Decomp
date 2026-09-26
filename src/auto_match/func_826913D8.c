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
extern int fn_82691248();
extern int fn_8270AC48();
extern unsigned int lbl_831F129C;


void fn_826913D8(int param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(((uint)param_2 >> 0x11 & 0x7ff8) + lbl_831F129C + 4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(((uint)param_2 >> 10 & 0x3fc) + iVar3);
  }
  uVar1 = 0x10;
  if (0xf < (param_3 & 0xffffffff)) {
    uVar1 = param_3;
  }
  fn_8270AC48(param_1 + 0x10,iVar3,param_2,
                    *(uint *)(param_1 + 0x14) + uVar1 & ~(ulonglong)*(uint *)(param_1 + 0x14));
  lVar2 = (ulonglong)*(uint *)(iVar3 + 0x10) - 1;
  *(int *)(iVar3 + 0x10) = (int)lVar2;
  if (lVar2 == 0) {
    fn_82691248(param_1,iVar3);
  }
  return;
}

