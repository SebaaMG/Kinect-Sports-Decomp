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
extern unsigned int *auStack_40;
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826E17F0();
extern int fn_826E1870();
extern int fn_826E7A08();
extern int fn_826F6710();
extern int fn_826F6798();
extern int fn_826FA590();


void fn_826E2D78(int param_1)

{
  longlong lVar1;
  char cVar3;
  longlong lVar2;
  int iVar4;
  undefined4 auStack_40 [16];
  
  fn_826A9280(param_1 + 0x14,0xffffffff8200d0a8);
  iVar4 = *(int *)(param_1 + 0x314);
  if (iVar4 == 0) {
    iVar4 = param_1 + 0x28;
  }
  lVar1 = fn_826FA590(iVar4,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2c));
  cVar3 = fn_826F6710(iVar4);
  if (cVar3 != '\0') {
    lVar1 = lVar1 + 4;
  }
  if (*(uint *)(*(int *)(param_1 + 0x20) + 0x2c) < 6) {
    lVar2 = fn_826E1870(param_1,lVar1);
  }
  else {
    lVar2 = fn_826E17F0();
  }
  if (cVar3 == '\0') {
    fn_826E7A08(iVar4,lVar2 + 4,lVar1);
  }
  else {
    fn_826E7A08(iVar4,lVar2 + 8,lVar1 + -4);
    fn_826F6798(lVar2 + 4);
  }
  auStack_40[0] = (undefined4)lVar2;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_40);
  return;
}

