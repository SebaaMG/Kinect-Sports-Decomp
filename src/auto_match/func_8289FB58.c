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
extern unsigned int *auStack_30;
extern int fn_8265CA20();
extern int fn_82883FC8();
extern int fn_8289F4C8();
extern int fn_8289F560();
extern int fn_828A1C98();
extern int fn_828A4E50();
extern unsigned int lbl_82023C48;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_8289FB58(undefined4 *param_1)

{
  uint uVar1;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *param_1 = &lbl_82023C48;
  if (param_1[2] != -1) {
    fn_828A4E50(param_1[0x14]);
  }
  if (-1 < (int)param_1[10]) {
    fn_82883FC8();
    param_1[10] = 0x80000000;
  }
  auStack_30[0] = param_1[3];
  uVar1 = param_1[0x14];
  fn_828A1C98(&uStack_28,(ulonglong)uVar1 + 0x21c,auStack_30);
  fn_8289F4C8(auStack_30,(ulonglong)uVar1 + 0x21c,uStack_28,uStack_24);
  fn_8289F560(auStack_30,param_1 + 0x15,*(undefined4 *)param_1[0x16]);
  fn_8265CA20(param_1[0x16]);
  if (0xf < (uint)param_1[0x10]) {
    fn_8265CA20(param_1[0xb]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0xf;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

