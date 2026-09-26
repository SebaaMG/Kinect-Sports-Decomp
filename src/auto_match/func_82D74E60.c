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
#define TBLr 0
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern unsigned int *auStack_e0;
extern unsigned int fStack_204;
extern int fn_82CE6820();
extern int fn_82DD5FF0();
extern int fn_82DD9828();
extern int fn_82DD9A10();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82139648;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;


void fn_82D74E60(int *param_1,int *param_2,undefined8 param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_220 [8];
  byte bStack_218;
  byte bStack_217;
  byte bStack_216;
  undefined1 auStack_210 [12];
  float fStack_204;
  undefined1 auStack_200 [64];
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a0 [192];
  undefined1 auStack_e0 [224];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82139648;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  fn_82CE6820(auStack_200,param_1[2],param_2[2]);
  if (piVar3[3] == 3) {
    fn_82DD9A10();
  }
  else {
    fn_82DD9828(auStack_220,piVar2,piVar3,auStack_200);
  }
  uStack_1b8 = (uint)(bStack_216 >> 4);
  uStack_1b4 = bStack_216 & 0xf;
  uStack_1b0 = 1;
  uStack_1bc = (uint)bStack_217;
  uStack_1c0 = (uint)bStack_218;
  uStack_1ac = 0;
  (**(code **)(*piVar2 + 0x3c))(piVar2,auStack_220,bStack_218,auStack_1a0);
  (**(code **)(*piVar3 + 0x3c))(piVar3,auStack_220 + uStack_1c0 * 2,uStack_1bc,auStack_e0);
  iVar5 = fn_82DD5FF0(&uStack_1c0,piVar2,piVar3,auStack_200,auStack_210);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  if ((iVar5 != 0) || ((fStack_204 - (float)piVar2[4]) - (float)piVar3[4] < lbl_821AAD20)) {
    (**(code **)(*param_4 + 4))(param_4,param_1,param_2);
  }
  return;
}

