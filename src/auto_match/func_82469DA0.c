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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_82672C20();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82469DA0(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar5;
  undefined8 uVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  
  uStack_40 = 0;
  uStack_3c = 0;
  uVar1 = thunk_FUN_82f64ce0(param_3);
  uVar3 = *(uint *)(param_1 + 0x138);
  if ((int)*(uint *)(param_1 + 0x138) < (int)uVar1) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x138) = uVar3;
  if (uVar3 < 5) {
    pcVar5 = "fourDigits";
  }
  else {
    pcVar5 = "sixDigits";
  }
  fn_82273CD8(&uStack_40,4);
  pcStack_38 = pcVar5;
  puVar2 = (undefined4 *)fn_82279C58(auStack_50,param_1);
  fn_82672C20(*puVar2,0xffffffff821bc314,&uStack_40,1);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_82273CD8(&uStack_40,5);
  pcStack_38 = (char *)param_3;
  if (param_2 == 0) {
    uVar4 = 0xffffffff821bc328;
  }
  else {
    uVar4 = 0xffffffff821bc33c;
  }
  puVar2 = (undefined4 *)fn_82279C58(auStack_48,param_1);
  fn_82672C20(*puVar2,uVar4,&uStack_40,1);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_82273C88(&uStack_40);
  return;
}

