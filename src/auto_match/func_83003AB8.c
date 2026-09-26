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
extern int fn_82FFFC20();
extern int fn_83006E68();
extern int fn_830177C8();
extern int fn_8302AF48();
extern int fn_8302AFF8();
extern int fn_8302B0A8();
extern int fn_8302B158();
extern int fn_83035AC8();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_70;


undefined8
fn_83003AB8(int param_1,float *param_2,ulonglong param_3,undefined8 param_4,ulonglong param_5,
             ulonglong param_6,float *param_7,ulonglong param_8)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  ulonglong uStack_70;
  
  uVar6 = param_3;
  if (((*(byte *)(param_1 + 0x3d) & 4) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar2 = fn_83006E68();
    if ((uVar2 & 0xffffffff) == 0) {
      if ((param_3 & 1) != 0) {
        *param_2 = *(float *)(*(int *)(param_1 + 0x20) + 4) + *param_2;
      }
      if ((param_3 & 2) != 0) {
        param_2[2] = *(float *)(*(int *)(param_1 + 0x20) + 0xc) + param_2[2];
      }
      if ((param_3 & 4) != 0) {
        param_2[3] = *(float *)(*(int *)(param_1 + 0x20) + 0x10) + param_2[3];
      }
      if ((param_3 & 8) != 0) goto LAB_83003c3c;
    }
    else {
      if ((param_3 & 1) != 0) {
        iVar3 = fn_8302AF48();
        if (iVar3 == 1) {
          uVar6 = param_3 & 0xfffffffe;
        }
        *param_2 = *(float *)(*(int *)(param_1 + 0x20) + 4) + *param_2;
      }
      if ((uVar6 & 2) != 0) {
        iVar3 = fn_8302AFF8(uVar2);
        if (iVar3 == 1) {
          uVar6 = uVar6 & 0xfffffffd;
        }
        param_2[2] = *(float *)(*(int *)(param_1 + 0x20) + 0xc) + param_2[2];
      }
      if ((uVar6 & 4) != 0) {
        iVar3 = fn_8302B0A8(uVar2);
        if (iVar3 == 1) {
          uVar6 = uVar6 & 0xfffffffb;
        }
        param_2[3] = *(float *)(*(int *)(param_1 + 0x20) + 0x10) + param_2[3];
      }
      if ((uVar6 & 8) != 0) {
        iVar3 = fn_8302B158(uVar2);
        if (iVar3 == 1) {
          uVar6 = uVar6 & 0xfffffff7;
        }
LAB_83003c3c:
        param_2[1] = *(float *)(*(int *)(param_1 + 0x20) + 8) + param_2[1];
      }
    }
  }
  dVar9 = (double)lbl_82186E6C;
  if ((uVar6 & 1) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x2c);
    *param_2 = (float)((double)(longlong)uStack_70 * dVar9 + (double)*param_2);
    if ((*(uint *)(param_1 + 0x40) & 1) != 0) {
      dVar8 = (double)fn_830177C8(lbl_832642FC,param_1,0,param_5);
      *param_2 = (float)(dVar8 + (double)*param_2);
    }
  }
  if ((uVar6 & 2) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x30);
    param_2[2] = (float)(longlong)uStack_70 + param_2[2];
    if ((*(uint *)(param_1 + 0x40) >> 2 & 1) != 0) {
      dVar8 = (double)fn_830177C8(lbl_832642FC,param_1,2,param_5);
      param_2[2] = (float)(dVar8 + (double)param_2[2]);
    }
  }
  if ((uVar6 & 4) != 0) {
    uStack_70 = (ulonglong)*(byte *)(param_1 + 0x3c);
    param_2[3] = (float)uStack_70 + param_2[3];
    if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
      dVar8 = (double)fn_830177C8(lbl_832642FC,param_1,3,param_5);
      param_2[3] = (float)(dVar8 + (double)param_2[3]);
    }
  }
  if ((uVar6 & 8) != 0) {
    uStack_70 = (ulonglong)*(short *)(param_1 + 0x2e);
    param_2[1] = (float)((double)(longlong)uStack_70 * dVar9 + (double)param_2[1]);
    if ((*(uint *)(param_1 + 0x40) >> 1 & 1) != 0) {
      dVar9 = (double)fn_830177C8(lbl_832642FC,param_1,1,param_5);
      param_2[1] = (float)(dVar9 + (double)param_2[1]);
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *param_2 = *(float *)(*(int *)(param_1 + 0x24) + 0x28) + *param_2;
    param_2[1] = *(float *)(*(int *)(param_1 + 0x24) + 0x2c) + param_2[1];
    param_2[3] = *(float *)(*(int *)(param_1 + 0x24) + 0x30) + param_2[3];
    param_2[2] = *(float *)(*(int *)(param_1 + 0x24) + 0x34) + param_2[2];
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x3c) != -1) {
      uStack_70 = CONCAT44(param_1,(int)uStack_70) & 0xffffffff3fffffff | 0x80000000;
      fn_82FF2510((double)*(byte *)(*(int *)(param_1 + 0x24) + 0x3c),param_4,uStack_70);
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0x54);
  if (puVar7 != (undefined4 *)0x0) {
    for (puVar4 = (uint *)*puVar7;
        (puVar4 != (uint *)puVar7[1] && ((ulonglong)*puVar4 != (param_5 & 0xffffffff)));
        puVar4 = puVar4 + 2) {
    }
    piVar5 = (int *)(-(uint)((uint *)puVar7[1] != puVar4) & (uint)(puVar4 + 1));
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
      *param_2 = *(float *)(iVar3 + 0x28) + *param_2;
      param_2[1] = *(float *)(iVar3 + 0x2c) + param_2[1];
      param_2[3] = *(float *)(iVar3 + 0x30) + param_2[3];
      param_2[2] = *(float *)(iVar3 + 0x34) + param_2[2];
      if (*(byte *)(iVar3 + 0x3c) != 0xff) {
        uStack_70 = CONCAT44(param_1,(int)uStack_70) & 0xffffffff3fffffff;
        fn_82FF2510((double)*(byte *)(iVar3 + 0x3c),param_4,uStack_70);
      }
    }
  }
  if (((param_6 & 0xff) != 0) && ((ulonglong)*(uint *)(param_1 + 0x68) != 0)) {
    dVar9 = (double)fn_82FFFC20((ulonglong)*(uint *)(param_1 + 0x68) + 0xc);
    param_7[1] = (float)(dVar9 + (double)param_7[1]);
    dVar9 = (double)fn_82FFFC20((ulonglong)*(uint *)(param_1 + 0x68) + 0x14);
    param_7[2] = (float)(dVar9 + (double)param_7[2]);
    dVar9 = (double)fn_82FFFC20((ulonglong)*(uint *)(param_1 + 0x68) + 0x1c);
    param_7[3] = (float)(dVar9 + (double)param_7[3]);
    dVar9 = (double)fn_82FFFC20((ulonglong)*(uint *)(param_1 + 0x68) + 4);
    *param_7 = (float)(dVar9 + (double)*param_7);
  }
  if (((param_8 & 0xff) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == (int *)0x0) goto LAB_83004064;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x9c))(piVar5,param_2,param_3,param_4,param_5,param_6,param_7,0);
    }
    piVar5 = *(int **)(param_1 + 0x14);
    param_8 = 0;
  }
  (**(code **)(*piVar5 + 0x9c))(piVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_83004064:
  puVar7 = *(undefined4 **)(param_1 + 0x78);
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar7[1];
    for (puVar7 = (undefined4 *)*puVar7; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      fn_83035AC8(*puVar7,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return 1;
}

