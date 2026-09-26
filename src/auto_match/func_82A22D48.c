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
extern unsigned int *auStack_70;
extern int fn_82A1F648();
extern int fn_82A203C0();
extern int fn_82A204C8();
extern int fn_82A22B20();
extern unsigned int iStack_64;
extern unsigned int iStack_80;
extern unsigned int lbl_83219CAC;
extern unsigned int *lbl_83219CB0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8 fn_82A22D48(undefined2 *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  iVar3 = fn_82A1F648();
  if (iVar3 != 0) {
    fn_82A204C8(*(undefined4 *)(param_1 + 2),*param_1,&uStack_90);
    iVar3 = fn_82A22B20(lbl_83219CAC,uStack_90,(ulonglong)uStack_84 + (ulonglong)uStack_8c,1);
    if ((iVar3 == 0) &&
       ((iStack_80 == 0 || (iVar3 = fn_82A22B20(lbl_83219CAC,iStack_80,uStack_7c,1), iVar3 == 0)))
       ) {
      uVar8 = 0;
      if (lbl_83219CB0[1] != 0) {
        iVar3 = 0;
        piVar6 = lbl_83219CB0;
        do {
          uVar9 = 0;
          iVar2 = *(int *)(*piVar6 + iVar3);
          uVar1 = *(ushort *)(iVar2 + 8);
          if (uVar1 != 0) {
            do {
              puVar7 = (uint *)((uVar9 - *(ushort *)(iVar2 + 0xc)) * 4 +
                                (uint)*(ushort *)(iVar2 + 4) + iVar2);
              iVar4 = (*puVar7 & 0xffff) + iVar2 + 1;
              fn_82A204C8(iVar4,(ulonglong)*(byte *)((int)puVar7 + 1) - 1,auStack_70);
              uVar5 = (ulonglong)uStack_6c;
              if ((uVar5 == uStack_8c) &&
                 (iVar4 = RtlCompareStringN(iVar4,uVar5,uStack_90,uVar5,1), iVar4 == 0)) {
                if (iStack_64 == 0) {
                  return 0;
                }
                iVar4 = fn_82A203C0(uStack_68,iStack_64,uStack_88,(ulonglong)uStack_84);
                if (iVar4 != 0) {
                  return 0;
                }
              }
              uVar9 = uVar9 + 1;
              piVar6 = lbl_83219CB0;
            } while (uVar9 < uVar1);
          }
          uVar8 = uVar8 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar8 < (uint)piVar6[1]);
      }
      return 1;
    }
  }
  return 0;
}

