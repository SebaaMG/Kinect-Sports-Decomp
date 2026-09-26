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
extern int fn_8268ACE8();
extern int fn_8278FD18();
extern int fn_82790FA0();
extern int fn_82792F70();
extern int fn_82795998();
extern int fn_82795C78();
extern int fn_82795EE0();
extern int fn_82796498();
extern int fn_82F68CC0();


longlong fn_82796B38(int *param_1,ulonglong param_2,ulonglong param_3,int param_4,int param_5,
                      ulonglong param_6)

{
  bool bVar1;
  char cVar5;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  short sVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  sVar12 = 0;
  if ((int)param_3 == -1) {
    param_3 = thunk_FUN_82f64ce0(param_2);
  }
  uVar10 = (param_3 & 0x7fffffff) * 2 + param_2;
  uVar9 = (ulonglong)(uint)param_1[4] - 1;
  if (((longlong)uVar9 < 0) || (bVar1 = false, param_1[4] <= (int)uVar9)) {
    bVar1 = true;
  }
  if (bVar1) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)((int)((uVar9 & 0xffffffff) << 2) + param_1[3]);
  }
  uVar9 = 0;
  if (piVar3 != (int *)0x0) {
    uVar9 = (ulonglong)(uint)piVar3[7];
  }
  (**(code **)(*param_1 + 8))(param_1,uVar9,param_3,param_2);
  lVar11 = 0;
  iVar4 = 0;
  do {
    bVar1 = iVar4 == 0;
    iVar4 = iVar4 + 1;
    if ((bVar1) && (piVar3 != (int *)0x0)) {
      fn_82795998(piVar3);
      uVar7 = (ulonglong)(uint)piVar3[1];
      if ((uVar7 != 0) && (cVar5 = fn_8278FD18(piVar3), cVar5 != '\0')) {
        uVar7 = uVar7 - 1;
      }
      if (((uVar7 & 0xffffffff) == 0) && ((param_6 & 0xffffffff) != 0)) {
        fn_82790FA0(piVar3,param_1[2],param_6);
      }
    }
    else {
      piVar3 = (int *)fn_82796498(param_1,param_6);
      uVar7 = 0;
      piVar3[7] = (int)uVar9;
    }
    uVar14 = 0;
    if (((param_4 == 0) && (sVar12 == 0xd)) && (*(short *)param_2 == 10)) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 2;
      if (param_3 == 0) break;
    }
    uVar6 = param_2;
    if ((param_3 & 0xffffffff) != 0) {
      do {
        sVar12 = *(short *)uVar6;
        if (sVar12 == 10) goto LAB_82796cdc;
        if ((sVar12 == 0xd) || (sVar12 == 0)) break;
        uVar14 = uVar14 + 1;
        uVar6 = uVar6 + 2;
      } while ((uVar14 & 0xffffffff) < (param_3 & 0xffffffff));
    }
    if ((sVar12 == 10) || (sVar12 == 0xd)) {
LAB_82796cdc:
      uVar14 = uVar14 + 1;
    }
    uVar2 = fn_82792F70(piVar3,param_1[2],uVar7,uVar14);
    lVar13 = (uVar14 & 0x7fffffff) * 2;
    fn_82F68CC0(uVar2,param_2,lVar13);
    param_2 = lVar13 + param_2;
    param_3 = param_3 - uVar14;
    if (((sVar12 == 10) || (sVar12 == 0xd)) &&
       (uVar6 = (ulonglong)*(byte *)(param_1 + 8),
       sVar12 != (ushort)((-(ushort)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10))) {
      uVar8 = (ulonglong)(uint)piVar3[1];
      if (uVar8 != 0) {
        cVar5 = fn_8278FD18(piVar3);
        if (cVar5 != '\0') {
          uVar8 = uVar8 - 1;
        }
        if ((uVar8 & 0xffffffff) != 0) {
          *(ushort *)((int)((uVar8 & 0xffffffff) << 1) + *piVar3 + -2) =
               (-(ushort)((uVar6 & 2) != 0) & 3) + 10;
        }
      }
      sVar12 = (-(ushort)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10;
    }
    fn_82795C78(piVar3,param_1[2],param_5,uVar7,0xffffffffffffffff);
    lVar11 = uVar14 + lVar11;
    uVar9 = uVar14 + uVar7 + uVar9;
    if (((uVar10 & 0xffffffff) <= (param_2 & 0xffffffff)) || (sVar12 == 0)) break;
  } while( true );
  if (sVar12 == (ushort)((-(ushort)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10)) {
    piVar3 = (int *)fn_82796498(param_1,param_6);
  }
  fn_82795EE0(piVar3,param_1[2],param_5);
  if ((*(ushort *)(param_5 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_5 + 0x10);
    bVar1 = true;
    if (iVar4 != 0) goto LAB_82796e38;
  }
  bVar1 = false;
LAB_82796e38:
  if (bVar1) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  }
  return lVar11;
}

