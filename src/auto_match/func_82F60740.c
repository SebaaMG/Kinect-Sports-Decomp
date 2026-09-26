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
extern unsigned int *auStack_50;
extern int fn_82A1E968();
extern int fn_82A1F160();
extern int fn_82F60CA8();
extern int fn_82F60D60();
extern int fn_82F61808();
extern int fn_82F61908();
extern unsigned int lbl_82240408;


undefined8 fn_82F60740(int param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong auStack_50 [10];
  
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 0xffffffff82240404;
  }
  else {
    fn_82A1F160(auStack_50);
    fn_82A1E968(&lStack_60);
    iVar6 = param_1 + 0x24;
    do {
      uVar4 = fn_82F60CA8(iVar6);
      fn_82A1E968(&lStack_58);
      if ((undefined *)uVar4 != &lbl_82240408) goto LAB_82f607e4;
      trapDoubleWordImmediate(6,auStack_50[0],0);
      uVar5 = (lStack_58 - lStack_60) * 1000;
      trapDoubleWordImmediate
                (5,auStack_50[0] & ~(((lStack_58 - lStack_60) * 2000 | uVar5 >> 0x3f) - 1),0xffff);
    } while (((longlong)uVar5 / (longlong)auStack_50[0] & 0xffffffffU) < (param_2 & 0xffffffff));
    uVar4 = 0x2240401;
LAB_82f607e4:
    if ((int)uVar4 == 0) {
      uVar5 = 0;
      bVar1 = *(int *)(param_1 + 0xc) != 0;
      if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
        if (bVar1) {
          iVar8 = 0;
          do {
            if (*(int *)(iVar8 + *(int *)(param_1 + 0x1c)) != 0) {
              piVar3 = *(int **)(iVar8 + *(int *)(param_1 + 0x1c));
              (**(code **)(*piVar3 + 0xc))(piVar3,iVar6);
            }
            uVar5 = uVar5 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
        }
      }
      else {
        uVar7 = 0;
        if (bVar1) {
          iVar8 = 0;
          lVar9 = 0;
          do {
            iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0x1c));
            if (iVar2 != 0) {
              fn_82F61808(param_1 + 0x90,0xffffffff82f60668,iVar2,iVar6,
                              (ulonglong)*(uint *)(param_1 + 0x20) + lVar9);
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(uint *)(param_1 + 0xc));
        }
        fn_82F61908(param_1 + 0x90,uVar5,*(undefined4 *)(param_1 + 0x20),0,0xffffffffffffffff);
      }
      fn_82F60D60(iVar6);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar4;
}

