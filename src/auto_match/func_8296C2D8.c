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
extern int fn_829632F0();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82964868();
extern int fn_82966400();
extern int fn_8296BD78();
extern unsigned int lbl_82005710;


undefined8 fn_8296C2D8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar5 = fn_82964868();
  if (iVar5 == -1) {
LAB_8296c2fc:
    uVar4 = 0xffffffff8007000e;
  }
  else {
    iVar5 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x18));
    fn_829632F0(iVar5,param_2);
    uVar8 = (ulonglong)*(uint *)(param_2 + 0xc);
    uVar10 = 0;
    if (uVar8 != 0) {
      do {
        iVar6 = fn_82966400(param_1);
        if (iVar6 == 0) break;
        uVar10 = uVar10 + 1;
      } while ((uVar10 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    if ((uVar10 & 0xffffffff) != (uVar8 & 0xffffffff)) {
      iVar6 = fn_829646C8(param_1,uVar8 & 0xffffffff000fffff | 0x10000000,0xffffffffffffffff,
                            0xffffffffffffffff);
      if (iVar6 == -1) goto LAB_8296c2fc;
      puVar1 = *(undefined4 **)(iVar6 * 4 + *(int *)(param_1 + 0x18));
      fn_829632F0(puVar1,param_2);
      uVar9 = 0;
      if (*(int *)(iVar5 + 0xc) != 0) {
        iVar6 = 0;
        uVar4 = lbl_82005710;
        do {
          *(undefined4 *)(iVar6 + puVar1[4]) = *(undefined4 *)(iVar6 + *(int *)(iVar5 + 0x10));
          uVar7 = fn_82964628(uVar4,param_1,*(undefined4 *)(param_1 + 0x88),0xffffffffffffffff,
                                0xffffffffffffffff);
          *(undefined4 *)(iVar6 + puVar1[2]) = uVar7;
          *(undefined4 *)(iVar6 + *(int *)(iVar5 + 0x10)) = uVar7;
          if (*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) == -1) goto LAB_8296c2fc;
          fn_829640A0(*(undefined4 *)
                         (*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)),
                        *(undefined4 *)
                         (*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                       );
          uVar9 = uVar9 + 1;
          *(undefined4 *)
           (*(int *)(*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) + 0x14
           ) = *(undefined4 *)
                (*(int *)(*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                + 0x14);
          *(undefined4 *)
           (*(int *)(*(int *)(iVar6 + *(int *)(iVar5 + 0x10)) * 4 + *(int *)(param_1 + 0x14)) + 0x18
           ) = *(undefined4 *)
                (*(int *)(*(int *)(iVar6 + *(int *)(param_2 + 0x10)) * 4 + *(int *)(param_1 + 0x14))
                + 0x18);
          piVar2 = (int *)(iVar6 + *(int *)(iVar5 + 0x10));
          piVar3 = (int *)(iVar6 + *(int *)(param_2 + 0x10));
          iVar6 = iVar6 + 4;
          **(undefined4 **)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) =
               **(undefined4 **)(*piVar3 * 4 + *(int *)(param_1 + 0x14));
        } while (uVar9 < *(uint *)(iVar5 + 0xc));
      }
      uVar4 = fn_8296BD78(param_1,puVar1);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *puVar1 = 0;
    }
    uVar4 = 0;
  }
  return uVar4;
}

