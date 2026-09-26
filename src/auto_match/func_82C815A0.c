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
extern int fn_82C800C8();
extern int fn_82C80400();


bool fn_82C815A0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000054;
  
  iVar7 = (int)param_7;
  iVar6 = (int)param_6;
  iVar5 = (int)param_5;
  param_1 = (int *)*param_1;
  iVar2 = (int)param_2;
  uVar1 = *(undefined4 *)(*param_1 + 0x10);
  if ((((-1 < iVar2) && (iVar3 = (int)param_3, -1 < iVar3)) && (iVar4 = (int)param_4, 0 < iVar4)) &&
     (((0 < iVar5 && (-1 < iVar6)) &&
      ((-1 < iVar7 && ((iVar8 = (int)param_8, 0 < iVar8 && (0 < in_stack_00000054)))))))) {
    iVar9 = param_1[9];
    if (iVar9 < 1) {
      iVar9 = -iVar9;
    }
    if (iVar2 + iVar4 <= iVar9) {
      iVar9 = param_1[10];
      if (iVar9 < 1) {
        iVar9 = -iVar9;
      }
      if (iVar3 + iVar5 <= iVar9) {
        iVar9 = param_1[0xb];
        if (iVar9 < 1) {
          iVar9 = -iVar9;
        }
        if (iVar6 + iVar8 <= iVar9) {
          iVar9 = param_1[0xc];
          if (iVar9 < 1) {
            iVar9 = -iVar9;
          }
          if ((((iVar7 + in_stack_00000054 <= iVar9) &&
               (iVar9 = fn_82C800C8(uVar1,param_4,param_5,param_1[0x4a]), iVar9 == 0)) &&
              (iVar9 = fn_82C800C8(uVar1,param_8,in_stack_00000054), iVar9 == 0)) &&
             ((iVar9 = fn_82C800C8(uVar1,param_2,param_3), iVar9 == 0 &&
              (iVar9 = fn_82C800C8(uVar1,param_6,param_7), iVar9 == 0)))) {
            param_1[1] = iVar2;
            param_1[2] = iVar3;
            param_1[5] = iVar6;
            param_1[6] = iVar7;
            param_1[3] = iVar4;
            param_1[4] = iVar5;
            param_1[7] = iVar8;
            param_1[8] = in_stack_00000054;
            iVar2 = fn_82C80400(param_1);
            return iVar2 == 0;
          }
        }
      }
    }
  }
  return true;
}

