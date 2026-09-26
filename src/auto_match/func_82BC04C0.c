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
extern int fn_82BC0088();
extern int fn_82F68CC0();


void fn_82BC04C0(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar2;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar3 = (*(code *)param_1[4])(param_2);
  iVar1 = *(int *)((*param_1 - 1U & uVar3) * 4 + param_1[2]);
  if ((iVar1 != 0) && (uVar8 = 0, *(int *)(iVar1 + 4) != 0)) {
    iVar7 = 0;
    do {
      if ((uVar8 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar7);
      }
      else {
        puVar4 = (undefined4 *)fn_82BC0088(iVar1,uVar8);
      }
      iVar5 = (*(code *)param_1[3])(*puVar4,param_2);
      uVar6 = (ulonglong)*(uint *)(iVar1 + 4);
      if (iVar5 == 0) {
        if (uVar6 <= (uVar8 & 0xffffffff)) {
          return;
        }
        *(int *)(iVar1 + 4) = (int)(uVar6 - 1);
        lVar2 = (uVar8 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(iVar1 + 8);
        fn_82F68CC0(lVar2,lVar2 + 4,((uVar6 - 1) - uVar8 & 0x3fffffff) << 2);
        return;
      }
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
    } while ((uVar8 & 0xffffffff) < uVar6);
  }
  return;
}

