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
extern int fn_82AA66A8();
extern int fn_82AD20C0();
extern int fn_82B80EF8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_8207F708;
extern unsigned int lbl_820D7E90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B1A378(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar4;
  undefined8 uVar3;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = fn_82F6A548();
  iVar1 = *(int *)(param_3 + 0x14);
  uVar6 = 0;
  dVar8 = lbl_82002C40;
  dVar9 = lbl_8207F708;
  dVar10 = lbl_820D7E90;
  dVar11 = lbl_82005730;
  if (*(int *)(iVar1 + 4) != 0) {
    do {
      puVar2 = *(uint **)((uVar6 + 2) * 4 + iVar1);
      if ((*(uint *)(puVar2[3] + 8) & 0x3f80) != 16000) {
        uVar3 = 0xe24;
        goto code_r0x82b1a494;
      }
      dVar7 = (double)fn_82B80EF8(puVar2[3],*puVar2 >> 5 & 3,*puVar2 & 0x1f);
      if ((dVar7 < dVar10) || (dVar9 < dVar7)) {
        *(double *)(iVar4 + 0x270) = dVar7;
        uVar3 = 0xe25;
        *(double *)(iVar4 + 0x278) = dVar10;
        *(double *)(iVar4 + 0x280) = dVar9;
        goto code_r0x82b1a494;
      }
      uVar5 = (uint)(dVar7 * dVar8);
      if ((double)(longlong)(int)uVar5 * dVar11 != dVar7) {
        *(double *)(iVar4 + 0x270) = dVar7;
        uVar3 = 0xe26;
        *(double *)(iVar4 + 0x278) = dVar11;
        goto code_r0x82b1a494;
      }
      if (uVar6 == 0) {
        uVar5 = (uVar5 & 0x1f) << 0x10 | *(uint *)(param_3 + 8) & 0xffe0ffff;
      }
      else if (uVar6 == 1) {
        uVar5 = (uVar5 & 0x1f) << 0x15 | *(uint *)(param_3 + 8) & 0xfc1fffff;
      }
      else {
        if (2 < uVar6) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(iVar4,0x12c0);
        }
        uVar5 = (uVar5 & 0x1f) << 0x1a | *(uint *)(param_3 + 8) & 0x83ffffff;
      }
      *(uint *)(param_3 + 8) = uVar5;
      fn_82AD20C0(param_2,puVar2,iVar4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar1 + 4));
  }
  uVar3 = 0;
code_r0x82b1a494:
  fn_82F6A594(uVar3);
  return;
}

