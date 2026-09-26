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
extern int fn_8306D688();
extern int fn_8306E7F8();
extern int fn_8306E890();
extern int fn_8306EA78();
extern unsigned int lbl_8200132C;
extern unsigned int lbl_820BC534;
extern unsigned int lbl_82186E70;


void fn_830799D8(undefined8 param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_8306D688(*(undefined4 *)(param_2 + 0xb0));
  dVar1 = -dVar1;
  dVar2 = (double)fn_8306E890((double)lbl_820BC534,param_1);
  dVar1 = (double)fn_8306EA78((double)(float)(dVar1 - (double)*(float *)(param_2 + 0xec)));
  *(float *)(param_2 + 0xec) = (float)(dVar1 * dVar2 + (double)*(float *)(param_2 + 0xec));
  dVar1 = (double)fn_8306EA78();
  *(float *)(param_2 + 0xec) = (float)dVar1;
  fn_8306E7F8(dVar1,(double)lbl_82186E70,(double)lbl_8200132C);
  return;
}

