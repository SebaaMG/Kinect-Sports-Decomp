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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_82F63108();


void fn_822AEA70(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *apuStack_80 [4];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  piVar6 = (int *)*param_1;
  do {
    if ((int *)param_1[1] <= piVar6) {
      fn_82359C18(param_2);
      return;
    }
    uVar4 = fn_822C5B18(auStack_70,param_2);
    iVar3 = *(int *)(((int *)*piVar6)[4] * 4 + *(int *)*piVar6);
    iVar5 = fn_822C5B18(auStack_50,uVar4);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    apuStack_80[0] = (undefined4 *)*puVar1;
    while (apuStack_80[0] != puVar1) {
      piVar2 = *(int **)(iVar5 + 0x10);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*piVar2 + 4))(piVar2,apuStack_80[0][4]);
      fn_82381BC0(apuStack_80);
    }
    fn_82359C18(iVar5);
    fn_82359C18(uVar4);
    piVar6 = piVar6 + 1;
  } while( true );
}

