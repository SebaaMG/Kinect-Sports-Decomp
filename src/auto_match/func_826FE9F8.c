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
extern int fn_8267BE38();
extern int fn_826824B0();
extern int fn_8269A608();
extern int fn_826C3768();


int * fn_826FE9F8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  if (*param_1 != 0) {
    fn_826824B0();
  }
  *param_1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = (uint *)param_1[1];
  if (puVar3 != (uint *)0x0) {
    uVar4 = *puVar3;
    *puVar3 = (uint)((ulonglong)uVar4 - 1);
    if ((longlong)((ulonglong)uVar4 - 1) < 1) {
      fn_8269A608(puVar3);
      fn_8267BE38(puVar3);
    }
  }
  param_1[1] = param_2[1];
  fn_826C3768(param_1 + 2,param_2 + 2);
  return param_1;
}

