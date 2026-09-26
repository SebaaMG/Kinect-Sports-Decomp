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
extern unsigned int *auStack_50;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82B4FAE8();
extern int fn_82B4FD60();
extern int fn_82B50498();
extern int fn_82B50558();
extern int fn_82B52828();
extern unsigned int iStack_60;


void fn_82B52E60(int param_1,int param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iStack_60;
  undefined4 *puStack_5c;
  uint auStack_50 [20];
  
  puVar1 = (uint *)fn_82ABE250(param_1,8,3);
  puVar1[1] = (uint)puVar1 | 1;
  *puVar1 = (uint)(puVar1 + 1) | 1;
  fn_82B50498(&iStack_60,param_4,param_1);
  while( true ) {
    iVar2 = fn_82B50558(&iStack_60);
    if (iVar2 == 0) {
      uVar3 = 0;
      if ((int)param_5 == 2) {
        if (((param_3 & 0x20) == 0) || ((param_3 & 0x10) != 0)) {
          uVar3 = 0x1000;
        }
        if (((param_3 & 0x20) != 0) && ((*(uint *)(param_2 + 4) & 0x10000000) == 0)) {
          uVar3 = 4;
        }
      }
      if (param_6 == 1) {
        uVar3 = uVar3 & 4;
      }
      fn_82B52828(param_1,puVar1,uVar3,0,param_5,0,0,auStack_50);
      if ((auStack_50[0] & 0x1000) != 0) {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20000000;
      }
      if ((auStack_50[0] & 4) != 0) {
        if ((int)param_5 == param_6) {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x40000000;
        }
        else if ((*(uint *)(param_2 + 4) & 0x40000000) != 0) {
          fn_82AA65B0(param_1,0xdf9);
        }
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x8000;
      }
      fn_82B4FD60(param_1,puVar1);
      *puVar1 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar1;
      *puStack_5c = *(undefined4 *)(iStack_60 + 0x3d0);
      *(undefined4 **)(iStack_60 + 0x3d0) = puStack_5c;
      return;
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) != 0x13)) break;
    fn_82B4FAE8(param_1,puVar1,iVar2);
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

