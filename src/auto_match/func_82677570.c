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
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_826311B8();
extern unsigned int lbl_82005328;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82677570(int param_1,undefined4 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar1 = (param_3 & 0xffffffff) >> 2;
  fStack_20 = (float)param_2[1] * lbl_82005328;
  fStack_1c = (float)param_2[3] * lbl_82005328;
  fStack_18 = (float)param_2[5] * lbl_82005328;
  uStack_30 = *param_2;
  fStack_14 = (float)param_2[7] * lbl_82005328;
  uStack_2c = param_2[2];
  uStack_28 = param_2[4];
  uStack_24 = param_2[6];
  fn_826311B8(*(undefined4 *)(param_1 + 0xd8),param_3,&uStack_30,2,
               (ulonglong)
               (-0x8000000000000000 >> (((param_3 + 1 & 0xffffffff) >> 2) - uVar1 & 0x7f)) >>
               (uVar1 & 0x7f));
  return;
}

