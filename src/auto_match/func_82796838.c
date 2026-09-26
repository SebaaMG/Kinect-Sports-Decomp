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
extern int fn_826BD078();
extern int fn_8278FD18();
extern int fn_82792F70();
extern int fn_82795998();
extern int fn_82795C78();
extern int fn_82795EE0();
extern int fn_82796498();


longlong fn_82796838(int *param_1,char *param_2,char *param_3,int param_4,int param_5,
                      undefined8 param_6)

{
  bool bVar1;
  char cVar5;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  char *apcStack_90 [36];
  
  pcVar8 = param_2;
  if (param_3 == (char *)0xffffffff) {
    do {
      cVar5 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar5 != '\0');
    param_3 = pcVar8 + (-1 - (int)param_2);
  }
  pcVar8 = param_2 + (int)param_3;
  uVar7 = (ulonglong)(uint)param_1[4] - 1;
  lVar9 = 0;
  if (((longlong)uVar7 < 0) || (bVar1 = false, param_1[4] <= (int)uVar7)) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)((uVar7 & 0xffffffff) << 2) + param_1[3]);
  }
  uVar7 = 0;
  if (iVar4 != 0) {
    uVar7 = (ulonglong)*(uint *)(iVar4 + 0x1c);
  }
  (**(code **)(*param_1 + 4))(param_1,uVar7,param_3,param_2);
  iVar10 = 0;
  iVar3 = 0;
  while( true ) {
    bVar1 = iVar10 == 0;
    iVar10 = iVar10 + 1;
    if ((bVar1) && (iVar4 != 0)) {
      fn_82795998(iVar4);
      uVar6 = (ulonglong)*(uint *)(iVar4 + 4);
      if ((uVar6 != 0) && (cVar5 = fn_8278FD18(iVar4), cVar5 != '\0')) {
        uVar6 = uVar6 - 1;
      }
    }
    else {
      iVar4 = fn_82796498(param_1,param_6);
      uVar6 = 0;
      *(int *)(iVar4 + 0x1c) = (int)uVar7;
    }
    uVar13 = 0;
    iVar11 = -1;
    apcStack_90[0] = param_2;
    iVar2 = iVar11;
    if (pcVar8 <= param_2) break;
    do {
      iVar2 = iVar11;
      if (iVar11 == 0) break;
      iVar2 = fn_826BD078(apcStack_90);
      if (((param_4 == 0) && (iVar3 == 0xd)) && ((uVar13 & 0xffffffff) == 0)) {
        iVar3 = -1;
        if (iVar2 != 10) goto LAB_827969a8;
        param_2 = param_2 + 1;
      }
      else {
LAB_827969a8:
        if (iVar2 == 10) goto LAB_827969dc;
        if (iVar2 == 0xd) break;
        uVar13 = uVar13 + 1;
        iVar11 = iVar2;
      }
      iVar2 = iVar11;
    } while (apcStack_90[0] < pcVar8);
    if ((iVar2 == 10) || (iVar2 == 0xd)) {
LAB_827969dc:
      uVar13 = uVar13 + 1;
    }
    if ((uVar13 & 0xffffffff) != 0) {
      iVar3 = fn_82792F70(iVar4,param_1[2],uVar6,uVar13);
      iVar2 = -1;
      apcStack_90[0] = param_2;
      if (param_2 < pcVar8) {
        puVar12 = (undefined2 *)(iVar3 + -2);
        while (bVar1 = iVar2 != 0, iVar2 = 0, bVar1) {
          iVar2 = fn_826BD078(apcStack_90);
          if ((iVar2 == 0xd) || (iVar2 == 10)) {
            iVar2 = (-(uint)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10;
          }
          puVar12 = puVar12 + 1;
          *puVar12 = (short)iVar2;
          if ((iVar2 == (-(uint)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10) ||
             (pcVar8 <= apcStack_90[0])) break;
        }
      }
      fn_82795C78(iVar4,param_1[2],param_5,uVar6,0xffffffffffffffff);
      lVar9 = uVar13 + lVar9;
      uVar7 = uVar13 + uVar6 + uVar7;
      param_2 = apcStack_90[0];
    }
    if ((pcVar8 <= param_2) || (iVar3 = iVar2, iVar2 == 0)) break;
  }
  if (iVar2 == (-(uint)((*(byte *)(param_1 + 8) & 2) != 0) & 3) + 10) {
    iVar4 = fn_82796498(param_1,param_6);
  }
  fn_82795EE0(iVar4,param_1[2],param_5);
  if ((*(ushort *)(param_5 + 0x2a) & 0x100) != 0) {
    iVar4 = fn_8268ACE8(param_5 + 0x10);
    bVar1 = true;
    if (iVar4 != 0) goto LAB_82796b18;
  }
  bVar1 = false;
LAB_82796b18:
  if (bVar1) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  }
  return lVar9;
}

