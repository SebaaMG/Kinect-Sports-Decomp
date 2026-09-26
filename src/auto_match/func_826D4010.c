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
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826AE560();
extern int fn_826D18D0();
extern int fn_826D1970();
extern unsigned int lbl_82005700;
extern unsigned int lbl_8200C1CC;


void fn_826D4010(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_8200C1CC;
  fn_826AE560(param_1[0x32],param_1[0x33]);
  fn_8267BE38(param_1[0x32]);
  fn_82696330(param_1 + 0x2c);
  fn_8267BE38(param_1[0x29]);
  fn_826D1970(param_1 + 0x20);
  fn_8269A990(param_1[0x1a],param_1[0x1b]);
  fn_8267BE38(param_1[0x1a]);
  puVar2 = param_1 + 0x1a;
  lVar1 = 3;
  do {
    puVar2 = puVar2 + -4;
    fn_82696330(puVar2);
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  fn_826D18D0(param_1 + 2);
  *param_1 = &lbl_82005700;
  return;
}

