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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82A371C8();
extern unsigned int iStack_54;


int fn_82A37298(int param_1,int *param_2,undefined8 param_3,int *param_4,undefined8 param_5,
                 code *param_6,code *param_7,undefined8 param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [4];
  int iStack_54;
  
  iVar2 = *(uint *)(param_1 + 0x54) * 0x28 + param_1;
  if ((*param_2 != *(int *)(iVar2 + 4)) || (param_2[1] != *(int *)(iVar2 + 8))) {
    uVar3 = *(uint *)(param_1 + 0x54) ^ 1;
    *(uint *)(param_1 + 0x54) = uVar3;
    iVar2 = uVar3 * 0x28 + param_1;
    if (*param_2 == *(int *)(iVar2 + 4)) {
      if (param_2[1] == *(int *)(iVar2 + 8)) goto LAB_82a37330;
    }
    fn_82A371C8(param_1,param_2,uVar3,param_3);
  }
LAB_82a37330:
  if ((*param_4 != 0) &&
     ((*param_4 != *(int *)((*(uint *)(param_1 + 0x54) ^ 1) * 0x28 + param_1 + 4) ||
      (param_4[1] != *(int *)((*(uint *)(param_1 + 0x54) ^ 1) * 0x28 + param_1 + 8))))) {
    iVar2 = -0x3fffffff;
    auStack_60[0] = 0;
    if ((param_6 == (code *)0x0) || (param_4[2] == param_2[2])) {
      bVar1 = false;
    }
    else {
      iStack_54 = param_4[1] * (int)param_5;
      bVar1 = true;
      iVar2 = (*param_6)(0xffffffff820893a4,param_8,0,0,param_5,auStack_58,0,auStack_60);
    }
    fn_82A371C8(param_1,param_4,*(uint *)(param_1 + 0x54) ^ 1,param_5);
    if ((bVar1) && (-1 < iVar2)) {
      (*param_7)(*(undefined4 *)((*(uint *)(param_1 + 0x54) ^ 1) * 0x28 + param_1 + 0x14),
                 auStack_60[0]);
    }
  }
  iVar2 = *(int *)(param_1 + 0x54) * 0x28 + param_1;
  if (*(int *)(iVar2 + 0x14) == 0x103) {
    NtWaitForSingleObjectEx(*(undefined4 *)(iVar2 + 0x28),1,0,0);
    iVar2 = *(int *)(param_1 + 0x54) * 0x28 + param_1;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = *(int *)(param_1 + 0x54) * 0x28 + param_1;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x1c);
  }
  return *(int *)(param_1 + 0x54) * 0x28 + param_1 + 4;
}

