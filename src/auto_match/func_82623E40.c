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
extern unsigned int fStack_30;
extern int fn_82623B60();
extern int fn_82623C90();
extern int fn_82623D60();
extern unsigned int lbl_83296890;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;


void fn_82623E40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_r7;
  undefined8 in_r8;
  int in_r9;
  float fStack_30;
  float afStack_2c [11];
  
  if (*(int *)(&lbl_83296C80 + in_r9 * 0xb0) == 0) {
    puVar1 = &lbl_83296890;
  }
  else {
    puVar1 = (undefined8 *)(&lbl_83296C20 + in_r9 * 0xb0);
  }
  fn_82623B60(puVar1);
  fn_82623C90(param_1,in_r8,in_r7,afStack_2c,&fStack_30);
  fn_82623D60((double)afStack_2c[0],(double)fStack_30);
  return;
}

