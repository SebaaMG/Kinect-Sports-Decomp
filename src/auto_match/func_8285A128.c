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
extern int fn_8280ACD8();
extern int fn_82859BE8();
extern int fn_8285F118();
extern unsigned int lbl_83211330;


void fn_8285A128(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50) + param_3;
  iVar2 = iVar1 + 0x60;
  if ((param_2 & 0xff) == 0) {
    iVar2 = 0;
  }
  fn_8280ACD8(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  if ((param_2 & 0xff) != 0) {
    *(int *)(iVar1 + 0x54) = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  lbl_83211330 = iVar2;
  if ((iVar2 != 0) && (iVar1 = fn_8285F118(iVar2), iVar1 == 0)) {
    fn_82859BE8(iVar2,param_2,param_3);
  }
  return;
}

