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
extern int fn_82AD1750();
extern int fn_82B18360();
extern int fn_82B8F1B0();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_82B18438(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  
  fn_82B18360(param_1,param_3,param_2);
  if ((*(int *)(param_3 + 8) == 0) || (bVar3 = true, *(int *)(*(int *)(param_3 + 8) + 0xc) == 0)) {
    bVar3 = false;
  }
  if (((!bVar3) && ((**(uint **)(param_2 + 0x28) >> 0x13 & 1) != 0)) &&
     (uVar2 = (ulonglong)*(uint *)(param_2 + 0x30) & 0x7ffff, iVar4 = param_3, iVar5 = param_3,
     (*(uint *)(((**(uint **)(param_3 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                ((int)(uVar2 >> 5) + 1) * 4 + (int)*(uint **)(param_3 + 0x28)) &
     1 << ((uint)uVar2 & 0x1f)) != 0)) {
    while (iStack_3c = iVar5, iStack_40 = iVar4, iVar6 = fn_82AD1750(&iStack_40), iVar6 != 0) {
      for (piVar1 = *(int **)(iVar6 + 0xc); iVar4 = iStack_40, iVar5 = iStack_3c,
          piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        uVar2 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff;
        if ((*(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(*piVar1 + 0x28)) &
            1 << ((uint)uVar2 & 0x1f)) == 0) {
          fn_82B18360(param_1,*piVar1,iVar6);
        }
      }
    }
  }
  fn_82B8F1B0(param_2,param_3,param_1);
  return;
}

