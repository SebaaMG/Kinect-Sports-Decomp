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
extern int fn_82805808();
extern int fn_82F691F0();


void fn_82806240(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(ushort *)(param_2 + 0x24);
  iVar7 = (uint)*(ushort *)(param_2 + 0x22) * (uint)*(ushort *)(param_2 + 0x20);
  iVar2 = iVar7 * 4;
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  iVar4 = fn_82805808(param_2);
  piVar5 = param_1 + 0x20;
  *param_1 = (int)piVar5;
  param_1[2] = (int)(piVar5 + uVar3);
  iVar6 = (int)(piVar5 + uVar3) + (uVar1 + 3 & 0xfffffffc);
  param_1[0xb] = iVar6;
  iVar6 = iVar6 + (iVar7 + 0x1f >> 3 & 0xfffffffcU);
  param_1[0xd] = iVar6;
  *(undefined4 *)(iVar6 + (iVar4 + 3U & 0xfffffffc)) = 0x12345678;
  param_1[0xe] = iVar2;
  param_1[0xf] = param_3;
  param_1[1] = uVar3;
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x20);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1[0xb],0);
}

