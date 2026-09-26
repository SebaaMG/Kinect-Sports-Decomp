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
extern int fn_826DA0A0();
extern int fn_82758FE8();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_8200C128;


void fn_826D2A40(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  *param_1 = &lbl_8200C128;
  if (param_1[9] != 0) {
    lVar2 = 0;
    do {
      fn_82758FE8(lVar2 + (ulonglong)(uint)param_1[8]);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar1 < (uint)param_1[9]);
  }
  fn_8267BE38(param_1[0xb]);
  if (param_1[0xc] != 0) {
    fn_8267C498();
  }
  fn_8267BE38(param_1[8]);
  fn_826DA0A0(param_1 + 5);
  *param_1 = &lbl_8200BD80;
  return;
}

