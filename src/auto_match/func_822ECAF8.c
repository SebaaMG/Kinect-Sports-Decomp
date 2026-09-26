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
extern int fn_82240070();
extern int fn_822EF4E0();
extern int fn_822EF538();
extern int fn_822EF668();


ulonglong fn_822ECAF8(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int *apiStack_30 [12];
  
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_822EF4E0(apiStack_30);
  cVar2 = fn_822EF668(apiStack_30[0],1);
  if (cVar2 == '\0') {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
    if (*(int *)piVar1[8] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)piVar1[0xc];
    }
    if (iVar3 < 1) {
      uVar4 = (**(code **)(*piVar1 + 0x18))();
    }
    else {
      uVar4 = (ulonglong)**(byte **)piVar1[8];
    }
    if ((int)uVar4 == -1) {
      uVar5 = 3;
    }
    else {
      fn_822EF538(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
      *(longlong *)(param_1 + 2) = *(longlong *)(param_1 + 2) + 1;
    }
  }
  iVar3 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar5;
    if (*(int *)(iVar3 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar3,uVar5,0);
  }
  piVar1 = *(int **)((int)apiStack_30[0] + *(int *)(*apiStack_30[0] + 4) + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return uVar4;
}

