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
extern int fn_827C1AF8();
extern int fn_827CEA30();


void fn_827CEC48(int param_1,longlong param_2,uint *param_3,ulonglong param_4,undefined8 param_5,
                  uint *param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  uVar1 = *param_6;
  iVar2 = *(int *)(param_1 + 0x144);
  iVar6 = *(int *)(param_1 + 0xdc) * 3;
  do {
    if (param_7 <= uVar1) {
      return;
    }
    uVar1 = *param_3;
    if ((ulonglong)uVar1 < (param_4 & 0xffffffff)) {
      uVar3 = param_4 - uVar1;
      uVar10 = (ulonglong)*(uint *)(iVar2 + 0x3c) - (ulonglong)*(uint *)(iVar2 + 0x34);
      if ((uVar3 & 0xffffffff) <= (uVar10 & 0xffffffff)) {
        uVar10 = uVar3;
      }
      puVar9 = (undefined4 *)(iVar2 + 8);
      (**(code **)(*(int *)(param_1 + 0x150) + 4))
                (param_1,((ulonglong)uVar1 & 0x3fffffff) * 4 + param_2,puVar9,
                 (ulonglong)*(uint *)(iVar2 + 0x34),uVar10);
      if ((*(int *)(iVar2 + 0x30) == *(int *)(param_1 + 0x20)) &&
         (iVar5 = 0, 0 < *(int *)(param_1 + 0x3c))) {
        iVar4 = *(int *)(param_1 + 0xdc);
        do {
          iVar8 = 1;
          if (0 < iVar4) {
            lVar7 = -1;
            do {
              fn_827C1AF8(*puVar9,0,*puVar9,lVar7,1,*(undefined4 *)(param_1 + 0x1c));
              iVar4 = *(int *)(param_1 + 0xdc);
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + -1;
            } while (iVar8 <= iVar4);
          }
          iVar5 = iVar5 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x3c));
      }
      iVar4 = (int)uVar10;
      *param_3 = *param_3 + iVar4;
      iVar5 = *(int *)(iVar2 + 0x34) + iVar4;
      *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) - iVar4;
LAB_827cedd0:
      *(int *)(iVar2 + 0x34) = iVar5;
    }
    else {
      if (*(int *)(iVar2 + 0x30) != 0) {
        return;
      }
      if (*(int *)(iVar2 + 0x34) < *(int *)(iVar2 + 0x3c)) {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          puVar9 = (undefined4 *)(iVar2 + 4);
          do {
            puVar9 = puVar9 + 1;
            fn_827CEA30(*puVar9,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar2 + 0x34),
                          *(undefined4 *)(iVar2 + 0x3c));
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x3c));
        }
        iVar5 = *(int *)(iVar2 + 0x3c);
        goto LAB_827cedd0;
      }
    }
    if (*(int *)(iVar2 + 0x34) == *(int *)(iVar2 + 0x3c)) {
      (**(code **)(*(int *)(param_1 + 0x154) + 4))
                (param_1,iVar2 + 8,*(undefined4 *)(iVar2 + 0x38),param_5,*param_6);
      *param_6 = *param_6 + 1;
      iVar5 = *(int *)(param_1 + 0xdc) + *(int *)(iVar2 + 0x38);
      *(int *)(iVar2 + 0x38) = iVar5;
      if (iVar6 <= iVar5) {
        *(undefined4 *)(iVar2 + 0x38) = 0;
      }
      if (iVar6 <= *(int *)(iVar2 + 0x34)) {
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      *(int *)(iVar2 + 0x3c) = *(int *)(param_1 + 0xdc) + *(int *)(iVar2 + 0x34);
    }
    uVar1 = *param_6;
  } while( true );
}

