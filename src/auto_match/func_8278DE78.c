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
extern unsigned int *auStack_60;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C4F0();
extern int fn_826DAE08();
extern int fn_8278BA98();
extern int fn_8278C160();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8278DE78(int *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined8 uStack_58;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    uVar4 = 8;
  }
  else {
    if ((uint)(*piVar1 * 5) <= (uint)((piVar1[1] + 1) * 4)) {
      return;
    }
    uVar4 = ((ulonglong)(uint)piVar1[1] + 1 & 0x7fffffff) << 1;
  }
  if (uVar4 == 0) {
    fn_826DAE08();
  }
  else {
    if (uVar4 < 8) {
      uVar4 = 8;
    }
    else {
      uStack_58 = uVar4 - 1 & 0xffffffff;
      dVar8 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)((float)dVar8 * lbl_8200561C + lbl_82002AE0))) & ((U64)0xFFFFFFFF)) << 32));
      uVar4 = (ulonglong)(uint)(1 << ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(0x144,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
    puStack_5c = (undefined4 *)0x0;
    puStack_5c = (undefined4 *)fn_8267BED0(param_2,uVar4 * 0xc + 8,&uStack_58);
    *puStack_5c = 0;
    puStack_5c[1] = (int)uVar4 + -1;
    if (uVar4 != 0) {
      iVar5 = 0;
      do {
        *(undefined4 *)((int)puStack_5c + iVar5 + 8) = 0xfffffffe;
        uVar4 = uVar4 - 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 != 0);
    }
    if (*param_1 != 0) {
      iVar5 = 0;
      lVar7 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
      do {
        iVar6 = iVar5 + *param_1;
        if (*(int *)(iVar6 + 8) != -2) {
          uVar3 = fn_8278BA98(auStack_60,*(undefined4 *)(iVar6 + 0x10));
          fn_8278C160(&puStack_5c,param_2,iVar6 + 0x10,uVar3);
          if (*(int *)(iVar6 + 0x10) != 0) {
            fn_8267C4F0();
          }
          *(undefined4 *)(iVar6 + 8) = 0xfffffffe;
        }
        lVar7 = lVar7 + -1;
        iVar5 = iVar5 + 0xc;
      } while (lVar7 != 0);
      fn_8267BE38(*param_1);
    }
    puVar2 = puStack_5c;
    puStack_5c = (undefined4 *)0x0;
    *param_1 = (int)puVar2;
    fn_826DAE08(&puStack_5c);
  }
  return;
}

