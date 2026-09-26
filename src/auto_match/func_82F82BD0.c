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
extern int fn_82F68278();
extern int fn_82F82D08();
extern int fn_82F85D70();
extern int fn_82F85E30();
extern int fn_8306C590();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;
extern unsigned int uStack_40;


ulonglong fn_82F82BD0(ulonglong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint uStack00000014;
  uint uStack_40;
  
  uStack00000014 = (uint)param_1;
  if (uStack00000014 == 0xfffffffe) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 9;
    return 0xffffffffffffffff;
  }
  if (((int)uStack00000014 < 0) || ((ulonglong)lbl_8329F60C <= (param_1 & 0xffffffff))) {
LAB_82f82c20:
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 9;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  iVar3 = (int)uStack00000014 >> 5;
  iVar1 = (uStack00000014 & 0x1f) * 0x48;
  if ((*(byte *)(iVar1 + (&lbl_8329F620)[iVar3] + 4) & 1) == 0) goto LAB_82f82c20;
  fn_82F85E30(param_1);
  if ((*(byte *)(iVar1 + (&lbl_8329F620)[iVar3] + 4) & 1) != 0) {
    fn_82F85D70(param_1);
    iVar3 = fn_8306C590();
    if (iVar3 == 0) {
      uStack_40 = thunk_FUN_82a2b798();
    }
    else {
      uStack_40 = 0;
    }
    if (uStack_40 == 0) goto LAB_82f82cd0;
    puVar4 = (uint *)fn_82F68278();
    *puVar4 = uStack_40;
  }
  puVar2 = (undefined4 *)fn_82F68240();
  *puVar2 = 9;
  uStack_40 = 0xffffffff;
LAB_82f82cd0:
  fn_82F82D08();
  return (ulonglong)uStack_40;
}

