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
extern int fn_82C17460();
extern int fn_82C1CDD0();


uint fn_82C0B820(int param_1,undefined2 *param_2,undefined2 *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint auStack_40 [16];
  
  auStack_40[0] = 0;
  if ((((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x248), iVar2 == 0)) ||
      (param_2 == (undefined2 *)0x0)) ||
     (((param_6 & 0xffffffff) == 0 ||
      (puVar5 = (undefined4 *)(param_1 + 0x24c), *(int *)(param_1 + 0x24c) != 3)))) {
    return 0;
  }
  if (((param_3 == (undefined2 *)0x0) || (param_3 == param_2 + 1)) ||
     (*(ushort *)(param_1 + 0x4c) < 2)) {
    iVar2 = fn_82C1CDD0(iVar2,param_5,auStack_40,param_2,param_4,0,param_6,puVar5);
  }
  else {
    iVar2 = fn_82C1CDD0(iVar2,(param_5 & 0xffffffff) >> 1 & 0x7fff,auStack_40,param_2,param_4,
                              0,param_6,puVar5);
    if (iVar2 < 0) goto LAB_82c0b93c;
    if (auStack_40[0] != 0) {
      uVar4 = 0;
      param_3 = param_3 + -1;
      puVar3 = param_2 + -1;
      do {
        uVar4 = uVar4 + 1 & 0xffff;
        puVar3 = puVar3 + 1;
        *puVar3 = *param_2;
        puVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        param_3 = param_3 + 1;
        *param_3 = *puVar1;
      } while (uVar4 < auStack_40[0]);
    }
  }
  if (-1 < iVar2) {
    if (auStack_40[0] == 0) {
      *(undefined4 *)(param_1 + 0x22c) = 0;
      *puVar5 = 2;
      return 0;
    }
    *(uint *)(param_1 + 0x22c) = auStack_40[0];
    return auStack_40[0];
  }
LAB_82c0b93c:
  *(undefined4 *)(param_1 + 0x22c) = 0;
  auStack_40[0] = 0;
  *(undefined4 *)(param_1 + 0x188) = 7;
  *puVar5 = 1;
  fn_82C17460(*(undefined4 *)(param_1 + 0x248));
  return auStack_40[0];
}

