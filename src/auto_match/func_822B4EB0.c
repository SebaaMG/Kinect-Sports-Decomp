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
extern int fn_822B4FF0();
extern int fn_823B9360();
extern int fn_8265CA20();


undefined4 * fn_822B4EB0(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_30 [48];
  
  piVar4 = *(int **)(param_2 + 4);
  if ((param_3 == (int *)*piVar4) && (param_4 == piVar4)) {
    cVar1 = *(char *)(piVar4[1] + 0x19);
    piVar4 = (int *)piVar4[1];
    while (cVar1 == '\0') {
      fn_823B9360(param_2,piVar4[2]);
      piVar2 = (int *)*piVar4;
      if (piVar4[5] != 0) {
        fn_822315A0();
      }
      fn_8265CA20(piVar4);
      piVar4 = piVar2;
      cVar1 = *(char *)((int)piVar2 + 0x19);
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(undefined4 *)*(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_1 = **(undefined4 **)(param_2 + 4);
  }
  else {
    while (param_3 != param_4) {
      piVar4 = param_3;
      if (*(char *)((int)param_3 + 0x19) == '\0') {
        piVar4 = (int *)param_3[2];
        if (*(char *)((int)piVar4 + 0x19) == '\0') {
          piVar2 = (int *)*piVar4;
          while (piVar3 = piVar2, *(char *)((int)piVar3 + 0x19) == '\0') {
            piVar4 = piVar3;
            piVar2 = (int *)*piVar3;
          }
        }
        else {
          piVar2 = (int *)param_3[1];
          piVar3 = param_3;
          while ((piVar4 = piVar2, *(char *)((int)piVar4 + 0x19) == '\0' &&
                 (piVar3 == (int *)piVar4[2]))) {
            piVar3 = piVar4;
            piVar2 = (int *)piVar4[1];
          }
        }
      }
      fn_822B4FF0(auStack_30,param_2,param_3);
      param_3 = piVar4;
    }
    *param_1 = param_3;
  }
  return param_1;
}

