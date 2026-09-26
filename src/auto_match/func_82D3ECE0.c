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
extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D3ECE0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [48];
  
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar5) {
    iVar4 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_2,iVar4,0x10);
  }
  param_2[1] = iVar5;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar3 = 0;
    do {
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(iVar3 + *param_2 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar3 = iVar3 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x4c));
  }
  return;
}

