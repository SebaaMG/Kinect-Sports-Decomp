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
extern unsigned int *auStack_98;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1CFC8();
extern int fn_82A1FB60();
extern int fn_82A21078();
extern int fn_82A21508();
extern int fn_82A23028();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219C28;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


ulonglong fn_82A251D0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int aiStack_a0 [2];
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [128];
  
  puVar2 = (undefined4 *)fn_8265C940(8,lbl_8315D2EC);
  if (puVar2 == (undefined4 *)0x0) {
    uVar5 = 0xffffffff80640008;
  }
  else {
    *puVar2 = 0xffffffff;
    *param_1 = puVar2;
    RtlInitAnsiString(auStack_98,0xffffffff820892cc);
    puStack_8c = auStack_98;
    uStack_90 = 0xfffffffd;
    uStack_88 = 0x40;
    iVar3 = NtQueryFullAttributesFile(&uStack_90,auStack_80);
    uVar1 = lbl_83219C28;
    if (-1 < iVar3) {
      aiStack_a0[0] = 0;
      uVar5 = 0;
      iVar4 = fn_82A21078(aiStack_a0,puVar2);
      iVar3 = aiStack_a0[0];
      if (((iVar4 != 0) || (iVar4 = fn_82A23028(aiStack_a0[0],uVar1), iVar4 != 0)) ||
         (iVar4 = fn_82A21508(iVar3,0xffffffff82a24520,puVar2), iVar4 != 0)) {
        uVar5 = 0xffffffffc0000098;
      }
      if (iVar3 != 0) {
        fn_82A1FB60(iVar3);
      }
      if (((uVar5 & 0xc0000000) != 0xc0000000) && (*param_2 == 0)) {
        puVar2[1] = 1;
        goto LAB_82a25300;
      }
    }
    uVar5 = 0;
    *param_2 = 1;
  }
LAB_82a25300:
  if (((uVar5 & 0xc0000000) == 0xc0000000) && (puVar2 != (undefined4 *)0x0)) {
    fn_82A1CFC8();
    fn_8265C990(puVar2,lbl_8315D2EC);
  }
  return uVar5;
}

