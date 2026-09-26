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
extern int fn_826824B0();
extern int fn_826C3378();


void fn_826C3768(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1 != param_2) {
    iVar2 = *param_1;
    if ((((*(byte *)(param_1 + 2) & 2) == 0) && (iVar2 != 0)) && (iVar2 != *param_2)) {
      fn_826824B0(iVar2);
    }
    *param_1 = *param_2;
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      iVar1 = *param_2;
      if ((iVar1 != 0) && (iVar2 != iVar1)) {
        *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
      }
    }
    iVar2 = param_2[1];
    if (iVar2 == 0) {
      bVar3 = 0;
      iVar2 = 0;
    }
    else {
      bVar3 = *(byte *)(param_2 + 2) & 1;
    }
    fn_826C3378(param_1,iVar2,bVar3);
  }
  return;
}

