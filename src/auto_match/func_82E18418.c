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
extern unsigned int *auStack_230;
extern unsigned int *auStack_23f;
extern unsigned int *auStack_250;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5A8();
extern int fn_82CFD5F0();
extern int fn_82CFE180();
extern int fn_82E17EE8();
extern int fn_82F691F0();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


void fn_82E18418(int param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong in_r0;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uStack_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  undefined1 auStack_250 [16];
  undefined1 uStack_240;
  undefined1 auStack_23f [15];
  undefined1 auStack_230 [560];
  
  uVar7 = (uint)*(byte *)(param_3 + 0xc);
  uVar8 = 0;
  if (uVar7 - 1 < 0x20) {
    in_r0 = (ulonglong)*(uint *)((uVar7 - 1) * 4 + -0x7d1e7ba0);
    switch(uVar7) {
    default:
      lVar2 = fn_82CFD5F0(param_3);
      break;
    case 0x13:
    case 0x1d:
      goto switchD_82e1845c_caseD_13;
    case 0x14:
    case 0x15:
    case 0x1e:
      iVar4 = fn_82E17EE8(param_3);
      lVar2 = (longlong)iVar4 * (longlong)(int)(uint)*(byte *)(param_1 + 0xc);
      break;
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
      if (uVar7 == 0x1b) {
        uVar8 = (ulonglong)*(byte *)(param_1 + 0xc);
      }
      lVar2 = *(byte *)(param_1 + 0xc) + uVar8 + 4;
      if (uVar7 == 0x16) {
        uStack_240 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_23f,0,0xb);
      }
      break;
    case 0x19:
      fn_82CFD5A8(param_3);
      iVar4 = fn_82CEB1A8();
      iVar3 = fn_82E17EE8(param_3);
      lVar2 = (longlong)iVar4 * (longlong)iVar3;
      break;
    case 0x1c:
      iVar4 = fn_82E17EE8(param_3);
      lVar2 = ((longlong)iVar4 * (longlong)(int)(uint)*(byte *)(param_1 + 0xc) & 0x7fffffffU) << 1;
    }
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_258 = 0x80000000;
    puVar5 = (uint *)fn_82CE5410();
    uVar7 = (uint)lVar2;
    uStack_258 = uVar7 | 0x80000000;
    uStack_260 = *puVar5;
    *puVar5 = (uVar7 + 0x7f & 0xffffff80) + uStack_260;
    uStack_254 = uStack_260;
    iVar4 = fn_82CE5410();
    if ((int)(uStack_258 & 0x3fffffff) < (int)uVar7) {
      lVar6 = ((ulonglong)uStack_258 & 0x3fffffff) << 1;
      if ((int)lVar6 <= (int)uVar7) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(undefined4 *)(iVar4 + 0x10),&uStack_260,lVar6);
    }
    uVar8 = lVar2 - (ulonglong)uStack_25c;
    if (0 < (longlong)uVar8) {
      lVar6 = (ulonglong)uStack_260 + (ulonglong)uStack_25c + -1;
      uVar1 = uVar8 & 0xffffffff;
      while (uVar1 != 0) {
        lVar6 = lVar6 + 1;
        *(undefined1 *)lVar6 = 0;
        uVar8 = uVar8 - 1;
        uVar1 = uVar8;
      }
    }
    uStack_25c = uVar7;
    fn_82CFE180(param_2,uStack_260,lVar2);
    uVar7 = uStack_254;
    uStack_25c = -(uint)(uStack_260 != uStack_254) & uStack_25c;
    puVar5 = (uint *)fn_82CE5410();
    *puVar5 = uVar7;
    iVar4 = fn_82CE5410();
    uStack_25c = 0;
    if ((uStack_258 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),uStack_260,uStack_258 & 0x3fffffff,1);
    }
    return;
  }
switchD_82e1845c_caseD_13:
  fn_82CEE578(auStack_250,auStack_230,0x200);
  fn_82CEDB38(auStack_250,0xffffffff8214b584);
  iVar4 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x5ef4e5a4,auStack_230,0xffffffff8214b528,0xaa);
  if (iVar4 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_250);
}

