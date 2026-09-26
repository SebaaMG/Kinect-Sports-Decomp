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
extern int fn_82692370();
extern int fn_82692538();
extern int fn_826932A8();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831F129C;


ulonglong fn_82692988(undefined4 *param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if ((*(uint *)(param_2 + 0x10) & 0x80000000) != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    uVar3 = fn_82692370(param_1,param_4,1 << (*(ushort *)(param_2 + 0xe) & 0x3f));
    if (uVar3 == 0) {
      return 0;
    }
    uVar5 = (ulonglong)uVar1;
    if ((param_4 & 0xffffffff) <= (ulonglong)uVar1) {
      uVar5 = param_4;
    }
    fn_82F68CC0(uVar3,param_3,uVar5);
    fn_82692538(param_1,param_2,param_3);
    return uVar3;
  }
  uVar5 = (ulonglong)(uint)param_1[0x7e];
  uVar7 = (ulonglong)(uint)(1 << (*(ushort *)(param_2 + 0xe) & 0x3f));
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar3 = (ulonglong)uVar1;
  trapWord(6,uVar5,0);
  uVar5 = (longlong)
          (int)(((((uVar7 + param_4) - 1 & ~(uVar7 - 1)) + uVar5) - 1 & 0xffffffff) / uVar5) *
          (longlong)(int)param_1[0x7e];
  if ((uVar5 & 0xffffffff) == uVar3) {
    return (ulonglong)*(uint *)(param_2 + 0x1c);
  }
  uVar6 = (ulonglong)lbl_831E7E60;
  RtlEnterCriticalSection(uVar6 + 0x2c4);
  uVar8 = (ulonglong)*(uint *)(param_2 + 0x18);
  if (((uVar5 & 0xffffffff) < uVar8) && ((uVar5 & 0x7fffffff) << 1 < (ulonglong)(uint)param_1[0x81])
     ) {
    uVar7 = fn_82692370(param_1,uVar5,1 << (*(ushort *)(param_2 + 0xe) & 0x3f));
    if (uVar7 != 0) {
      if ((uVar5 & 0xffffffff) <= uVar8) {
        uVar8 = uVar5;
      }
      fn_82F68CC0(uVar7,param_3,uVar8);
      fn_82692538(param_1,param_2,param_3);
    }
  }
  else {
    if (((uVar3 < (uVar5 & 0xffffffff)) &&
        (((uVar8 = (ulonglong)(uint)param_1[0x88], uVar8 != 0 &&
          (uVar8 < (((uint)param_1[0x83] - uVar3) + uVar5 & 0xffffffff))) &&
         (piVar2 = (int *)param_1[0x89], piVar2 != (int *)0x0)))) &&
       ((cVar4 = (**(code **)(*piVar2 + 4))
                           (piVar2,*param_1,(((uint)param_1[0x83] - uVar8) - uVar3) + uVar5),
        cVar4 == '\0' ||
        ((ulonglong)(uint)param_1[0x88] < (((uint)param_1[0x83] - uVar3) + uVar5 & 0xffffffff))))) {
      uVar7 = fn_82692370(param_1,uVar5,1 << (*(ushort *)(param_2 + 0xe) & 0x3f));
    }
    else {
      iVar9 = (int)uVar5;
      if ((*(char *)((int)param_1 + 0x1f7) != '\0') &&
         (cVar4 = (**(code **)(*(int *)param_1[1] + 0xc))
                            ((int *)param_1[1],*(undefined4 *)(param_2 + 0x1c),uVar3,uVar5,uVar7),
         cVar4 != '\0')) {
        if (uVar3 < (uVar5 & 0xffffffff)) {
          cVar4 = fn_826932A8(lbl_831F129C,*(undefined4 *)(param_2 + 0x1c),uVar5,uVar3);
          if (cVar4 == '\0') {
            (**(code **)(*(int *)param_1[1] + 0xc))
                      ((int *)param_1[1],*(undefined4 *)(param_2 + 0x1c),uVar5,uVar3,uVar7);
            uVar7 = 0;
            goto LAB_82692acc;
          }
        }
        else {
          fn_826932A8(lbl_831F129C,*(undefined4 *)(param_2 + 0x1c),uVar5,uVar3);
        }
        param_1[0x85] = (param_1[0x85] - uVar1) + iVar9;
        param_1[0x83] = (param_1[0x83] - uVar1) + iVar9;
        uVar7 = (ulonglong)*(uint *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x18) = iVar9;
        goto LAB_82692acc;
      }
      uVar7 = fn_82692370(param_1,uVar5,1 << (*(ushort *)(param_2 + 0xe) & 0x3f));
    }
    if (uVar7 != 0) {
      if ((uVar5 & 0xffffffff) <= uVar3) {
        uVar3 = uVar5;
      }
      fn_82F68CC0(uVar7,param_3,uVar3);
      fn_82692538(param_1,param_2,param_3);
    }
  }
LAB_82692acc:
  RtlLeaveCriticalSection(uVar6 + 0x2c4);
  return uVar7;
}

