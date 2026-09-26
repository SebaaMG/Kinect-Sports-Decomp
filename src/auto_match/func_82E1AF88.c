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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CFFC80();
extern int fn_82CFFD78();
extern int fn_82CFFD88();
extern int fn_82CFFEB8();
extern int fn_82CFFF50();
extern int fn_82E1AA80();
extern int fn_82E1AEC0();


void fn_82E1AF88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  fn_82CFFF50(auStack_50,param_2,0xffffffff8323ae68);
  fn_82CFFC80(auStack_48,auStack_50,0xffffffff8213078c);
  puVar2 = (undefined4 *)fn_82CFFEB8(auStack_48,0);
  fn_82E1AA80(param_1,*puVar2,puVar2[1]);
  fn_82CFFC80(auStack_40,auStack_50,0xffffffff8213077c);
  puVar2 = (undefined4 *)fn_82CFFEB8(auStack_40,0);
  fn_82E1AEC0(param_1,*puVar2,puVar2[1],param_3);
  fn_82CFFC80(auStack_38,auStack_50,0xffffffff82130770);
  puVar2 = (undefined4 *)fn_82CFFD78(auStack_38,0);
  uVar1 = *puVar2;
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),uVar1);
  fn_82CFFC80(auStack_30,auStack_50,0xffffffff820d2ac0);
  puVar2 = (undefined4 *)fn_82CFFD88(auStack_30,0);
  uVar1 = *puVar2;
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),uVar1);
  iVar3 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),param_2);
  return;
}

