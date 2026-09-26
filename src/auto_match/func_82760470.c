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
extern unsigned int *auStack_7c;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_8268D5D8();
extern int fn_8269A3C0();
extern int fn_8275EC80();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82760470(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [32];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [80];
  
  puVar1 = (undefined4 *)param_2[0x10];
  uStack_c0 = *puVar1;
  uStack_bc = puVar1[1];
  uStack_b8 = puVar1[2];
  uStack_b4 = puVar1[3];
  uStack_b0 = puVar1[4];
  uStack_ac = puVar1[5];
  fn_8268CEC0(&uStack_c0,param_3 + 0x11);
  fn_82F68CC0(auStack_50,param_2[0x11],0x20);
  fn_8268D5D8(auStack_50,param_3 + 9);
  uVar3 = fn_8269A3C0(param_3);
  bVar2 = false;
  uStack_9c = 0;
  uStack_94 = uStack_c0;
  uStack_98 = 0;
  uStack_90 = uStack_bc;
  uStack_8c = uStack_b8;
  uStack_88 = uStack_b4;
  uStack_84 = uStack_b0;
  uStack_80 = uStack_ac;
  piStack_a0 = param_2;
  fn_82F68CC0(auStack_7c,auStack_50,0x20);
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_5c = uVar3;
  if ((*(byte *)(param_1 + 9) & 0x10) != 0) {
    fStack_d0 = lbl_821AAD20;
    fStack_cc = lbl_821AAD20;
    fStack_c8 = lbl_821AAD20;
    fStack_c4 = lbl_821AAD20;
    fn_8268D280(&uStack_94,&fStack_d0,param_1 + 1);
    iVar4 = (**(code **)(*param_3 + 0x40))(param_3);
    if ((((fStack_cc <= *(float *)(iVar4 + 0xd4)) && (*(float *)(iVar4 + 0xcc) <= fStack_c4)) &&
        (*(float *)(iVar4 + 200) <= fStack_c8)) && (fStack_d0 <= *(float *)(iVar4 + 0xd0))) {
      bVar2 = true;
    }
    if ((!bVar2) && ((*(uint *)(*param_2 + 0x14) & 0x100) == 0)) {
      return;
    }
  }
  if ((*(byte *)(param_1 + 9) & 0x40) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_9c,&uStack_58,&uStack_98,&uStack_54);
  }
  fn_8275EC80(param_1,&piStack_a0,*(short *)(param_3 + 0x19) != 0,param_3);
  return;
}

