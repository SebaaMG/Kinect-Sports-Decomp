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
extern int fn_827CEA30();


void fn_827CEA88(int param_1,longlong param_2,uint *param_3,ulonglong param_4,int param_5,
                  uint *param_6,uint param_7)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = *(int *)(param_1 + 0x144);
  while( true ) {
    if ((param_4 & 0xffffffff) <= (ulonglong)*param_3) {
      return;
    }
    if (param_7 <= *param_6) break;
    uVar2 = param_4 - *param_3;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0xdc) - (ulonglong)*(uint *)(iVar7 + 0x34);
    if ((uVar2 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
      uVar6 = uVar2;
    }
    (**(code **)(*(int *)(param_1 + 0x150) + 4))
              (param_1,((ulonglong)*param_3 & 0x3fffffff) * 4 + param_2,iVar7 + 8,
               (ulonglong)*(uint *)(iVar7 + 0x34),uVar6);
    *param_3 = *param_3 + (int)uVar6;
    lVar3 = *(uint *)(iVar7 + 0x30) - uVar6;
    iVar4 = *(int *)(iVar7 + 0x34) + (int)uVar6;
    *(int *)(iVar7 + 0x34) = iVar4;
    *(int *)(iVar7 + 0x30) = (int)lVar3;
    if ((lVar3 == 0) && (iVar4 < *(int *)(param_1 + 0xdc))) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x3c)) {
        puVar5 = (undefined4 *)(iVar7 + 4);
        do {
          puVar5 = puVar5 + 1;
          fn_827CEA30(*puVar5,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar7 + 0x34),
                        *(undefined4 *)(param_1 + 0xdc));
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x3c));
      }
      *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(param_1 + 0xdc);
    }
    if (*(int *)(iVar7 + 0x34) == *(int *)(param_1 + 0xdc)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 4))(param_1,iVar7 + 8,0,param_5,*param_6);
      *(undefined4 *)(iVar7 + 0x34) = 0;
      *param_6 = *param_6 + 1;
    }
    if ((*(int *)(iVar7 + 0x30) == 0) && (*param_6 < param_7)) {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x3c)) {
        piVar8 = (int *)(*(int *)(param_1 + 0x44) + -0x38);
        puVar5 = (undefined4 *)(param_5 + -4);
        do {
          piVar1 = piVar8 + 0x11;
          piVar8 = piVar8 + 0x15;
          puVar5 = puVar5 + 1;
          fn_827CEA30(*puVar5,*piVar8 << 3,(longlong)*piVar1 * (longlong)(int)*param_6,
                        (longlong)*piVar1 * (longlong)(int)param_7);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x3c));
      }
      *param_6 = param_7;
      return;
    }
  }
  return;
}

