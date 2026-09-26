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
extern int fn_82F68CC0();


void fn_82CFC5C0(longlong param_1,longlong param_2,longlong param_3,int param_4,
                  undefined4 *param_5,int *param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = param_5[1];
  lVar4 = (ulonglong)*(uint *)(param_4 + 4) - 1;
  iVar3 = param_6[1];
  lVar6 = 0;
  lVar5 = 0;
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      if (iVar8 == 0) {
        uVar7 = (ulonglong)*(uint *)*param_6;
      }
      else {
        puVar2 = (uint *)(iVar8 * 4 + *param_6);
        uVar7 = ((ulonglong)*puVar2 - (ulonglong)puVar2[-1]) - lVar4;
      }
      fn_82F68CC0(lVar5 + param_1,lVar6 + param_2,uVar7);
      lVar6 = uVar7 + lVar4 + lVar6;
      fn_82F68CC0(uVar7 + lVar5 + param_1,*param_5,(ulonglong)uVar1 - 1);
      iVar3 = param_6[1];
      iVar8 = iVar8 + 1;
      lVar5 = ((ulonglong)uVar1 - 1) + uVar7 + lVar5;
    } while (iVar8 < iVar3);
  }
  fn_82F68CC0(lVar5 + param_1,lVar6 + param_2,
               (param_3 - (ulonglong)*(uint *)(iVar3 * 4 + *param_6 + -4)) - lVar4);
  return;
}

