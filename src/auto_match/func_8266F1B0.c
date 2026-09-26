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
extern unsigned int *auStack_110;
extern unsigned int *auStack_150;
extern unsigned int *auStack_d0;
extern int fn_82526C70();
extern int fn_8280B240();
extern int fn_8280B398();
extern int fn_8280CD18();
extern int fn_82851760();
extern int fn_82851858();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_160;


void fn_8266F1B0(undefined8 param_1,double param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uStack_160;
  undefined4 *apuStack_15c [3];
  undefined1 auStack_150 [64];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [208];
  
  uVar2 = fn_82F6A540();
  if ((*(uint *)(param_5 + 4) >> 6 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_5 + 8);
  }
  else {
    uVar1 = **(undefined4 **)(param_5 + 8);
  }
  dVar4 = extraout_f1;
  fn_82526C70(auStack_d0,0x80,0xffffffff82002bec,uVar1);
  dVar9 = *(double *)(param_5 + 0x18);
  dVar7 = *(double *)(param_5 + 0x28);
  dVar6 = *(double *)(param_5 + 0x38);
  dVar5 = *(double *)(param_5 + 0x48);
  iVar3 = fn_82851760(uVar2,auStack_d0,0,&uStack_160);
  if (iVar3 != 0) {
    fn_82851858(uStack_160,apuStack_15c);
    iVar3 = *(int *)*apuStack_15c[0];
    if (*(int *)(iVar3 + param_4) != 0) {
      dVar8 = (double)(float)((double)lbl_82002AE0 / param_2);
      dVar10 = (double)lbl_821AAD20;
      dVar4 = (double)(float)((double)lbl_82002AE0 / dVar4);
      fn_8280B240((double)(float)((double)(float)dVar9 * dVar4),
                   (double)(float)((double)(float)dVar7 * dVar8),dVar10,auStack_150);
      fn_8280B398((double)(float)((double)(float)dVar6 * dVar4),
                      (double)(float)((double)(float)dVar5 * dVar8),dVar10,auStack_150,auStack_110);
      fn_8280CD18(auStack_110,*(undefined4 *)(iVar3 + param_4));
    }
  }
  fn_82F6A58C();
  return;
}

