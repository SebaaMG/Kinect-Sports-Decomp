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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _fStack_70 ((*(U64*)&fStack_70))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_8226C7C0();
extern int fn_8226C900();
extern int fn_8226CFE8();
extern int fn_82531F18();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8226CDF0(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fStack_70;
  float fStack_6c;
  struct { float first; float second; } stack_pair_68;

  undefined1 auStack_60 [1];
  undefined1 auStack_50 [80];
  
  iVar3 = fn_82F6A548();
  iVar4 = fn_8226C7C0();
  fStack_70 = (float)((ulonglong)*param_2 >> 0x20);
  fStack_6c = (float)*param_2;
  _fStack_70 = CONCAT44(fStack_70 - *(float *)(iVar4 + 0x6c),fStack_6c - *(float *)(iVar4 + 0x70));
  uVar2 = fn_8226C7C0(iVar4,&fStack_70,auStack_60,0);
  iVar4 = fn_8226C900(uVar2,&stack_pair_68.first,auStack_50);
  dVar5 = (double)lbl_821CA460;
  if (*(char *)(iVar4 + 0x75) == '\0') {
    iVar4 = fn_82531F18(dVar5,dVar5,auStack_50,&stack_pair_68.first,&fStack_70);
  }
  else {
    iVar4 = fn_8226CFE8(iVar4,auStack_50,&stack_pair_68.first);
  }
  dVar8 = (double)lbl_821CC160;
  dVar6 = dVar8;
  dVar7 = dVar8;
  if (iVar4 != 0) {
    dVar6 = (double)stack_pair_68.first;
    dVar7 = (double)stack_pair_68.second;
  }
  uVar2 = fn_8226C900(iVar3,auStack_60,auStack_50);
  if (*(char *)(iVar3 + 0x75) == '\0') {
    iVar3 = fn_82531F18(dVar5,dVar5,auStack_50,&stack_pair_68.first,&fStack_70);
  }
  else {
    iVar3 = fn_8226CFE8(uVar2,auStack_50,&stack_pair_68.first);
  }
  fVar1 = lbl_8218E8E8;
  dVar5 = dVar8;
  if (iVar3 != 0) {
    dVar8 = (double)stack_pair_68.second;
    dVar5 = (double)stack_pair_68.first;
  }
  param_3[1] = (float)(dVar7 + dVar8) * lbl_8218E8E8;
  *param_3 = (float)(dVar5 + dVar6) * fVar1;
  fn_82F6A594();
  return;
}

