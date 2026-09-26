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
extern int fn_82FAE140();


undefined8 fn_82FAC688(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  undefined8 uVar4;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_2 + 0x6c);
  if ((*(uint *)(iVar1 + 0x14) & 0x3e000000) == 0x2000000) {
    iVar7 = *(int *)(iVar1 + 0x28);
  }
  else {
    iVar7 = 0;
  }
  *param_3 = iVar7;
  if (*(short *)(iVar1 + 0x1c) == 3) {
    *param_3 = *param_3 + 0x180;
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_2 + 0x198);
  iVar5 = fn_82FAE140(*(undefined4 *)(param_1 + 0x60));
  iVar5 = iVar5 + iVar7;
  if (*param_3 + iVar5 < *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 8)) {
    uVar3 = *(uint *)(iVar2 + 0x10);
    trapWord(6,(ulonglong)uVar3,0);
    uVar6 = (*(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 8)) + *param_3 + iVar5;
    *param_4 = uVar6 - (uVar6 / uVar3) * uVar3;
    if (*(short *)(iVar1 + 0x1c) == 3) {
      *param_3 = *param_3 + -0x180;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

