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
extern int fn_827B5EA8();
extern int fn_827B7040();
extern int fn_827B8018();
extern int fn_827B8478();
extern unsigned int lbl_82005BB4;


void fn_827B84F8(int param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  fn_827B8018();
  fn_827B8478(param_1 + 0x710);
  fn_827B7040(param_1 + 0x6a0);
  fn_8267BE38(*(undefined4 *)(param_1 + 0x364));
  fn_8267BE38(*(undefined4 *)(param_1 + 0x358));
  fn_827B5EA8(param_1 + 0x348);
  fn_8267BE38(*(undefined4 *)(param_1 + 0x33c));
  fn_827B5EA8(param_1 + 0x304);
  fn_827B5EA8(param_1 + 0x2f4);
  fn_8267BE38(*(undefined4 *)(param_1 + 0x2e0));
  fn_8267BE38(*(undefined4 *)(param_1 + 0x2d4));
  if (*(int *)(param_1 + 0x2d0) != 0) {
    fn_8267C498();
  }
  if (*(int *)(param_1 + 0x2b8) != 0) {
    fn_8267C498();
  }
  puVar1 = (undefined4 *)(param_1 + 700);
  lVar2 = 0x20;
  do {
    puVar1 = puVar1 + -5;
    *puVar1 = &lbl_82005BB4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_8267BE38(*(undefined4 *)(param_1 + 0x2c));
  fn_827B5EA8(param_1 + 0x1c);
  return;
}

