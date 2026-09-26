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
extern unsigned int *auStack_90;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826A7398();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_826CECC8();
extern int fn_826F74F8();
extern int fn_82700248();
extern int fn_827255B0();
extern unsigned int iStack_68;
extern unsigned int iStack_8c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_53;
extern unsigned int uStack_54;
extern unsigned int uStack_55;
extern unsigned int uStack_56;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;


void fn_827299B8(int param_1)

{
  undefined4 uVar1;
  int iVar4;
  longlong lVar2;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  int aiStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  code *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar6 = param_1 + -0xd8;
  iVar4 = (**(code **)(*(int *)(param_1 + -0xd8) + 0x5c))(iVar6);
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_55 = 0xff;
  uStack_54 = 0;
  uStack_53 = 0;
  *(int *)(param_1 + -0xd4) = *(int *)(param_1 + -0xd4) + 1;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_70 = 0;
  uStack_34 = 0;
  uStack_6c = 4;
  uStack_64 = 0;
  pcStack_44 = fn_827255B0;
  iStack_68 = iVar6;
  lVar2 = fn_826A7398();
  iVar5 = fn_826F74F8(lVar2 + 0xa2c,4,&uStack_70);
  if (iVar5 == 0) {
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    fn_82681728(aiStack_b0,(ulonglong)*(uint *)(iVar4 + 0x78) + 0x254,0xffffffff820111c4);
    auStack_90[0] = 5;
    iStack_8c = aiStack_b0[0];
    *(int *)(aiStack_b0[0] + 8) = *(int *)(aiStack_b0[0] + 8) + 1;
    fn_826CD420(&uStack_a8,auStack_90);
    fn_82696330(auStack_90);
    lVar2 = (ulonglong)*(uint *)(aiStack_b0[0] + 8) - 1;
    *(int *)(aiStack_b0[0] + 8) = (int)lVar2;
    if (lVar2 == 0) {
      fn_826944C8(aiStack_b0[0]);
    }
    uVar3 = fn_82695520(auStack_80,iVar6);
    fn_826CD420(&uStack_a8,uVar3);
    fn_82696330(auStack_80);
    lVar2 = fn_826A7398(iVar4);
    iVar4 = fn_82700248(lVar2 + 0xa2c,4);
    *(undefined4 *)(iVar4 + 4) = 4;
    *(int *)(param_1 + -0xd4) = *(int *)(param_1 + -0xd4) + 1;
    if (*(int *)(iVar4 + 8) != 0) {
      fn_8267C498();
    }
    *(int *)(iVar4 + 8) = iVar6;
    if (*(int *)(iVar4 + 0xc) != 0) {
      fn_8267C498();
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(code **)(iVar4 + 0x2c) = fn_827255B0;
    fn_826CD840(iVar4 + 0x30,&uStack_a8);
    uVar1 = uStack_a8;
    fn_8269A990(uStack_a8,uStack_a4);
    fn_8267BE38(uVar1);
  }
  fn_826CECC8(&uStack_70);
  return;
}

