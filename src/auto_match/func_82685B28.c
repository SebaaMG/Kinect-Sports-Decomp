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
extern int fn_826857F8();
extern int fn_826EB300();


int fn_82685B28(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x1c); piVar2 != (int *)(iVar1 + 0x10);
        piVar2 = (int *)piVar2[3]) {
      cVar3 = fn_826EB300(piVar2[4],param_4,param_5,param_6);
      if (cVar3 != '\0') {
        *(int *)(*piVar2 + 4) = piVar2[1];
        *(int *)piVar2[1] = *piVar2;
        *piVar2 = *(int *)(param_1 + 0x38);
        piVar2[1] = param_1 + 0x38;
        *(int **)(*(int *)(param_1 + 0x38) + 4) = piVar2;
        *(int **)(param_1 + 0x38) = piVar2;
        return piVar2[4];
      }
      iVar4 = (int)param_4;
      if (((iVar4 != 0) &&
          (((*(char *)(param_1 + 0x80) == '\0' && (iVar4 == 2)) ||
           ((*(char *)(param_1 + 0x81) == '\0' && (iVar4 == 1)))))) &&
         (param_3 == *(int *)(piVar2[4] + 100))) {
        fn_826857F8(param_1,param_2);
        return 0;
      }
    }
  }
  return 0;
}

