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
extern unsigned int *auStack_80;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8280B0E8();
extern int fn_8280CD18();
extern int fn_8284F9B8();
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285A840();
extern int fn_8285A848();
extern int fn_8285A8F8();
extern int fn_8285AAF0();
extern int fn_8285AB58();
extern int fn_8285C5A0();
extern int fn_8285E650();
extern int fn_82860588();
extern int fn_82860750();
extern int fn_82860880();
extern int fn_8305C3F0();
extern unsigned int iStack_8c;


void fn_8284FFE0(int param_1,int param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  code *pcStack_90;
  int iStack_8c;
  undefined1 auStack_80 [128];
  
  fn_8280CD18(param_3,auStack_80);
  fStack_a0 = -*(float *)(param_3 + 0x30);
  fStack_9c = -*(float *)(param_3 + 0x34);
  fStack_98 = -*(float *)(param_3 + 0x38);
  fn_8280B0E8(auStack_80,&fStack_a0,&fStack_a0);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x90);
  if (uVar6 == 0) {
    pfVar5 = (float *)0x0;
  }
  else {
    pfVar5 = *(float **)(param_2 + 4);
  }
  fVar1 = pfVar5[5];
  if (pfVar5[4] == 0.0) {
    pcStack_90 = fn_8284F9B8;
    iStack_8c = param_1;
    fn_8285A8F8(uVar6,fVar1,&pcStack_90);
  }
  if (*(int *)(*(int *)(param_1 + 0x90) + 0x28) == 1) {
    fn_8284FBD0(uVar6,fVar1,param_1,param_2);
    lVar4 = 0;
    iVar2 = fn_8285A840(uVar6,fVar1);
    if (0 < iVar2) {
      do {
        fn_8285A848(uVar6,fVar1,lVar4);
        fn_8285C5A0(uVar6,fVar1);
        lVar4 = lVar4 + 1;
        iVar2 = fn_8285A840(uVar6,fVar1);
      } while ((int)lVar4 < iVar2);
    }
  }
  else {
    fn_8285C5A0(uVar6,fVar1);
  }
  pfVar5[4] = (float)((int)pfVar5[4] + 1);
  fn_8285AB58(uVar6,fVar1,param_4);
  fn_8285A808(uVar6,fVar1);
  piVar3 = (int *)fn_8285A830(uVar6,fVar1);
  iVar2 = fn_8305C3F0(uVar6 + 0x6c);
  if (iVar2 == 0) {
    if ((*piVar3 != 0) && (pfVar5[3] == 0.0)) {
      fn_82860588(uVar6,fVar1,pfVar5,&fStack_a0);
      goto LAB_828501b0;
    }
    fn_82860750(uVar6,fVar1,&fStack_a0);
  }
  else {
    fn_82860880(uVar6,fVar1,&fStack_a0);
  }
  *pfVar5 = fStack_a0;
  pfVar5[1] = fStack_9c;
  pfVar5[2] = fStack_98;
LAB_828501b0:
  fn_8285AAF0(uVar6,fVar1,&fStack_a0);
  *pfVar5 = fStack_a0;
  pfVar5[1] = fStack_9c;
  pfVar5[2] = fStack_98;
  if ((*piVar3 != 0) &&
     (fn_8285E650(uVar6,fVar1), *(int *)(*(int *)(param_1 + 0x90) + 0x28) == 1)) {
    fn_8284FA10(uVar6,fVar1,param_1,param_2);
  }
  return;
}

