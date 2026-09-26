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
extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


undefined8 fn_83035128(int param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *(ushort *)*param_2;
  *param_2 = (int)((ushort *)*param_2 + 1);
  for (uVar8 = (ulonglong)uVar2; uVar8 != 0; uVar8 = uVar8 - 1) {
    iVar3 = *param_2;
    *param_2 = iVar3 + 5;
    uVar4 = *(undefined4 *)(iVar3 + 5);
    *param_2 = iVar3 + 9;
    uVar5 = *(uint *)(iVar3 + 9);
    *param_2 = iVar3 + 0xd;
    uVar6 = *(undefined4 *)(iVar3 + 0xd);
    *param_2 = iVar3 + 0x11;
    uVar1 = *(undefined1 *)(iVar3 + 0x11);
    *param_2 = iVar3 + 0x12;
    uVar7 = (uint)*(ushort *)(iVar3 + 0x12);
    *param_2 = iVar3 + 0x14;
    *(uint *)(param_1 + 0x1c) = 1 << (uVar5 & 0x3f) | *(uint *)(param_1 + 0x1c);
    fn_83018DD8(lbl_832642FC,param_1,uVar4,uVar5,uVar6,uVar1,iVar3 + 0x14,uVar7);
    *param_2 = *param_2 + uVar7 * 0xc;
    *param_3 = *param_3 + uVar7 * -0xc;
  }
  return 1;
}

