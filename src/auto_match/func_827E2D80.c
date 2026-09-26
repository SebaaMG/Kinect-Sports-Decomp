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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_827D6E18();
extern int fn_827D9908();
extern unsigned int iStack_2c;


void fn_827E2D80(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  uVar2 = fn_827D6E18(auStack_30,param_2,*(undefined4 *)(param_1 + 0x30));
  piVar4 = (int *)(param_1 + 0x40);
  fn_823F2E20(piVar4,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x4c))
                      (piVar1,param_1 + 0x18,*(undefined4 *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x3c),param_1 + 0x48);
    *(int *)(param_1 + 0x4c) = iVar3;
    if (iVar3 != 0) {
      fn_827D9908(*piVar4);
      (**(code **)(**(int **)(param_1 + 0x4c) + 4))
                (*(int **)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 8));
    }
  }
  return;
}

