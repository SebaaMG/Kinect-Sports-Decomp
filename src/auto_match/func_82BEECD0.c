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
extern int fn_82BE19A0();
extern int fn_82BE1A10();
extern int fn_82BE1FF0();
extern int fn_82BE51E8();
extern int fn_82BE5240();
extern unsigned int lbl_820EB148;


undefined4 *
fn_82BEECD0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_82BE51E8(param_1,0xffffffff820eb16c);
  param_1[6] = param_5;
  param_1[5] = 0;
  *param_1 = &lbl_820EB148;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = param_3;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    fn_82BE5240(param_1,400,0xffffffff82196582);
  }
  else {
    iVar1 = fn_82BE19A0(param_2);
    param_1[5] = iVar1;
    if (iVar1 == 0) {
      param_1[4] = 0;
    }
    else if (param_5 == 0) {
      fn_82BE1A10();
      uVar2 = fn_82BE1FF0();
      param_1[6] = uVar2;
    }
  }
  return param_1;
}

