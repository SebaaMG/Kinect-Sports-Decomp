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
extern unsigned int *auStack_50;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_8268CEC0();
extern int fn_8269A240();
extern int fn_826F6FA8();
extern unsigned int lbl_8200571C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_826FD5E8(undefined8 param_1,int param_2,float *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  uVar1 = fn_826F6FA8(param_2,0);
  fn_8268CC00(auStack_50);
  fn_8269A240(uVar1,auStack_50);
  uStack_70 = *(undefined4 *)(param_2 + 0xe8);
  uStack_6c = *(undefined4 *)(param_2 + 0xec);
  uStack_68 = *(undefined4 *)(param_2 + 0xf0);
  uStack_64 = *(undefined4 *)(param_2 + 0xf4);
  uStack_60 = *(undefined4 *)(param_2 + 0xf8);
  uStack_5c = *(undefined4 *)(param_2 + 0xfc);
  fn_8268CEC0(&uStack_70,param_4);
  fn_8268CEC0(&uStack_70,auStack_50);
  fStack_80 = *param_3 * lbl_8200571C;
  fStack_7c = param_3[1] * lbl_8200571C;
  fn_8268CCB0(&uStack_70,param_1,&fStack_80);
  return param_1;
}

