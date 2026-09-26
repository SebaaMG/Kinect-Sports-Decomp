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
extern int fn_8267C4C8();
extern int fn_8267C4F0();


int * fn_82791FD0(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[6];
  if ((piVar2 == (int *)0x0) || (bVar5 = false, (uint)piVar2[1] <= (uint)param_1[7])) {
    bVar5 = true;
  }
  if (bVar5) {
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[1] = param_1[7];
  }
  else {
    uVar3 = param_1[7];
    uVar1 = *(undefined2 *)(uVar3 * 2 + *piVar2);
    param_1[1] = uVar3;
    *(undefined2 *)(param_1 + 2) = uVar1;
    uVar4 = param_1[5];
    if (((int)uVar4 < 0) || (bVar5 = false, *(uint *)(param_1[4] + 4) <= uVar4)) {
      bVar5 = true;
    }
    if ((!bVar5) &&
       (iVar6 = uVar4 * 0xc + *(int *)param_1[4],
       *(uint *)(uVar4 * 0xc + *(int *)param_1[4]) <= uVar3)) {
      if (*(int *)(iVar6 + 8) != 0) {
        fn_8267C4C8();
      }
      if (*param_1 != 0) {
        fn_8267C4F0();
      }
      *param_1 = *(int *)(iVar6 + 8);
      return param_1;
    }
  }
  if (*param_1 != 0) {
    fn_8267C4F0();
  }
  *param_1 = 0;
  return param_1;
}

