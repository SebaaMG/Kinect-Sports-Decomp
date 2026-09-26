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
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8267C8D8();
extern int fn_8267D9C0();
extern int fn_82687270();
extern int fn_82687EE0();
extern int fn_826EA050();
extern int fn_826F31A8();
extern int fn_826F3368();
extern unsigned int lbl_8200C69C;


void fn_826D9C78(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x20];
  *param_1 = &lbl_8200C69C;
  fn_8267C8D8((ulonglong)uVar1 + 8);
  fn_826F31A8(param_1 + 6);
  fn_8267D9C0((ulonglong)uVar1 + 8);
  if (param_1[0x20] != 0) {
    fn_8267C4F0();
  }
  fn_82687EE0(param_1[0x1c],param_1[0x1d]);
  fn_8267BE38(param_1[0x1c]);
  fn_826EA050(param_1 + 0x15);
  fn_82687EE0(param_1[0x12],param_1[0x13]);
  fn_8267BE38(param_1[0x12]);
  fn_826F3368(param_1 + 6);
  if (param_1[3] != 0) {
    fn_82687270();
  }
  fn_8267C488(param_1);
  return;
}

