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
extern int fn_82F691F0();


undefined8
fn_82FB96F0(int param_1,int *param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = (uint)param_5[1] >> 0xe; uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(param_1 + 0x44) = iVar1;
  *(undefined4 *)(param_1 + 0x48) = *param_5;
  *(int *)(param_1 + 0x40) = param_4;
  if (((param_5[1] & 0x20000) != 0) && (*(char *)(param_4 + 0x44) == '\0')) {
    *(int *)(param_1 + 0x44) = iVar1 + -1;
  }
  uVar2 = *(uint *)(param_1 + 0x44);
  if ((ulonglong)uVar2 != 0) {
    iVar1 = (**(code **)(*param_2 + 4))
                      (param_2,((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x7fffffff) * 2 & 0xfffffff)
                               << 4);
    *(int *)(param_1 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 4,0,0x3c);
}

