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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8268CC00();
extern int fn_8268D280();
extern int fn_8269A2C8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;


bool fn_826FA080(undefined8 param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  fn_8268CC00(auStack_60);
  fn_8269A2C8(param_2,auStack_60);
  fn_8268CC00(auStack_40);
  fn_8269A2C8(param_3,auStack_40);
  uVar4 = (**(code **)(*param_2 + 0xd4))(auStack_70,param_2);
  dVar5 = (double)lbl_821AAD20;
  fStack_90 = lbl_821AAD20;
  fStack_8c = lbl_821AAD20;
  fStack_88 = lbl_821AAD20;
  fStack_84 = lbl_821AAD20;
  fn_8268D280(auStack_60,&fStack_90,uVar4);
  uVar4 = (**(code **)(*param_3 + 0xd4))(auStack_70,param_3);
  fStack_80 = (float)dVar5;
  fStack_7c = (float)dVar5;
  fStack_78 = (float)dVar5;
  fStack_74 = (float)dVar5;
  fn_8268D280(auStack_40,&fStack_80,uVar4);
  fVar1 = fStack_8c - fStack_7c;
  fVar2 = (fStack_84 + fStack_8c) * lbl_82002C5C;
  fVar3 = (fStack_74 + fStack_7c) * lbl_82002C5C;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (lbl_8200571C < fVar1) {
    fStack_84 = fStack_84 - fStack_74;
    if (fStack_84 < 0.0) {
      fStack_84 = -fStack_84;
    }
    if (lbl_8200571C < fStack_84) {
      fVar1 = fVar2 - fVar3;
      if (fVar1 < 0.0) {
        fVar1 = -fVar1;
      }
      if (lbl_8200571C < fVar1) {
        return fVar2 < fVar3;
      }
    }
  }
  return (fStack_88 + fStack_90) * lbl_82002C5C < (fStack_78 + fStack_80) * lbl_82002C5C;
}

