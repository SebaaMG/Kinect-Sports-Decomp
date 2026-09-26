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
extern int fn_8268EC80();
extern int fn_8268EE18();
extern int fn_8268EF48();
extern int fn_8270AD88();
extern int fn_8270B030();


ulonglong fn_8270B7F0(undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  uint uVar1;
  int iVar4;
  ulonglong uVar2;
  longlong lVar3;
  char cVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((param_5 & 0xffffffff) < (ulonglong)(uint)param_1[0x14]) {
    param_5 = (ulonglong)(uint)param_1[0x14];
  }
  iVar4 = fn_8270B030(param_1 + 0x11,param_2);
  puVar7 = param_1 + 0x13;
  uVar2 = fn_8268EC80(puVar7,iVar4,param_2,param_3,param_4,param_5);
  if (*(char *)(param_1 + 6) == '\0') {
    return ((~uVar2 & 0xffffffff) >> 0x1f) + (ulonglong)(1 < uVar2) & 1;
  }
  iVar8 = (int)uVar2;
  if (iVar8 != 0) {
    lVar9 = ((ulonglong)*(uint *)(iVar4 + 0x10) - (ulonglong)*(ushort *)(iVar4 + 0x1e)) -
            (-(ulonglong)
              ((ulonglong)*(uint *)(iVar4 + 0x10) ==
              (ulonglong)*(uint *)(iVar4 + 0xc) + (ulonglong)(uint)param_1[2]) &
            (ulonglong)(uint)param_1[2]);
    lVar3 = fn_8270AD88(param_1,iVar4);
    uVar1 = param_1[1];
    uVar6 = (ulonglong)uVar1;
    trapWord(6,uVar6,0);
    trapWord(6,uVar6,0);
    uVar2 = (longlong)
            (int)((((((param_2 - lVar9) + param_3 + param_5) - 1 & ~(param_5 - 1)) + uVar6) - 1 &
                  0xffffffff) / uVar6) * (longlong)(int)uVar1;
    uVar10 = (longlong)
             (int)((((((param_2 - lVar9) + param_4 + param_5) - 1 & ~(param_5 - 1)) + uVar6) - 1 &
                   0xffffffff) / uVar6) * (longlong)(int)uVar1;
    if (iVar8 != 1) {
      if (iVar8 == 3) {
        for (; (uVar10 & 0xffffffff) <= (uVar2 & 0xffffffff); uVar10 = uVar6 + uVar10) {
        }
        cVar5 = (**(code **)(*(int *)*param_1 + 0xc))
                          ((int *)*param_1,lVar9,lVar3,uVar10,
                           1 << (*(ushort *)(iVar4 + 0x1c) & 0x3f));
        if (cVar5 != '\0') {
          param_1[0x12] = ((int)uVar10 - (int)lVar3) + param_1[0x12];
          fn_8268EE18(puVar7,iVar4,uVar10 - lVar3);
          fn_8268EC80(puVar7,iVar4,param_2,param_3,param_4,param_5);
          return 1;
        }
      }
      return 0;
    }
    if ((uVar10 & 0xffffffff) < (uVar2 & 0xffffffff)) {
      fn_8268EF48(puVar7,iVar4,uVar10 + lVar9);
      cVar5 = (**(code **)(*(int *)*param_1 + 0xc))
                        ((int *)*param_1,lVar9,lVar3,uVar10,1 << (*(ushort *)(iVar4 + 0x1c) & 0x3f))
      ;
      if (cVar5 == '\0') {
        fn_8268EE18(puVar7,iVar4,lVar3 - uVar10);
      }
      else {
        param_1[0x12] = ((int)uVar10 - (int)lVar3) + param_1[0x12];
      }
    }
  }
  return 1;
}

