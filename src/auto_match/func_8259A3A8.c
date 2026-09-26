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
extern unsigned int *auStack_190;
extern int fn_82526C70();
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8256D810();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9FB0();
extern int fn_82F68CC0();
extern unsigned int lbl_821CAC50;
extern unsigned int uStack_194;
extern unsigned int uStack_198;
extern unsigned int uStack_19c;
extern unsigned int uStack_1a0;


undefined4 *
fn_8259A3A8(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [64];
  char acStack_150 [336];
  
  uStack_194 = 0;
  uStack_198 = fn_827D96A0(param_5);
  uStack_1a0 = 0;
  uStack_19c = 0;
  fn_8256D3A8(auStack_190,0xffffffff82196582);
  fn_827D9FB0(param_1,auStack_190,&uStack_19c,&uStack_1a0,&uStack_198,param_4,&uStack_194);
  fn_8256D798(auStack_190,1,0);
  *param_1 = &lbl_821CAC50;
  fn_82F68CC0(param_1 + 0x1a,param_2,0x134);
  param_1[0x67] = param_3;
  fn_827D9630(param_1 + 0x68,param_5);
  if (param_6 == 0) {
    uVar2 = fn_827D96A0(param_5);
    fn_82526C70(acStack_150,0x104,0xffffffff821c557c,uVar2);
    pcVar4 = acStack_150;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar3 = acStack_150;
    pcVar4 = pcVar4 + (-1 - (int)acStack_150);
  }
  else {
    pcVar4 = (char *)0x9;
    pcVar3 = "index.txt";
  }
  fn_8256D810(param_1 + 0xd,pcVar3,pcVar4);
  return param_1;
}

