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
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8269D028();
extern int fn_826F8490();
extern int fn_826FDAB8();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8269DD58(int *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  undefined4 *apuStack_60 [2];
  undefined8 uStack_58;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    uVar3 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) {
      return;
    }
    uVar3 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  if (uVar3 == 0) {
    fn_826FDAB8();
  }
  else {
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    else {
      uStack_58 = uVar3 - 1 & 0xffffffff;
      dVar7 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((U64)0xFFFFFFFF)) << 32));
      uVar3 = (ulonglong)(uint)(1 << ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(0x143,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
    apuStack_60[0] = (undefined4 *)0x0;
    apuStack_60[0] = (undefined4 *)fn_8267BED0(param_2,uVar3 * 0xc + 8,&uStack_58);
    *apuStack_60[0] = 0;
    apuStack_60[0][1] = (int)uVar3 + -1;
    if (uVar3 != 0) {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)apuStack_60[0] + iVar4 + 8) = 0xfffffffe;
        uVar3 = uVar3 - 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar3 != 0);
    }
    if (*param_1 != 0) {
      iVar4 = 0;
      lVar6 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
      do {
        iVar5 = iVar4 + *param_1;
        if (*(int *)(iVar5 + 8) != -2) {
          fn_8269D028(apuStack_60,param_2,iVar5 + 0xc,*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0xc)
                       );
          fn_826F8490(iVar5 + 0xc,0);
          *(undefined4 *)(iVar5 + 8) = 0xfffffffe;
        }
        lVar6 = lVar6 + -1;
        iVar4 = iVar4 + 0xc;
      } while (lVar6 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = apuStack_60[0];
    apuStack_60[0] = (undefined4 *)0x0;
    *param_1 = (int)puVar2;
    fn_826FDAB8(apuStack_60);
  }
  return;
}

