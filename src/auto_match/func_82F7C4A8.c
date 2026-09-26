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
extern int fn_82A1E658();
extern int fn_82F682B0();
extern int fn_82F85CD8();
extern int fn_82F85D70();
extern unsigned int lbl_8329F620;


undefined8 fn_82F7C4A8(undefined8 param_1)

{
  int iVar3;
  int iVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar5;
  
  iVar3 = fn_82F85D70();
  uVar5 = (uint)param_1;
  if (iVar3 != -1) {
    if (((uVar5 == 1) && ((*(byte *)(lbl_8329F620 + 0x94) & 1) != 0)) ||
       ((uVar5 == 2 && ((*(byte *)(lbl_8329F620 + 0x4c) & 1) != 0)))) {
      iVar3 = fn_82F85D70(2);
      iVar4 = fn_82F85D70(1);
      if (iVar4 == iVar3) goto LAB_82f7c534;
    }
    fn_82F85D70(param_1);
    iVar3 = fn_82A1E658();
    if (iVar3 == 0) {
      uVar1 = thunk_FUN_82a2b798();
      goto LAB_82f7c538;
    }
  }
LAB_82f7c534:
  uVar1 = 0;
LAB_82f7c538:
  fn_82F85CD8(param_1);
  *(undefined1 *)((&lbl_8329F620)[(int)uVar5 >> 5] + (uVar5 & 0x1f) * 0x48 + 4) = 0;
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    fn_82F682B0(uVar1);
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

