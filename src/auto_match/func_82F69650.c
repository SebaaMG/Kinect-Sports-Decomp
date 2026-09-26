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
extern int fn_82F80110();
extern int fn_82F812C0();


longlong fn_82F69650(undefined8 param_1,int param_2,int param_3,uint *param_4,int *param_5,
                      undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0xc);
  iVar7 = 0;
  iVar2 = fn_82F80110(param_2,*param_6);
  if (iVar8 == 0) {
    fn_82F812C0();
  }
  *param_5 = -1;
  *param_4 = 0xffffffff;
  iVar3 = iVar8;
  if (iVar8 != 0) {
    iVar5 = iVar8 * 0x14;
    do {
      iVar1 = iVar5 + *(int *)(param_2 + 0x10);
      if ((*(int *)(iVar1 + -0x10) < iVar2) && (iVar2 <= *(int *)(iVar1 + -0xc))) break;
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + -0x14;
    } while (iVar3 != 0);
  }
  if (iVar3 != 0) {
    iVar7 = iVar3 * 0x14 + *(int *)(param_2 + 0x10) + -0x14;
  }
  uVar4 = 0;
  if (iVar8 != 0) {
    iVar2 = 0;
    do {
      piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar2);
      if ((((iVar7 == 0) || ((*(int *)(iVar7 + 4) < *piVar6 && (piVar6[1] <= *(int *)(iVar7 + 8)))))
          && (*piVar6 <= param_3)) && (param_3 <= piVar6[1])) {
        if (*param_4 == 0xffffffff) {
          *param_4 = uVar4;
        }
        *param_5 = uVar4 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x14;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (*param_4 != 0xffffffff) {
      return (ulonglong)*param_4 * 0x14 + (ulonglong)*(uint *)(param_2 + 0x10);
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return 0;
}

