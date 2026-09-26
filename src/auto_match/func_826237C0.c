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
extern int fn_82522D98();
extern int fn_82522DF8();
extern int fn_82A1EFC0();


ulonglong fn_826237C0(int param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(*(undefined4 *)(param_1 + 0x24));
  }
  piVar2 = *(int **)(param_1 + 0x20);
  do {
    iVar5 = (int)param_2;
    if (piVar2 == (int *)0x0) {
      uVar3 = (param_3 & 0x7fffffff) * 2 + param_2;
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x24);
      if ((int)*(uint *)(param_1 + 0x24) < (int)uVar3) {
        uVar6 = uVar3;
      }
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98();
      }
      piVar2 = (int *)fn_82522DF8(uVar6 + 0x20);
      *piVar2 = 0;
      piVar2[1] = 0;
      iVar4 = *(int *)(param_1 + 0x20);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      *(int **)(iVar4 + 4) = piVar2;
      *piVar2 = iVar4;
      piVar2[1] = (int)puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = piVar2;
      }
      piVar2[2] = (int)uVar6;
      piVar2[4] = (int)(piVar2 + 8);
      piVar2[3] = (int)(piVar2 + 8);
      *(int **)(param_1 + 0x20) = piVar2;
      uVar6 = (ulonglong)(uint)piVar2[4];
      if (1 < (int)param_3) {
        param_3 = param_3 - 1;
        uVar6 = (param_3 - (param_3 + uVar6 & param_3)) + uVar6;
      }
      piVar2[4] = (int)uVar6 + iVar5;
LAB_82623904:
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(uVar6,0,(uint)piVar2[4] - uVar6);
      }
      return uVar6;
    }
    uVar6 = (ulonglong)(uint)piVar2[4];
    if ((int)param_3 < 2) {
      iVar4 = piVar2[4] - piVar2[3];
    }
    else {
      uVar3 = param_3 - 1;
      uVar6 = (uVar3 - (uVar3 + uVar6 & uVar3)) + uVar6;
      iVar4 = (int)uVar6 - piVar2[3];
    }
    if (iVar5 <= piVar2[2] - iVar4) {
      piVar2[4] = (int)uVar6 + iVar5;
      goto LAB_82623904;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

