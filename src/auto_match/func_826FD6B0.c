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
extern unsigned int *auStack_80;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_8268CEC0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_8269A240();
extern int fn_826B44A0();
extern int fn_826F6FA8();
extern unsigned int lbl_8200571C;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


bool fn_826FD6B0(int param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  int aiStack_a0 [2];
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [80];
  
  piVar1 = (int *)fn_826F6FA8(param_1,0);
  iVar2 = (**(code **)(*piVar1 + 0x5c))();
  auStack_80[0] = 0;
  aiStack_a0[0] = fn_82694700((ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,param_2);
  *(int *)(aiStack_a0[0] + 8) = *(int *)(aiStack_a0[0] + 8) + 1;
  cVar3 = fn_826B44A0(iVar2,aiStack_a0,auStack_80,0,0,0,0);
  lVar5 = (ulonglong)*(uint *)(aiStack_a0[0] + 8) - 1;
  *(int *)(aiStack_a0[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_a0[0]);
  }
  if (cVar3 == '\0') {
    fn_82696330();
    bVar4 = false;
  }
  else {
    lVar5 = fn_82695370(auStack_80,iVar2);
    bVar4 = lVar5 != 0;
    if (bVar4) {
      fStack_98 = *param_3 * lbl_8200571C;
      fStack_94 = param_3[1] * lbl_8200571C;
      fn_8268CC00(auStack_50);
      fn_8269A240(lVar5,auStack_50);
      uStack_70 = *(undefined4 *)(param_1 + 0xe8);
      uStack_6c = *(undefined4 *)(param_1 + 0xec);
      uStack_68 = *(undefined4 *)(param_1 + 0xf0);
      uStack_64 = *(undefined4 *)(param_1 + 0xf4);
      uStack_60 = *(undefined4 *)(param_1 + 0xf8);
      uStack_5c = *(undefined4 *)(param_1 + 0xfc);
      fn_8268CEC0(&uStack_70,param_5);
      fn_8268CEC0(&uStack_70,auStack_50);
      fn_8268CCB0(&uStack_70,&uStack_90,&fStack_98);
      *param_4 = uStack_90;
      param_4[1] = uStack_8c;
    }
    fn_82696330(auStack_80);
  }
  return bVar4;
}

