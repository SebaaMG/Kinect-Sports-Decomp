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
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int uStack_40;
extern unsigned int uStack_50;


void fn_828920B0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int aiStack_80 [2];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  
  lVar4 = param_2 + 0x14;
  fn_828B5580(auStack_70,lVar4);
  fn_828B5580(auStack_58,auStack_70);
  lVar3 = param_1 + 0x24;
  uStack_50 = (int)param_2;
  iVar1 = fn_8224EFC8(lVar3);
  if (iVar1 + 0xc != 0) {
    fn_828B5580(iVar1 + 0xc,auStack_58);
    *(undefined4 *)(iVar1 + 0x14) = uStack_50;
  }
  fn_828901B8(auStack_78,lVar3,iVar1,0);
  fn_828B55B0(auStack_58);
  fn_828B55B0(auStack_70);
  fn_828B5580(auStack_60,lVar4);
  fn_828B5580(auStack_48,auStack_60);
  uStack_40 = (int)param_2;
  fn_828B5580(auStack_68,lVar4);
  aiStack_80[0] = fn_828B55F8(auStack_68);
  if (aiStack_80[0] != 0x8000) {
    puVar2 = (uint *)fn_8288DFB8(auStack_78,param_1 + 0x34,aiStack_80);
    lVar3 = (ulonglong)*puVar2 + 0x10;
  }
  iVar1 = fn_8224EFC8(lVar3);
  if (iVar1 + 0xc != 0) {
    fn_828B5580(iVar1 + 0xc,auStack_48);
    *(undefined4 *)(iVar1 + 0x14) = uStack_40;
  }
  fn_828901B8(aiStack_80,lVar3,iVar1,0);
  fn_828B55B0(auStack_68);
  fn_828B55B0(auStack_48);
  fn_828B55B0(auStack_60);
  return;
}

