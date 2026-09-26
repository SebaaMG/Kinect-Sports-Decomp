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
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82381BC0();
extern int fn_82F63108();


void fn_822AAF60(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *apuStack_60 [4];
  undefined1 auStack_50 [80];
  
  piVar6 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  do {
    if (piVar6 == piVar1) {
      fn_82359C18(param_2);
      return;
    }
    iVar2 = *piVar6;
    iVar5 = fn_822C5B18(auStack_50,param_2);
    puVar3 = *(undefined4 **)(iVar2 + 4);
    apuStack_60[0] = (undefined4 *)*puVar3;
    while (apuStack_60[0] != puVar3) {
      piVar4 = *(int **)(iVar5 + 0x10);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*piVar4 + 4))(piVar4,apuStack_60[0][4]);
      fn_82381BC0(apuStack_60);
    }
    fn_82359C18(iVar5);
    piVar6 = piVar6 + 1;
  } while( true );
}

