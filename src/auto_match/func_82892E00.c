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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_8224EFC8();
extern int fn_8288DFB8();
extern int fn_828901B8();
extern int fn_82890F00();
extern int fn_828920B0();
extern int fn_828B27A8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int iStack0000001c;
extern unsigned int iStack_40;
extern unsigned int iStack_50;
extern unsigned int stack0x0000001c;


void fn_82892E00(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iStack0000001c;
  int aiStack_80 [2];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  int iStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  
  iVar5 = param_2 + 0x14;
  iStack0000001c = param_2;
  fn_828B5580(auStack_70,iVar5);
  fn_828B5580(auStack_58,auStack_70);
  iVar4 = param_1 + 4;
  iStack_50 = param_2;
  iVar1 = fn_8224EFC8(iVar4);
  if (iVar1 + 0xc != 0) {
    fn_828B5580(iVar1 + 0xc,auStack_58);
    *(int *)(iVar1 + 0x14) = iStack_50;
  }
  fn_828901B8(auStack_78,iVar4,iVar1,0);
  fn_828B55B0(auStack_58);
  fn_828B55B0(auStack_70);
  fn_828B5580(auStack_60,iVar5);
  fn_828B5580(auStack_48,auStack_60);
  iStack_40 = param_2;
  fn_828B5580(auStack_68,iVar5);
  aiStack_80[0] = fn_828B55F8(auStack_68);
  if (aiStack_80[0] != 0x8000) {
    piVar2 = (int *)fn_8288DFB8(auStack_78,param_1 + 0x14,aiStack_80);
    iVar4 = *piVar2 + 0x10;
  }
  iVar1 = fn_8224EFC8(iVar4);
  if (iVar1 + 0xc != 0) {
    fn_828B5580(iVar1 + 0xc,auStack_48);
    *(int *)(iVar1 + 0x14) = iStack_40;
  }
  fn_828901B8(aiStack_80,iVar4,iVar1,0);
  fn_828B55B0(auStack_68);
  fn_828B55B0(auStack_48);
  fn_828B55B0(auStack_60);
  if ((*(int *)(param_2 + 0x34) == 0) ||
     (iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 0x38), iVar1 == 0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)(iVar1 + 0x26);
  }
  if (cVar3 != '\0') {
    fn_828920B0(param_1,param_2);
    fn_82890F00(param_1,param_2);
  }
  fn_828B27A8(param_1 + 0x44,*(undefined4 *)(param_1 + 0x44),&stack0x0000001c);
  return;
}

