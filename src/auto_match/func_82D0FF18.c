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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0D770();
extern int fn_82D0FE70();
extern int fn_82D14790();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int iStack_90;
extern unsigned int iStack_a0;
extern unsigned int lbl_821344F4;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


undefined8 fn_82D0FF18(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  double dVar13;
  int iStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  
  iStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x80000000;
  iStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x80000000;
  iStack_80 = 0;
  iStack_7c = 0;
  uStack_78 = 0x80000000;
  uVar3 = fn_82D0D770();
  iVar4 = fn_82CE5410();
  if (uStack_8c == (uStack_88 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),&iStack_90,4);
  }
  iVar4 = 0;
  *(undefined4 *)(uStack_8c * 4 + iStack_90) = uVar3;
  uVar9 = (ulonglong)uStack_8c + 1;
  uStack_8c = (uint)uVar9;
  if (0 < param_3[1]) {
    dVar13 = (double)lbl_821344F4;
    do {
      if (0 < (int)uVar9) {
        iVar12 = 0;
        do {
          iStack_7c = 0;
          cVar8 = fn_82D0FE70(param_1,*(undefined4 *)(iVar12 + iStack_90),
                                *(undefined4 *)(iVar4 * 4 + *param_3),&iStack_80);
          iVar7 = iStack_90;
          if (cVar8 == '\0') {
            iVar6 = fn_82CE5410();
            if (uStack_9c == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),&iStack_a0,4);
            }
            *(undefined4 *)(uStack_9c * 4 + iStack_a0) = *(undefined4 *)(iVar12 + iVar7);
            uStack_9c = uStack_9c + 1;
          }
          else {
            puVar11 = *(undefined4 **)(iVar12 + iStack_90);
            if (puVar11 != (undefined4 *)0x0) {
              (**(code **)*puVar11)(puVar11,1);
            }
            iVar7 = 0;
            if (0 < iStack_7c) {
              iVar6 = 0;
              do {
                iVar2 = iStack_80;
                iVar5 = fn_82CE5410();
                if (uStack_9c == (uStack_98 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),&iStack_a0,4);
                }
                *(undefined4 *)(uStack_9c * 4 + iStack_a0) = *(undefined4 *)(iVar6 + iVar2);
                uStack_9c = uStack_9c + 1;
                iVar2 = *(int *)(iVar6 + iStack_80);
                *(float *)(*(int *)(iVar2 + 8) + 4) = (float)dVar13;
                fn_82D14790(*(undefined4 *)(iVar2 + 8));
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar7 < iStack_7c);
            }
          }
          uVar9 = uVar9 - 1;
          iVar12 = iVar12 + 4;
        } while (uVar9 != 0);
      }
      uVar1 = uStack_88;
      iVar7 = iStack_a0;
      iVar12 = iStack_90;
      iVar4 = iVar4 + 1;
      uVar9 = (ulonglong)uStack_9c;
      uStack_88 = uStack_98;
      iStack_a0 = iStack_90;
      iStack_90 = iVar7;
      uStack_8c = uStack_9c;
      uStack_98 = uVar1;
      uStack_9c = 0;
    } while (iVar4 < param_3[1]);
  }
  iVar4 = 0;
  if (0 < (int)uVar9) {
    iVar12 = 0;
    do {
      puVar11 = (undefined4 *)(iVar12 + iStack_90);
      iVar7 = fn_82CE5410();
      if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),param_4,4);
      }
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 4;
      *(undefined4 *)(param_4[1] * 4 + *param_4) = *puVar11;
      param_4[1] = param_4[1] + 1;
    } while (iVar4 < (int)uStack_8c);
    uVar10 = 1;
    if (0 < (int)uStack_8c) goto LAB_82d101d4;
  }
  uVar10 = 0;
LAB_82d101d4:
  iVar4 = fn_82CE5410();
  iStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  iStack_80 = 0;
  uStack_78 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_a0,uStack_98 & 0x3fffffff,4);
  }
  iStack_a0 = 0;
  uStack_98 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_8c = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),iStack_90,uStack_88 & 0x3fffffff,4);
  }
  return uVar10;
}

