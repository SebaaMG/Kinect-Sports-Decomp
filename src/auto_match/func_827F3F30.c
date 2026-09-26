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
extern unsigned int *auStack_20;
extern unsigned int fStack_28;
extern int fn_827FA7B8();
extern int fn_827FA918();
extern int fn_82809D40();
extern int fn_8280DF98();
extern unsigned int lbl_821AAD20;


double fn_827F3F30(int param_1)

{
  ulonglong uVar1;
  double dVar2;
  float afStack_30 [2];
  float fStack_28;
  undefined1 auStack_20 [16];
  
  fn_827FA918(*(undefined4 *)(param_1 + 8),auStack_20);
  uVar1 = fn_827FA7B8(*(undefined4 *)(param_1 + 8));
  if ((uVar1 & 0xf) == 0) {
    dVar2 = (double)lbl_821AAD20;
  }
  else {
    fn_8280DF98(auStack_20,0xffffffff8219609c,afStack_30);
    dVar2 = (double)fn_82809D40((double)afStack_30[0],(double)fStack_28);
  }
  return dVar2;
}

