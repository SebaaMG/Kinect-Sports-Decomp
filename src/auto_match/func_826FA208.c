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
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8268CC00();
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_8269A240();
extern int fn_826F6FA8();
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined4 * fn_826FA208(undefined4 *param_1,int param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  uVar3 = fn_826F6FA8(param_2,0);
  fn_8268CC00(auStack_50);
  fn_8269A240(uVar3,auStack_50);
  uStack_70 = *(undefined4 *)(param_2 + 0xe8);
  uStack_6c = *(undefined4 *)(param_2 + 0xec);
  uStack_68 = *(undefined4 *)(param_2 + 0xf0);
  uStack_64 = *(undefined4 *)(param_2 + 0xf4);
  uStack_60 = *(undefined4 *)(param_2 + 0xf8);
  uStack_5c = *(undefined4 *)(param_2 + 0xfc);
  fn_8268CEC0(&uStack_70,param_4);
  fn_8268CEC0(&uStack_70,auStack_50);
  uVar2 = lbl_821AAD20;
  fVar1 = lbl_8200571C;
  fStack_78 = param_3[2];
  fStack_74 = param_3[3];
  fStack_80 = *param_3 * lbl_8200571C;
  fStack_7c = param_3[1] * lbl_8200571C;
  *param_1 = lbl_821AAD20;
  fStack_78 = fStack_78 * fVar1;
  param_1[1] = uVar2;
  fStack_74 = fStack_74 * fVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  fn_8268D280(&uStack_70,param_1,&fStack_80);
  return param_1;
}

