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
extern int fn_82526180();
extern int fn_82A82440();
extern int fn_82A938E8();
extern int fn_82A93980();
extern int fn_82A93C18();
extern int fn_82A93F70();


undefined8 fn_82524770(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if (*(int *)(param_1 + 0xa20) != 0) goto LAB_825247e4;
  if (*(int *)(param_1 + 0x9b8) == 0) {
    iVar2 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) goto LAB_825247b8;
  }
  else if (*(int *)(param_1 + 0x9b4) == 1) {
LAB_825247b8:
    iVar2 = param_1 + 0x5c8;
  }
  else {
    iVar2 = param_1 + 0x1e0;
  }
  if ((*(int *)(param_1 + 0x9c8) == 0) &&
     (iVar2 = fn_82526180(iVar2,*(undefined4 *)(param_1 + 0xa18),
                                *(undefined4 *)(param_1 + 0xa1c)), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xa20) = 1;
  }
LAB_825247e4:
  uVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 0xa18) + 8) != 0) {
    iVar2 = 0;
    iVar4 = 0;
    iVar7 = param_1 + 0x1f60;
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0xa18) + 0x10) + iVar4;
      fn_82A938E8(*(undefined4 *)(iVar8 + 0xc),0,0,0,iVar7 + -0x1a0);
      fn_82A93F70(iVar7 + -0x1a0,*(undefined4 *)(iVar8 + 0x24));
      fn_82A93980(*(undefined4 *)(iVar8 + 0x10),0,1,0,0,iVar7);
      fn_82A93F70(iVar7,*(undefined4 *)(iVar8 + 0x28));
      uVar5 = 0;
      if (*(int *)(iVar8 + 0x18) != 0) {
        iVar6 = 0;
        do {
          uVar9 = 0;
          puVar10 = (undefined4 *)(iVar6 + *(int *)(iVar8 + 0x30));
          uVar1 = puVar10[9];
          if (puVar10[8] != 0) {
            do {
              fn_82A93C18(puVar10[1],puVar10[2],1,0,*puVar10,0,0,0);
              fn_82A93F70(((iVar2 + uVar5) * 0x10 + uVar9) * 0x34 + param_1 + 0x2100,
                                (longlong)(int)puVar10[5] * (longlong)(int)uVar9 + (ulonglong)uVar1)
              ;
              uVar9 = uVar9 + 1;
            } while (uVar9 < (uint)puVar10[8]);
          }
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (uVar5 < *(uint *)(iVar8 + 0x18));
      }
      uVar3 = uVar3 + 1;
      iVar7 = iVar7 + 0x20;
      iVar4 = iVar4 + 0x34;
      iVar2 = iVar2 + 0x12;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0xa18) + 8));
  }
  *(undefined4 *)(param_1 + 0x1c0) = 3;
  if ((ulonglong)*(uint *)(param_1 + 0x1ac) != 0) {
    fn_82A82440((ulonglong)*(uint *)(param_1 + 0x1ac) + 0xc);
  }
  return 0;
}

