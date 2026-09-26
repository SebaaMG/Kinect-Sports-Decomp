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
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;


void fn_82BF9248(int param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined2 uVar3;
  
  uVar2 = lbl_8322FD24;
  uVar3 = (undefined2)param_1;
  if (lbl_8322FD24 != 0xffff) {
    (&lbl_8322F4F8)[lbl_8322FD24] = uVar3;
  }
  bVar1 = lbl_8322FD22 != -1;
  lbl_8322FD24 = uVar3;
  (&lbl_8322F4F8)[param_1] = 0xffff;
  (&lbl_8322B4F8)[param_1] = uVar2;
  if (bVar1) {
    return;
  }
  lbl_8322FD22 = uVar3;
  return;
}

