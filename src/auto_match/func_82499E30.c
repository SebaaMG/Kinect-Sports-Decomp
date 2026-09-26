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
extern unsigned int *auStack_160;
extern unsigned int *auStack_70;
extern int fn_82491E88();
extern int fn_824925D0();
extern int fn_824973B0();
extern int fn_8249A1F0();
extern unsigned int lbl_821BEBB8;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_14c;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_bc;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


int fn_82499E30(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_160 [16];
  undefined **ppuStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  int aiStack_d0 [4];
  undefined **ppuStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [112];
  
  iVar3 = fn_824973B0();
  iVar1 = *(int *)(param_1 + 4);
  piVar6 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x10));
  iVar3 = *piVar6;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar5 = iVar1;
    if (iVar3 != iVar1) {
      iVar5 = *(int *)piVar6[1];
    }
    piVar4 = (int *)iVar1;
    if ((piVar2 == (int *)iVar5) || (piVar4 = piVar2, piVar2[4] == *param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar4 == (int *)iVar1) {
    aiStack_d0[0] = *param_2;
    uStack_14c = 0;
    ppuStack_150 = &lbl_821BEBB8;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_ef = 0;
    uStack_ee = 0;
    ppuStack_c0 = &lbl_821BEBB8;
    uStack_bc = 0;
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_128;
    uStack_88 = uStack_118;
    uStack_80 = uStack_110;
    uStack_78 = uStack_108;
    fn_824925D0(auStack_70,&uStack_100);
    piVar4 = (int *)fn_8249A1F0(auStack_160,param_1,aiStack_d0);
    ppuStack_c0 = &lbl_821BEBB8;
    piVar4 = (int *)*piVar4;
    fn_82491E88(auStack_70);
    ppuStack_150 = &lbl_821BEBB8;
    fn_82491E88(&uStack_100);
  }
  return (int)piVar4 + 0x20;
}

