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
extern unsigned int *auStack_1fc0;
extern int fn_82A83D28();
extern int fn_82A83E00();
extern int fn_82A83F30();
extern int fn_82A84058();
extern int fn_82A84188();
extern int fn_82A842B8();
extern int fn_82A84308();
extern int fn_82A86BE8();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1b3c;
extern unsigned int uStack_1b40;


void fn_82A84A00(double param_1,double param_2,uint *param_3,char param_4)

{
  double dVar1;
  undefined1 auStack_1fc0 [1152];
  uint uStack_1b40;
  undefined4 uStack_1b3c;
  
  fn_82A86BE8(&uStack_1b40);
  *param_3 = uStack_1b40;
  fn_82F68CC0(param_3[1],uStack_1b3c,(ulonglong)uStack_1b40 * 0x60);
  dVar1 = (double)lbl_821AAD20;
  if (param_2 < dVar1) {
    fn_82A84308(-param_2,auStack_1fc0,param_3);
  }
  else {
    fn_82A842B8(param_2);
  }
  fn_82A83D28();
  if (param_4 == '\x01') {
    if (param_1 < dVar1) {
      fn_82A84058(-param_1,auStack_1fc0,param_3);
    }
    else {
      fn_82A83E00(param_1);
    }
  }
  else {
    if (param_4 != '\x02') {
      return;
    }
    if (dVar1 < param_1) {
      fn_82A83F30(param_1);
    }
    else {
      fn_82A84188(-param_1,auStack_1fc0,param_3);
    }
  }
  fn_82A83D28();
  return;
}

