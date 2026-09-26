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
extern unsigned int *auStack_80;
extern unsigned int *auStack_f0;
extern int fn_82DCC2C0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


char * fn_82D4BCB0(char *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_f0 [64];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcMopp";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uStack_5c = *(undefined4 *)(param_2 + 0x1c);
  puVar1 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uStack_70 = *puVar1;
  uStack_6c = puVar1[1];
  uStack_68 = puVar1[2];
  uStack_64 = puVar1[3];
  uStack_60 = *(undefined4 *)(param_2 + 0x18);
  uStack_b0 = 0;
  uStack_ac = 0;
  lVar4 = (ulonglong)*(uint *)(param_2 + 0x34) + 0x10;
  if ((ulonglong)*(uint *)(param_2 + 0x34) == 0) {
    lVar4 = 0;
  }
  uStack_58 = uStack_5c;
  fn_82DCC2C0(param_1,auStack_f0,lVar4,auStack_80,param_3,param_4);
  iVar3 = *(int *)(param_4 + 0x40);
  *(int *)(param_4 + 0x40) = iVar3 + -1;
  if (*param_1 != '\0') {
    *(undefined4 *)((iVar3 + 7) * 4 + param_4) = 0;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return param_1;
}

