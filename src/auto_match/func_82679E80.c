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
extern int fn_8262FEC8();
extern int fn_82676C88();
extern int fn_82679460();
extern int fn_8267AC38();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_826EA050();
extern unsigned int lbl_8200519C;
extern unsigned int lbl_8200527C;


void fn_82679E80(undefined4 *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  *param_1 = &lbl_8200527C;
  fn_82679460();
  fn_826EA050(param_1 + 0x881);
  fn_8267BE38(param_1[0x87e]);
  fn_82676C88(param_1[0x87b],param_1[0x87c]);
  fn_8267BE38(param_1[0x87b]);
  fn_8267AC38(param_1 + 0x879);
  fn_8267BE38(param_1[0x75]);
  fn_826EA050(param_1 + 0x57);
  piVar2 = param_1 + 0x35;
  lVar1 = 4;
  do {
    piVar2 = piVar2 + -1;
    if (*piVar2 != 0) {
      fn_8262FEC8();
    }
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  piVar2 = param_1 + 0x30;
  lVar1 = 0x12;
  do {
    piVar2 = piVar2 + -1;
    if (*piVar2 != 0) {
      fn_8262FEC8();
    }
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  piVar2 = param_1 + 0x1d;
  lVar1 = 0x12;
  do {
    piVar2 = piVar2 + -1;
    if (*piVar2 != 0) {
      fn_8262FEC8();
    }
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  *param_1 = &lbl_8200519C;
  fn_8267C488(param_1);
  return;
}

