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
extern unsigned int *auStack_70;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_82687270();
extern int fn_8268CC00();
extern int fn_8268D758();
extern int fn_826D6470();
extern int fn_826D6CF0();
extern int fn_826D7EC0();
extern int fn_826D8050();
extern int fn_826D8860();
extern int fn_826D9318();
extern int fn_826DDC60();
extern int fn_82765FB0();
extern unsigned int lbl_821AAD20;


void fn_826DEB00(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  int *piVar4;
  undefined4 auStack_f0 [4];
  undefined1 auStack_e0 [32];
  int aiStack_c0 [20];
  undefined1 auStack_70 [112];
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  auStack_f0[0] = 0;
  fn_826DDC60(param_1,auStack_f0);
  iVar2 = fn_8267B890(*(undefined4 *)(param_1 + 0x1c),0x8c,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_826D8050();
  }
  fn_82765FB0(iVar2,param_3,param_4);
  *(undefined4 *)(iVar2 + 0xc) = 1;
  auStack_f0[0] = 1;
  fn_826DDC60(param_1,auStack_f0,iVar2);
  RtlEnterCriticalSection(param_1 + 0xd4);
  piVar4 = (int *)(param_1 + 0xf0);
  fn_826D9318(piVar4,*(undefined4 *)(param_1 + 0x44));
  fn_826D9318(param_1 + 0xfc,*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x108) = 0;
  piVar3 = (int *)fn_826D6470(param_1 + 8,0x54);
  if (piVar3 != (int *)0x0) {
    fn_826D8860(piVar3 + 1);
    fn_8268CC00(auStack_e0);
    auStack_f0[0] = 1;
    uVar1 = fn_8268D758(auStack_70);
    fn_82681BF8((double)lbl_821AAD20,aiStack_c0,auStack_f0,1,0,uVar1,1,auStack_e0);
    fn_826D7EC0(piVar3 + 2,aiStack_c0);
    *piVar3 = (int)(piVar3 + 1);
    *(int **)*piVar4 = piVar3;
    *(undefined4 *)(*piVar4 + 4) = 1;
    if (aiStack_c0[0] != 0) {
      fn_8267C498();
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  fn_826D6CF0(param_1,*(undefined4 *)(param_1 + 0x44),2);
  fn_82687270(iVar2);
  return;
}

