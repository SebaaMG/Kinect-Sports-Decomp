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
extern int fn_82925600();
extern int fn_82B8FD40();
extern unsigned int lbl_82005328;
extern unsigned int lbl_821AAD20;


void fn_8292CB38(int param_1,int param_2,int param_3,longlong param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  uVar2 = lbl_821AAD20;
  fVar1 = lbl_82005328;
  uVar6 = *(int *)(param_1 + 0x60) * param_2 + *(int *)(param_1 + 100) * param_3 +
          *(int *)(param_1 + 0x20);
  uVar4 = *(int *)(param_1 + 0x68) + uVar6;
  if (uVar6 < uVar4) {
    iVar5 = uVar4 - uVar6;
    pbVar7 = (byte *)(uVar6 - 1);
    do {
      puVar3 = (undefined4 *)param_4;
      *puVar3 = uVar2;
      puVar3[1] = uVar2;
      puVar3[2] = uVar2;
      pbVar7 = pbVar7 + 1;
      puVar3[3] = (float)*pbVar7 * fVar1;
      param_4 = param_4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_1 = fn_82B8FD40(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) *
                                             -0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82925600(param_1,param_4 + ((ulonglong)*(uint *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

