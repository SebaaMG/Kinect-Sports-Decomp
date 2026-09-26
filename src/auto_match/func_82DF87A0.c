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
extern int fn_82CE4118();
extern int fn_82D7C120();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DF7D90();
extern int fn_82DF8F60();


void fn_82DF87A0(char *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  
  *(int *)(param_3 + 0x94) = *(int *)(param_3 + 0x94) + 1;
  piVar9 = (int *)(param_2 + 0x44);
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x48) - 1;
  if (-1 < (longlong)uVar7) {
    lVar8 = (uVar7 & 0x3fffffff) << 2;
    do {
      iVar1 = (int)lVar8;
      iVar6 = *(int *)(*piVar9 + iVar1);
      if (*(char *)(iVar6 + 0x18) == '\0') {
        uVar2 = (ulonglong)*(uint *)(iVar6 + 8);
        uVar3 = (ulonglong)*(uint *)(iVar6 + 0xc);
      }
      else {
        uVar2 = (**(code **)(param_1 + 4))(*(undefined4 *)(iVar6 + 0x10));
        uVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(iVar6 + 0x14));
      }
      if (((uVar2 & 0xffffffff) != 0) && ((uVar3 & 0xffffffff) != 0)) {
        iVar5 = (**(code **)(*param_4 + 4))(param_4,uVar2);
        if (((iVar5 != 0) || (iVar5 = (**(code **)(*param_4 + 4))(param_4,uVar3), iVar5 != 0)) &&
           (uVar4 = fn_82D7C120(uVar2 + 0x10,uVar3 + 0x10), (uVar4 & 0xffffffff) != 0)) {
          if (*(int *)(iVar6 + 0x10c) != 0x103) {
            fn_82DF8F60(*(undefined4 *)(param_3 + 0x78),iVar6);
          }
          iVar6 = fn_82DF7D90(param_1,iVar6,uVar2,uVar3,*(undefined4 *)(param_3 + 0x78),uVar4);
          if ((*param_1 != '\0') && (iVar6 != 0)) {
            fn_82CE4118(*(undefined4 *)(*piVar9 + iVar1));
            iVar6 = *(int *)(param_2 + 0x48) + -1;
            *(int *)(param_2 + 0x48) = iVar6;
            if (iVar6 != (int)uVar7) {
              *(undefined4 *)(iVar1 + *piVar9) = *(undefined4 *)(iVar6 * 4 + *piVar9);
            }
          }
        }
      }
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (longlong)uVar7);
  }
  lVar8 = (ulonglong)*(uint *)(param_3 + 0x94) - 1;
  *(int *)(param_3 + 0x94) = (int)lVar8;
  if ((lVar8 == 0) && (*(char *)(param_3 + 0x9c) == '\0')) {
    if (*(int *)(param_3 + 0x8c) != 0) {
      fn_82D80C18(param_3);
    }
    if ((*(int *)(param_3 + 0xa4) == 1) && (*(int *)(param_3 + 0x90) != 0)) {
      fn_82D80C30(param_3);
    }
  }
  return;
}

