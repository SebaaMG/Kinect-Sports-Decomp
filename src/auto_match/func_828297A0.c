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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82829E10();


undefined8 fn_828297A0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_50 [16];
  uint auStack_40 [16];
  
  uVar1 = *param_2;
  if ((*(uint *)(param_1 + 0x18) <= uVar1) && (uVar1 <= *(uint *)(param_1 + 0x1c))) {
    iVar2 = *(int *)(param_1 + 0x3c);
    auStack_40[1] = 0;
    auStack_40[0] = uVar1;
    piVar4 = (int *)fn_82829E10(auStack_50,iVar2,auStack_40);
    iVar3 = *piVar4;
    if (iVar3 != *(int *)(iVar2 + 4)) {
      param_2[1] = (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0xc)) + uVar1;
      *(char *)(param_2 + 2) = (char)*(undefined4 *)(iVar3 + 0x1c);
      return 1;
    }
  }
  return 0;
}

