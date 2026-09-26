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
extern int fn_8288B338();
extern int fn_82897D88();
extern unsigned int lbl_82196884;
extern unsigned int lbl_82196AF4;
extern unsigned int lbl_82196AFC;
extern unsigned int lbl_82196B0C;
extern unsigned int lbl_82196B1C;
extern unsigned int lbl_821970C0;
extern unsigned int lbl_82197534;


void fn_82232658(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_82196AF4;
  param_1[0x251] = &lbl_82196B0C;
  fn_82897D88(param_1 + 0x251);
  param_1[0x237] = &lbl_82197534;
  fn_82897D88(param_1 + 0x237);
  param_1[0x21d] = &lbl_82197534;
  fn_82897D88(param_1 + 0x21d);
  param_1[0x207] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x207);
  param_1[0x1f1] = &lbl_821970C0;
  fn_82897D88(param_1 + 0x1f1);
  puVar2 = param_1 + 0x1f1;
  lVar1 = 0x13;
  do {
    puVar2 = puVar2 + -0x16;
    *puVar2 = &lbl_82196B1C;
    fn_82897D88(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  param_1[0x23] = &lbl_82196B0C;
  fn_82897D88(param_1 + 0x23);
  param_1[0xd] = &lbl_82196AFC;
  fn_82897D88(param_1 + 0xd);
  *param_1 = &lbl_82196884;
  fn_8288B338(param_1);
  return;
}

