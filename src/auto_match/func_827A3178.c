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
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A0BD0();
extern int fn_827A1508();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


undefined8
fn_827A3178(int param_1,longlong param_2,float *param_3,int *param_4,int *param_5,char param_6,
             uint *param_7)

{
  uint uVar1;
  uint *puVar2;
  float fVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uStack_c0;
  uint uStack_bc;
  
  fn_827A0BD0(*(undefined4 *)(param_1 + 8));
  iVar6 = fn_827A1508(*(undefined4 *)(param_1 + 8),param_2);
  if (iVar6 == -1) {
    uVar5 = 0;
  }
  else {
    puVar2 = *(uint **)(iVar6 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x24));
    if (param_7 != (uint *)0x0) {
      *param_7 = *puVar2 >> 0x1c & 3;
    }
    uVar7 = (ulonglong)puVar2[2];
    if ((int)*puVar2 < 0) {
      uVar7 = (ulonglong)puVar2[2] & 0xffffff;
      if (uVar7 == 0xffffff) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    iVar10 = 0;
    fn_82756F70(&uStack_c0,puVar2);
    iVar9 = 0;
    while( true ) {
      if ((uStack_c0 == 0) || (bVar4 = false, uStack_bc <= uStack_c0)) {
        bVar4 = true;
      }
      if (bVar4) break;
      if ((*(ushort *)(uStack_c0 + 4) & 0xf000) != 0) break;
      if ((*(ushort *)(uStack_c0 + 6) >> 8 & 1) != 0) break;
      uVar8 = (uint)*(ushort *)(uStack_c0 + 2);
      if ((*(ushort *)(uStack_c0 + 6) >> 6 & 1) != 0) {
        uVar8 = -uVar8;
      }
      iVar10 = uVar8 + iVar10;
      iVar9 = iVar9 + 1;
      fn_827555D8(&uStack_c0);
    }
    uVar11 = 0;
    if ((param_2 - uVar7 & 0xffffffff) != 0) {
      do {
        if ((uStack_c0 == 0) || (bVar4 = false, uStack_bc <= uStack_c0)) {
          bVar4 = true;
        }
        if (bVar4) break;
        uVar8 = (uint)*(ushort *)(uStack_c0 + 2);
        if ((*(ushort *)(uStack_c0 + 6) >> 6 & 1) != 0) {
          uVar8 = -uVar8;
        }
        iVar10 = uVar8 + iVar10;
        if (param_6 == '\0') {
LAB_827a32f0:
          uVar11 = (*(ushort *)(uStack_c0 + 4) >> 0xc) + uVar11;
        }
        else if ((*(ushort *)(uStack_c0 + 6) >> 2 & 1) == 0) goto LAB_827a32f0;
        iVar9 = iVar9 + 1;
        fn_827555D8(&uStack_c0);
      } while ((uVar11 & 0xffffffff) < (param_2 - uVar7 & 0xffffffff));
    }
    if ((uStack_c0 == 0) || (bVar4 = false, uStack_bc <= uStack_c0)) {
      bVar4 = true;
    }
    fVar3 = lbl_821AAD20;
    if (!bVar4) {
      uVar8 = (uint)*(ushort *)(uStack_c0 + 2);
      if ((*(ushort *)(uStack_c0 + 6) >> 6 & 1) != 0) {
        uVar8 = -(uint)*(ushort *)(uStack_c0 + 2);
      }
      fVar3 = (float)(longlong)(int)uVar8;
    }
    uVar8 = puVar2[3];
    *param_3 = (float)((double)(longlong)(int)uVar8 + (double)(longlong)iVar10);
    uVar1 = puVar2[4];
    param_3[2] = (float)((double)(longlong)(int)uVar8 + (double)(longlong)iVar10) + fVar3;
    param_3[1] = (float)(longlong)(int)uVar1;
    if ((int)*puVar2 < 0) {
      uVar8 = (uint)*(ushort *)((int)puVar2 + 0x16);
    }
    else {
      uVar8 = puVar2[6];
    }
    param_3[3] = (float)((double)(longlong)(int)uVar8 + (double)(longlong)(int)uVar1);
    if (param_4 != (int *)0x0) {
      *param_4 = iVar6;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar9;
    }
    fn_82756488(&uStack_c0);
    uVar5 = 1;
  }
  return uVar5;
}

