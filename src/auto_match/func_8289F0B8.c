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
extern int fn_828ACCE8();
extern int fn_82A4AAA8();


longlong fn_8289F0B8(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int aiStack_30 [12];
  
  lVar4 = 0;
  aiStack_30[0] = **(int **)(param_1 + 0x220);
  if ((int *)aiStack_30[0] != *(int **)(param_1 + 0x220)) {
    do {
      piVar1 = *(int **)(aiStack_30[0] + 0x10);
      iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
      if (iVar2 == 0) {
        cVar3 = fn_828ACCE8(param_1);
        if (cVar3 != '\0') goto LAB_8289f138;
      }
      else {
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar2 = fn_82A4AAA8();
        if (iVar2 == 1) {
LAB_8289f138:
          lVar4 = lVar4 + 1;
        }
      }
      fn_82381BC0(aiStack_30);
    } while (aiStack_30[0] != *(int *)(param_1 + 0x220));
  }
  return lVar4;
}

