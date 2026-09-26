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
extern int fn_822733C8();
extern int fn_82468820();
extern int fn_8265CA20();


undefined4 * fn_82468348(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_30 [48];
  
  piVar5 = *(int **)(param_2 + 4);
  if ((param_3 == (int *)*piVar5) && (param_4 == piVar5)) {
    puVar2 = (undefined4 *)piVar5[1];
    while (*(char *)((int)puVar2 + 0x11) == '\0') {
      fn_822733C8(param_2,puVar2[2]);
      puVar1 = (undefined4 *)*puVar2;
      fn_8265CA20(puVar2);
      puVar2 = puVar1;
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)*(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    while (param_3 != param_4) {
      piVar5 = param_3;
      if (*(char *)((int)param_3 + 0x11) == '\0') {
        piVar5 = (int *)param_3[2];
        if (*(char *)((int)piVar5 + 0x11) == '\0') {
          piVar3 = (int *)*piVar5;
          while (piVar4 = piVar3, *(char *)((int)piVar4 + 0x11) == '\0') {
            piVar5 = piVar4;
            piVar3 = (int *)*piVar4;
          }
        }
        else {
          piVar3 = (int *)param_3[1];
          piVar4 = param_3;
          while ((piVar5 = piVar3, *(char *)((int)piVar5 + 0x11) == '\0' &&
                 (piVar4 == (int *)piVar5[2]))) {
            piVar4 = piVar5;
            piVar3 = (int *)piVar5[1];
          }
        }
      }
      fn_82468820(auStack_30,param_2,param_3);
      param_3 = piVar5;
    }
    *param_1 = param_3;
  }
  return param_1;
}

