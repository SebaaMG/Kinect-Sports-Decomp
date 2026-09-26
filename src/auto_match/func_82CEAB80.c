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
extern int fn_82CEA650();


void fn_82CEAB80(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar4 = 8;
  if (8 < param_3 << 1) {
    do {
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    } while ((int)uVar4 < param_3 << 1);
  }
  if ((int)uVar4 < 9) {
    uVar4 = 8;
  }
  uVar1 = param_1[1];
  plVar2 = (longlong *)*param_1;
  uVar6 = (ulonglong)(uint)param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_2,(uVar4 & 0xfffffff) << 4);
  *param_1 = iVar3;
  iVar3 = (int)uVar4;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      *(undefined8 *)(iVar5 + *param_1) = 0xffffffffffffffff;
      iVar5 = iVar5 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_1[2] = iVar3 + -1;
  param_1[1] = 0;
  uVar4 = uVar6;
  plVar7 = plVar2;
  if (0 < (int)uVar6) {
    do {
      if (*plVar7 != -1) {
        fn_82CEA650(param_1,param_2,*plVar7,plVar7[1]);
      }
      uVar4 = uVar4 - 1;
      plVar7 = plVar7 + 2;
    } while (uVar4 != 0);
  }
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(param_2,plVar2,(uVar6 & 0xfffffff) << 4);
  }
  return;
}

