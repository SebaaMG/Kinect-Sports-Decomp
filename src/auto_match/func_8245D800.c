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
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_8263C910();
extern int fn_828F0DD0();
extern int fn_82F68CC0();
extern unsigned int lbl_832765A0;
extern unsigned int lbl_832765A4;
extern unsigned int uRam8327659c;
extern unsigned int uRam832765a8;
extern unsigned int uRam832765ac;
extern unsigned int uRam832765b0;
extern unsigned int uRam832765b4;
extern unsigned int uStack_df0;
extern unsigned int uStack_df4;
extern unsigned int uStack_df8;
extern unsigned int uStack_dfa;
extern unsigned int uStack_dfb;
extern unsigned int uStack_dfc;
extern unsigned int uStack_e00;
extern unsigned int uStack_e02;
extern unsigned int uStack_e04;
extern unsigned int uStack_e06;
extern unsigned int uStack_e07;
extern unsigned int uStack_e08;
extern unsigned int uStack_e0c;
extern unsigned int uStack_e0e;
extern unsigned int uStack_e10;
extern unsigned int uStack_e14;
extern unsigned int uStack_e18;
extern unsigned int uStack_e1c;
extern unsigned int uStack_e20;


ulonglong fn_8245D800(void)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  char *pcVar4;
  int *apiStack_e30 [4];
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined4 uStack_e18;
  undefined4 uStack_e14;
  undefined2 uStack_e10;
  undefined2 uStack_e0e;
  undefined4 uStack_e0c;
  undefined1 uStack_e08;
  undefined1 uStack_e07;
  undefined1 uStack_e06;
  undefined2 uStack_e04;
  undefined2 uStack_e02;
  undefined4 uStack_e00;
  undefined1 uStack_dfc;
  undefined1 uStack_dfb;
  undefined1 uStack_dfa;
  undefined4 uStack_df8;
  undefined4 uStack_df4;
  uint uStack_df0;
  char acStack_de0 [224];
  char acStack_d00 [784];
  char acStack_9f0 [1024];
  char acStack_5f0 [1520];
  
  fn_82F68CC0(acStack_de0,0xffffffff821baed8,0xd6);
  fn_82F68CC0(acStack_5f0,0xffffffff821bafb0,0x5bc);
  fn_82F68CC0(acStack_9f0,0xffffffff821bb570,0x3f6);
  fn_82F68CC0(acStack_d00,0xffffffff821bb968,0x304);
  uStack_e20 = 0;
  uStack_e1c = 0xffffffff;
  uStack_e18 = 0;
  uStack_e14 = 0;
  uRam832765b4 = fn_8263C910(0x140,0x1e0,0x18280186,0,&uStack_e20);
  uStack_e20 = 0xff0000;
  uVar2 = (ushort)uStack_e18;
  uStack_e0c = 0x1a23a6;
  uStack_e00 = 0x1a23a6;
  uStack_e18 = (uint)(uVar2 & 0xff);
  uStack_e08 = 0;
  uStack_e0e = 0;
  uStack_e10 = 0;
  uStack_e07 = 0;
  uStack_e06 = 0;
  uStack_dfc = 0;
  uStack_e02 = 0x10;
  uStack_e04 = 0;
  uStack_dfb = 5;
  uStack_dfa = 0;
  uStack_df4 = 0xffffffff;
  uStack_df0 = uStack_e18;
  uStack_df8 = 0xff0000;
  lbl_832765A0 = fn_82631BF8(&uStack_e10);
  pcVar4 = acStack_de0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_de0,pcVar4 + (-1 - (int)acStack_de0),0,0,0xffffffff821b6080,
                    0xffffffff821bbc6c,0,apiStack_e30);
  (**(code **)(*apiStack_e30[0] + 0xc))();
  lbl_832765A4 = fn_82631830();
  (**(code **)(*apiStack_e30[0] + 8))(apiStack_e30[0]);
  pcVar4 = acStack_5f0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_5f0,pcVar4 + (-1 - (int)acStack_5f0),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(code **)(*apiStack_e30[0] + 0xc))();
  uRam832765a8 = fn_82631488();
  (**(code **)(*apiStack_e30[0] + 8))(apiStack_e30[0]);
  pcVar4 = acStack_9f0;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_9f0,pcVar4 + (-1 - (int)acStack_9f0),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(code **)(*apiStack_e30[0] + 0xc))();
  uRam832765ac = fn_82631488();
  (**(code **)(*apiStack_e30[0] + 8))();
  pcVar4 = acStack_d00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_828F0DD0(acStack_d00,pcVar4 + (-1 - (int)acStack_d00),0,0,0xffffffff821bbc7c,
                    0xffffffff821bbc74,0,apiStack_e30);
  (**(code **)(*apiStack_e30[0] + 0xc))();
  lVar3 = fn_82631488();
  uRam832765b0 = (undefined4)lVar3;
  (**(code **)(*apiStack_e30[0] + 8))();
  uRam8327659c = 1;
  return -(ulonglong)(lVar3 == 0) & 0xffffffff8007000e;
}

