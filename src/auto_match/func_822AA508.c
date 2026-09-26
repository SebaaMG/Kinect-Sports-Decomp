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
extern int fn_82381BC0();
extern int fn_8243DD58();
extern int fn_8251FA58();
extern int fn_8265CA20();


void fn_822AA508(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *apuStack_40 [16];
  
  for (piVar5 = (int *)*param_1; piVar5 < (int *)param_1[1]; piVar5 = piVar5 + 1) {
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x48);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 8) != 0) {
          fn_8251FA58();
          *(undefined4 *)(iVar2 + 8) = 0;
        }
        if (*(int *)(iVar2 + 4) != 0) {
          fn_8251FA58();
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        fn_8265CA20(iVar2);
      }
      puVar3 = *(undefined4 **)(iVar1 + 4);
      apuStack_40[0] = (undefined4 *)*puVar3;
      while (apuStack_40[0] != puVar3) {
        puVar4 = (undefined4 *)apuStack_40[0][4];
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        fn_82381BC0(apuStack_40);
      }
      puVar3 = *(undefined4 **)(*(int *)(iVar1 + 4) + 4);
      while (*(char *)((int)puVar3 + 0x15) == '\0') {
        fn_8243DD58(iVar1,puVar3[2]);
        puVar4 = (undefined4 *)*puVar3;
        fn_8265CA20(puVar3);
        puVar3 = puVar4;
      }
      *(int *)(*(int *)(iVar1 + 4) + 4) = *(int *)(iVar1 + 4);
      *(undefined4 *)*(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 4);
      *(int *)(*(int *)(iVar1 + 4) + 8) = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 8) = 0;
      fn_8265CA20(*(undefined4 *)(iVar1 + 4));
      fn_8265CA20(iVar1);
    }
  }
  if (*param_1 != 0) {
    fn_8265CA20();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

