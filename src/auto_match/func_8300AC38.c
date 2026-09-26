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
extern int fn_82FF2510();
extern int fn_83006E68();
extern int fn_830177C8();
extern int fn_8302AF48();
extern int fn_8302AFF8();
extern int fn_8302B0A8();
extern int fn_8302B158();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_70;


undefined8
fn_8300AC38(int param_1,float *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uStack_70;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != 0) {
    uVar6 = 0;
    iVar5 = iVar4;
    do {
      if (*(int *)(iVar5 + 0xc) != -1) {
        bVar7 = true;
        goto LAB_8300ac9c;
      }
      uVar6 = uVar6 + 0xc;
      iVar5 = uVar6 + iVar4;
    } while (uVar6 < 0x30);
  }
  bVar7 = false;
LAB_8300ac9c:
  dVar10 = (double)lbl_821AAD20;
  if (bVar7) {
    param_3 = (param_3 & 0xfffffffe) << 0x20 | param_3 & 0xfffffff6;
  }
  else {
    dVar11 = dVar10;
    for (puVar1 = *(undefined4 **)(param_1 + 0x7c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      dVar11 = (double)(float)((double)(float)puVar1[5] + dVar11);
    }
    if (dVar11 < (double)*(float *)(param_1 + 0x58)) {
      dVar11 = (double)*(float *)(param_1 + 0x58);
    }
    *param_2 = (float)(dVar11 + (double)*param_2);
    param_2[1] = (float)((double)param_2[1] + dVar11);
  }
  uVar8 = param_3;
  if (((*(byte *)(param_1 + 0x3d) & 4) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar3 = fn_83006E68(param_1);
    if ((uVar3 & 0xffffffff) == 0) {
      if ((param_3 & 1) != 0) {
        *param_2 = *(float *)(*(int *)(param_1 + 0x20) + 4) + *param_2;
      }
      if ((param_3 & 2) != 0) {
        param_2[2] = *(float *)(*(int *)(param_1 + 0x20) + 0xc) + param_2[2];
      }
      if ((param_3 & 8) != 0) {
        param_2[1] = *(float *)(*(int *)(param_1 + 0x20) + 8) + param_2[1];
      }
      if ((param_3 & 4) == 0) goto LAB_8300ae7c;
    }
    else {
      if ((param_3 & 1) != 0) {
        iVar4 = fn_8302AF48();
        if (iVar4 == 1) {
          uVar8 = param_3 & 0xfffffffe;
        }
        *param_2 = *(float *)(*(int *)(param_1 + 0x20) + 4) + *param_2;
      }
      if ((uVar8 & 2) != 0) {
        iVar4 = fn_8302AFF8(uVar3);
        if (iVar4 == 1) {
          uVar8 = uVar8 & 0xfffffffd;
        }
        param_2[2] = *(float *)(*(int *)(param_1 + 0x20) + 0xc) + param_2[2];
      }
      if ((uVar8 & 8) != 0) {
        iVar4 = fn_8302B158(uVar3);
        if (iVar4 == 1) {
          uVar8 = uVar8 & 0xfffffff7;
        }
        param_2[1] = *(float *)(*(int *)(param_1 + 0x20) + 8) + param_2[1];
      }
      if ((uVar8 & 4) == 0) goto LAB_8300ae7c;
      iVar4 = fn_8302B0A8(uVar3);
      if (iVar4 == 1) {
        uVar8 = uVar8 & 0xfffffffb;
      }
    }
    param_2[3] = *(float *)(*(int *)(param_1 + 0x20) + 0x10) + param_2[3];
  }
LAB_8300ae7c:
  dVar11 = (double)lbl_82186E6C;
  if ((uVar8 & 1) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x2c);
    *param_2 = (float)((double)(longlong)uStack_70 * dVar11 + (double)*param_2);
    if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
      dVar9 = (double)fn_830177C8(lbl_832642FC,param_1,0,0);
      *param_2 = (float)(dVar9 + (double)*param_2);
    }
  }
  if ((uVar8 & 2) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x30);
    param_2[2] = (float)(longlong)uStack_70 + param_2[2];
    if ((*(uint *)(param_1 + 0x40) >> 2 & 1) != 0) {
      dVar9 = (double)fn_830177C8(lbl_832642FC,param_1,2,0);
      param_2[2] = (float)(dVar9 + (double)param_2[2]);
    }
  }
  if ((uVar8 & 8) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x2e);
    param_2[1] = (float)((double)(longlong)uStack_70 * dVar11 + (double)param_2[1]);
    if ((*(uint *)(param_1 + 0x40) >> 1 & 1) != 0) {
      dVar11 = (double)fn_830177C8(lbl_832642FC,param_1,1,0);
      param_2[1] = (float)(dVar11 + (double)param_2[1]);
    }
  }
  if ((uVar8 & 4) != 0) {
    uStack_70 = (ulonglong)*(byte *)(param_1 + 0x3c);
    param_2[3] = (float)uStack_70 + param_2[3];
    if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
      dVar11 = (double)fn_830177C8(lbl_832642FC,param_1,3,0);
      param_2[3] = (float)(dVar11 + (double)param_2[3]);
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if ((param_3 & 1) != 0) {
      *param_2 = *(float *)(*(int *)(param_1 + 0x24) + 0x28) + *param_2;
    }
    if ((param_3 & 8) != 0) {
      param_2[1] = *(float *)(*(int *)(param_1 + 0x24) + 0x2c) + param_2[1];
    }
    param_2[3] = *(float *)(*(int *)(param_1 + 0x24) + 0x30) + param_2[3];
    param_2[2] = *(float *)(*(int *)(param_1 + 0x24) + 0x34) + param_2[2];
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x3c) != -1) {
      uStack_70 = CONCAT44(param_1,(int)uStack_70) & 0xffffffff3fffffff | 0x80000000;
      fn_82FF2510((double)*(byte *)(*(int *)(param_1 + 0x24) + 0x3c),param_4,uStack_70);
    }
  }
  if ((*(byte *)(param_1 + 0xa0) & 8) != 0) {
    uStack_70 = CONCAT44(param_1,(int)uStack_70) & 0xffffffff3fffffff | 0x80000000;
    fn_82FF2510(dVar10,param_4,uStack_70);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x9c))(piVar2,param_2,param_3,param_4,param_5,param_6,param_7,1);
  }
  return 1;
}

