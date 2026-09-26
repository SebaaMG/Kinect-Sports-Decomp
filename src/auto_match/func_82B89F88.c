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
extern unsigned int *auStack_b8;
extern int fn_82AA66A8();
extern int fn_82AE60E8();
extern int fn_82B806D8();
extern int fn_82B81B40();
extern int fn_82B84820();
extern int fn_82B89838();
extern int fn_82F6DCE0();
extern unsigned int lbl_8316E130;
extern unsigned int lbl_8316E230;
extern unsigned int uStack_b0;
extern unsigned int uStack_bc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_82B89F88(int param_1,uint param_2,ulonglong param_3,ulonglong param_4,
                       undefined8 param_5,char param_6)

{
  char cVar3;
  undefined *puVar2;
  ulonglong uVar1;
  undefined **ppuVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined **ppuVar8;
  char *pcVar9;
  undefined4 uStack_bc;
  uint auStack_b8 [2];
  uint uStack_b0;
  char acStack_a0 [160];
  
  if (param_2 != 0xffffffff) {
    uVar7 = 0;
    if (*(uint *)(param_1 + 0x218) != 0) {
      puVar6 = (uint *)(param_1 + 0x15c);
      do {
        if ((param_2 == (*puVar6 & 0x1f)) &&
           ((param_3 & 0xffffffff) == ((ulonglong)(*puVar6 >> 5) & 0xf))) {
          uVar1 = (ulonglong)*(uint *)(uVar7 * 0xc + param_1 + 0x160);
          if (uVar1 != 0) {
            return uVar1;
          }
          break;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 3;
      } while (uVar7 < *(uint *)(param_1 + 0x218));
    }
  }
  uVar1 = 0;
  if (param_6 != '\0') {
    auStack_b8[0] = 0;
    uStack_b0 = 0;
    if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
      iVar5 = 0x14;
      ppuVar4 = &lbl_8316E230;
    }
    else {
      iVar5 = 0x15;
      ppuVar4 = &lbl_8316E130;
    }
    if ((param_4 & 0xffffffff) == 0) {
      ppuVar8 = ppuVar4 + iVar5 * 3;
      while ((ppuVar4 < ppuVar8 && (param_2 != ((uint)ppuVar4[1] >> 0x17 & 0x1f)))) {
        ppuVar4 = ppuVar4 + 3;
      }
      if (ppuVar8 <= ppuVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      puVar2 = *ppuVar4;
      if ((param_3 & 0xffffffff) != 0) {
        fn_82F6DCE0(acStack_a0,100,0xffffffff820d7c44,puVar2,param_3);
        pcVar9 = acStack_a0;
        do {
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
        puVar2 = (undefined *)
                 fn_82AE60E8(param_1,(uint)(pcVar9 + (3 - (int)acStack_a0)) & 0xfffffffc,0);
        pcVar9 = acStack_a0;
        do {
          cVar3 = *pcVar9;
          pcVar9[(int)puVar2 - (int)acStack_a0] = cVar3;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
      }
      cVar3 = fn_82B806D8(param_1,ppuVar4,param_3,puVar2,auStack_b8,&uStack_bc);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    else {
      cVar3 = fn_82B81B40(param_1,param_4,0,ppuVar4,iVar5,0,0,auStack_b8);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    if ((*(uint *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
      uVar1 = fn_82B89838(param_1,(ulonglong)auStack_b8[0] << 0x20,(ulonglong)uStack_b0 << 0x20,
                            param_5,uStack_bc,0,0);
      if ((uVar1 & 0xffffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    else {
      uVar1 = fn_82B84820();
    }
  }
  return uVar1;
}

