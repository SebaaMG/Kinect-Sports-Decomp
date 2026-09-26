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
extern int fn_8267C498();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DF848();
extern int fn_826DFA28();
extern int fn_826E7998();
extern int fn_826F4A18();


void fn_826DFFC0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar5;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar7;
  uint auStack_40 [16];
  
  uVar5 = fn_826A6A38();
  iVar6 = *(int *)(param_1 + 0x314);
  if (iVar6 == 0) {
    iVar6 = param_1 + 0x28;
  }
  fn_826A9280(param_1 + 0x14,0xffffffff8200c9cc,uVar5 & 0xffff,
                    ((ulonglong)*(uint *)(iVar6 + 0x34) - (ulonglong)*(uint *)(iVar6 + 0x30)) +
                    (ulonglong)*(uint *)(iVar6 + 0x2c));
  uVar7 = 0;
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x24);
  if (piVar1 == (int *)0x0) {
    fn_826DFA28(param_1 + 0x14,0xffffffff8200c988);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x314);
    if (iVar6 == 0) {
      iVar6 = param_1 + 0x28;
    }
    fn_826E7998(iVar6);
    *(undefined1 *)(iVar6 + 0x38) = 1;
    iVar2 = *piVar1;
    uVar3 = *(undefined4 *)(iVar6 + 0x10);
    uVar4 = fn_826DF848(param_1);
    uVar7 = (**(code **)(iVar2 + 0xc))(piVar1,uVar3,uVar4);
  }
  auStack_40[0] = uVar5 & 0xffff;
  fn_826F4A18(param_1,auStack_40,uVar7);
  if ((uVar7 & 0xffffffff) != 0) {
    fn_8267C498(uVar7);
  }
  return;
}

