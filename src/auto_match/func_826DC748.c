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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();
extern int fn_826D6370();
extern int fn_826E54D8();
extern int fn_827B0A40();
extern unsigned int lbl_8200C6C0;


void fn_826DC748(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &lbl_8200C6C0;
  if (param_1[8] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1[8] + 0x80);
  }
  if (iVar2 != 0) {
    fn_8267C4C8(iVar2);
  }
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x7c) == 1) {
      lVar3 = (ulonglong)*(uint *)(iVar1 + 0x80) + 8;
      fn_8267C8D8(lVar3);
      *(undefined4 *)(iVar1 + 0x7c) = 3;
      fn_8267CB10((ulonglong)*(uint *)(iVar1 + 0x80) + 0x1c);
      fn_8267D9C0(lVar3);
    }
    if (param_1[8] != 0) {
      fn_8267C4F0();
    }
    param_1[8] = 0;
  }
  iVar1 = param_1[0xc];
  if (iVar1 != 0) {
    fn_827B0A40(iVar1);
    fn_8267BE38(iVar1);
  }
  if (param_1[7] != 0) {
    fn_8267C498();
  }
  param_1[7] = 0;
  if (iVar2 != 0) {
    fn_826D6370(iVar2);
    fn_8267C4F0(iVar2);
  }
  if (param_1[8] != 0) {
    fn_8267C4F0();
  }
  if (param_1[7] != 0) {
    fn_8267C498();
  }
  fn_826E54D8(param_1);
  return;
}

