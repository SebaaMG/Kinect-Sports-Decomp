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
extern int fn_82CE63B0();
extern int fn_82CFC050();


void fn_82CFF040(uint *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar3;
  undefined4 uVar4;
  longlong lVar2;
  int iVar5;
  ulonglong uVar6;
  
  if (0 < (int)param_3) {
    iVar5 = (param_1[3] - 1) * 4;
    do {
      uVar1 = *param_1;
      uVar6 = (ulonglong)uVar1 - (ulonglong)param_1[1];
      if (uVar6 == 0) {
        iVar3 = fn_82CE5410();
        uVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))
                          (*(int **)(iVar3 + 0x10),(ulonglong)uVar1);
        iVar3 = fn_82CE5410();
        if (param_1[3] == (param_1[4] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_1 + 2,4);
        }
        iVar5 = iVar5 + 4;
        *(undefined4 *)(param_1[3] * 4 + param_1[2]) = uVar4;
        param_1[3] = param_1[3] + 1;
        uVar6 = (ulonglong)*param_1;
        param_1[1] = 0;
      }
      lVar2 = (ulonglong)*(uint *)(param_1[2] + iVar5) + (ulonglong)param_1[1];
      if ((int)param_3 <= (int)uVar6) {
        fn_82CFC050(lVar2,param_2,param_3);
        param_1[1] = param_1[1] + (int)param_3;
        return;
      }
      fn_82CFC050(lVar2,param_2,uVar6);
      param_3 = param_3 - uVar6;
      param_2 = uVar6 + param_2;
      param_1[1] = *param_1;
    } while (0 < param_3);
  }
  return;
}

