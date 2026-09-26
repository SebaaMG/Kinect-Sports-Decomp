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
extern int fn_82B477E0();
extern int fn_82B4B498();
extern int fn_82B4FA78();
extern int fn_82B50338();
extern int fn_82B8F328();


void fn_82B50D80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  fn_82B4B498();
  iVar4 = fn_82B477E0(param_1);
  *(uint *)(iVar4 + 0x4c) = *(uint *)(iVar4 + 0x4c) | 0x100000;
  fn_82B8F328(*(undefined4 *)(param_1 + 0x234),iVar4,param_1);
  fn_82B4B498(param_1);
  iVar5 = fn_82B477E0(param_1);
  fn_82B8F328(iVar4,iVar5,param_1);
  if ((*(uint *)(*(int *)(param_1 + 0x234) + 0x30) & 0x20000000) != 0) {
    *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 0x20000000;
  }
  *(int *)(param_1 + 0x234) = iVar5;
  fn_82B4B498(param_1);
  uVar3 = fn_82B477E0(param_1);
  if (param_2 != (undefined4 *)0x0) {
    fn_82B8F328(uVar3,*param_2,param_1);
    *param_2 = (int)uVar3;
  }
  puVar6 = (undefined4 *)fn_82B50338(*(undefined4 *)(param_1 + 0x248));
  *puVar6 = 0;
  fn_82B4FA78(*(undefined4 *)(param_1 + 0x24c),puVar6 + 1);
  puVar6[3] = (int)uVar3;
  uVar2 = *(uint *)(param_1 + 0x2c);
  puVar6[5] = uVar1;
  *(byte *)(puVar6 + 4) = (byte)((~(ulonglong)uVar2 & 0xffffffff) >> 1) & 1;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
  *(uint *)(param_1 + 0x20) = *(uint *)(*(int *)(param_1 + 0x234) + 0x4c) & 0x7ffff;
  return;
}

