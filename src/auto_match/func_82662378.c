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
extern unsigned int *auStack_20;
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_8225E7A0();
extern int fn_8265D5A8();
extern int fn_8265F888();
extern int fn_826600B8();
extern int fn_82660558();
extern int fn_82661A88();
extern int fn_82662630();
extern int fn_82662C00();
extern int fn_826682A0();
extern int fn_826689B8();
extern int fn_82669808();
extern int fn_82F919C8();
extern int fn_82F92000();
extern int fn_82F92218();
extern int fn_82F953A8();
extern int fn_82F953B8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


undefined4 fn_82662378(undefined4 param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar6;
  undefined4 uStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  char cStack0000002f;
  char cStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cStack0000002f = param_4;
  uVar3 = fn_82F92218(param_3);
  puVar4 = (undefined4 *)fn_82F92000(iStack0000001c);
  uStack_48 = *puVar4;
  uStack_4c = *(undefined4 *)(iStack0000001c + 4);
  cStack_50 = '\x01';
  while (pcVar5 = (char *)fn_82F953A8(uStack_48), *pcVar5 == '\0') {
    uStack_4c = uStack_48;
    if (cStack0000002f == '\0') {
      uVar1 = fn_82F919C8(uStack_48);
      uVar2 = fn_8265D5A8(uVar3);
      cStack_50 = fn_8225E7A0(iStack0000001c,uVar2,uVar1);
    }
    else {
      uVar1 = fn_8265D5A8(uVar3);
      uVar2 = fn_82F919C8(uStack_48);
      cVar6 = fn_8225E7A0(iStack0000001c,uVar2,uVar1);
      cStack_50 = cVar6 == '\0';
    }
    if (cStack_50 == '\0') {
      puVar4 = (undefined4 *)fn_82F953B8(uStack_48);
      uStack_1c = *puVar4;
    }
    else {
      puVar4 = (undefined4 *)fn_8265D5A8(uStack_48);
      uStack_1c = *puVar4;
    }
    uStack_48 = uStack_1c;
  }
  fn_826600B8(auStack_40,uStack_4c,iStack0000001c);
  if (cStack_50 != '\0') {
    uVar1 = fn_8265F888(auStack_34,iStack0000001c);
    cVar6 = fn_82669808(auStack_40,uVar1);
    if (cVar6 != '\0') {
      auStack_30[0] = 1;
      uVar1 = fn_82662630(auStack_2c,iStack0000001c,1,uStack_4c,uStack00000024);
      fn_826682A0(uStack00000014,uVar1,auStack_30);
      return uStack00000014;
    }
    fn_82662C00(auStack_40);
  }
  uVar1 = fn_8265D5A8(uVar3);
  fn_826689B8(auStack_40);
  uVar2 = fn_82F919C8();
  cVar6 = fn_8225E7A0(iStack0000001c,uVar2,uVar1);
  if (cVar6 == '\0') {
    fn_82F92218(uStack00000024);
    uVar1 = fn_8265D5A8();
    fn_82661A88(iStack0000001c + 0xd,uVar1);
    fn_82660558(iStack0000001c + 0xc,uStack00000024,1);
    auStack_20[0] = 0;
    fn_826682A0(uStack00000014,auStack_40,auStack_20);
  }
  else {
    auStack_28[0] = 1;
    uVar1 = fn_82662630(auStack_24,iStack0000001c,cStack_50,uStack_4c,uStack00000024);
    fn_826682A0(uStack00000014,uVar1,auStack_28);
  }
  return uStack00000014;
}

