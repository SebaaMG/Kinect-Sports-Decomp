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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA66A8();
extern int fn_82B167E0();
extern int fn_82B4A218();
extern int fn_82B4DD78();
extern int fn_82B54948();
extern int fn_82F69148();
extern unsigned int iStack_40;
extern unsigned int lbl_82005710;
extern unsigned int uStack_3c;


void fn_82B4E578(int param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  int iStack_40;
  uint uStack_3c;
  
  fn_82B54948(param_1,param_2,param_4,4);
  lVar3 = fn_82B4A218(*(undefined4 *)(param_1 + 0x234),param_3,param_1);
  uVar5 = 0;
  uVar2 = *(uint *)(param_3 * 0x28 + *(int *)(param_1 + 0xc)) >> 3;
  uVar7 = (ulonglong)uVar2 & 0x3fff;
  for (uVar1 = *(uint *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    uVar5 = *(uint *)(uVar1 + 8) + uVar5;
  }
  if ((uVar5 & 0xffffffff) == uVar7) {
    lVar8 = uVar7 - 1;
    if (-1 < lVar8) {
      lVar3 = uVar7 * 8 + lVar3;
      do {
        puVar4 = (undefined4 *)fn_82B4DD78(&iStack_40,param_2);
        lVar8 = lVar8 + -1;
        lVar3 = lVar3 + -8;
        *(undefined4 *)lVar3 = *puVar4;
        ((undefined4 *)lVar3)[1] = puVar4[1];
      } while (-1 < lVar8);
    }
  }
  else {
    if ((uVar5 & 0xffffffff) != 1) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    fn_82B4DD78(&iStack_40,param_2);
    if ((((uStack_3c & 3) != 1) || ((*(uint *)(iStack_40 + 8) & 0x3f80) != 16000)) ||
       (dVar9 = (double)fn_82B167E0(iStack_40,uStack_3c >> 2 & 0x3fff), dVar9 != lbl_82005710)
       ) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    if ((uVar2 & 0x3fff) != 0) {
      *(undefined8 *)lVar3 = CONCAT44(iStack_40,uStack_3c);
      fn_82F69148(lVar3 + 8,lVar3,uVar7 * 8 - 1 & 0xfffffff8);
    }
  }
  iVar6 = param_3 * 0x28 + *(int *)(param_1 + 0xc);
  *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) | 2;
  return;
}

