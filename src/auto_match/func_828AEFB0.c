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
extern int fn_823AA970();


ulonglong fn_828AEFB0(int *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (*(char *)((int)param_2 + 0x26) == '\0') {
    if (*(char *)((int)param_1 + 0x97) != '\0') {
      iVar2 = fn_823AA970();
      for (piVar3 = (int *)param_1[0x27]; piVar3 != (int *)param_1[0x28]; piVar3 = piVar3 + 3) {
        if (*piVar3 == iVar2) {
          return (ulonglong)(*(char *)(piVar3 + 1) != '\0');
        }
      }
    }
    return 0;
  }
  uVar1 = (**(code **)(*param_2 + 0x1c))(param_2,param_1);
  return uVar1;
}

