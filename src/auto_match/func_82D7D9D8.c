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
extern int fn_82CE5410();
extern int fn_82CE6460();
extern int fn_82D7D360();
extern int fn_82DB9F80();


void fn_82D7D9D8(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar1 = *param_1;
  do {
    if ((uVar1 == 0x200) || (param_2[2] == 0)) {
      uVar1 = param_2[2];
      if (uVar1 != 0) {
        uVar3 = param_2[1];
        uVar4 = param_1[2];
        iVar9 = fn_82CE5410();
        fn_82DB9F80(param_1 + 1,*(undefined4 *)(iVar9 + 0x10),uVar4,0,uVar3,uVar1);
        *param_1 = *param_2;
        param_2[2] = 0;
        *param_2 = 0x200;
      }
      return;
    }
    fn_82D7D360(param_1,(ulonglong)*(uint *)(param_2[2] * 4 + param_2[1] + -4) +
                          (ulonglong)*param_2 + -0x80);
    uVar1 = *param_2;
    *param_2 = (uint)((ulonglong)uVar1 - 0x80);
    if ((ulonglong)uVar1 - 0x80 == 0) {
      uVar2 = *(undefined4 *)(param_2[2] * 4 + param_2[1] + -4);
      param_2[2] = param_2[2] - 1;
      iVar9 = fn_82CE5410();
      (**(code **)(**(int **)(iVar9 + 0x10) + 8))(*(int **)(iVar9 + 0x10),uVar2,0x200);
      *param_2 = 0x200;
    }
    if ((param_2[3] & 0x80000000) == 0) {
      uVar11 = (ulonglong)param_2[2] + 3;
      uVar5 = (uVar11 & 0xffffffff) >> 0x10;
      uVar6 = (uVar5 | uVar11 & 0xffffffff) >> 8;
      uVar7 = (uVar6 | uVar5 | uVar11 & 0xffffffff) >> 4;
      uVar8 = (uVar7 | uVar6 | uVar5 | uVar11 & 0xffffffff) >> 2;
      lVar12 = ((uVar8 | uVar7 | uVar6 | uVar5 | uVar11 & 0xffffffff) >> 1 |
               uVar8 | uVar7 | uVar6 | uVar5 | uVar11) + 1;
      if ((int)lVar12 < 1) {
        iVar9 = fn_82CE5410();
        lVar12 = 1;
        puVar10 = param_2 + 4;
      }
      else {
        if ((int)(param_2[3] & 0x3fffffff) <= (int)lVar12) goto LAB_82d7db0c;
        iVar9 = fn_82CE5410();
        puVar10 = (uint *)0x0;
      }
      fn_82CE6460(*(undefined4 *)(iVar9 + 0x10),param_2 + 1,4,puVar10,lVar12);
    }
LAB_82d7db0c:
    uVar1 = *param_1;
  } while( true );
}

