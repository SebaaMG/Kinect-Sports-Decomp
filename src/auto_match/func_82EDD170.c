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
extern int fn_82EDBD48();
extern int fn_82EDC118();


ulonglong fn_82EDD170(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int in_stack_00000054;
  
  iVar1 = *param_1;
  iVar4 = (int)param_2;
  if ((((-1 < iVar4) && (iVar5 = (int)param_3, -1 < iVar5)) && (iVar6 = (int)param_4, 0 < iVar6)) &&
     (((0 < (int)param_5 && (iVar8 = (int)param_6, -1 < iVar8)) &&
      ((iVar9 = (int)param_7, -1 < iVar9 &&
       ((iVar10 = (int)param_8, 0 < iVar10 && (0 < in_stack_00000054)))))))) {
    iVar11 = *(int *)(iVar1 + 0x28);
    if (iVar11 < 1) {
      iVar11 = -iVar11;
    }
    if (iVar4 + iVar6 <= iVar11) {
      iVar11 = *(int *)(iVar1 + 0x2c);
      if (iVar11 < 1) {
        iVar11 = -iVar11;
      }
      if (iVar5 + (int)param_5 <= iVar11) {
        iVar11 = *(int *)(iVar1 + 0x30);
        if (iVar11 < 1) {
          iVar11 = -iVar11;
        }
        if (iVar8 + iVar10 <= iVar11) {
          iVar11 = *(int *)(iVar1 + 0x34);
          if (iVar11 < 1) {
            iVar11 = -iVar11;
          }
          if (iVar9 + in_stack_00000054 <= iVar11) {
            uVar2 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
            iVar11 = fn_82EDBD48(uVar2,param_4,param_5,*(undefined4 *)(iVar1 + 0x158));
            uVar7 = (undefined4)param_5;
            if ((((iVar11 == 0) &&
                 (iVar11 = fn_82EDBD48(uVar2,param_8,in_stack_00000054), iVar11 == 0)) &&
                (iVar11 = fn_82EDBD48(uVar2,param_2,param_3), iVar11 == 0)) &&
               (iVar11 = fn_82EDBD48(uVar2,param_6,param_7), iVar11 == 0)) {
              *(int *)(iVar1 + 8) = iVar4;
              *(int *)(iVar1 + 0xc) = iVar5;
              *(int *)(iVar1 + 0x18) = iVar8;
              *(int *)(iVar1 + 0x1c) = iVar9;
              *(int *)(iVar1 + 0x10) = iVar6;
              *(undefined4 *)(iVar1 + 0x14) = uVar7;
              *(int *)(iVar1 + 0x20) = iVar10;
              *(int *)(iVar1 + 0x24) = in_stack_00000054;
              lVar3 = fn_82EDC118(iVar1);
              return -(ulonglong)(lVar3 == 0) & 0xffffffff80004005;
            }
          }
        }
      }
    }
  }
  return 1;
}

