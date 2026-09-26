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
extern int fn_82FF2D40();
extern int fn_8300B720();
extern int fn_830177C8();
extern unsigned int lbl_832642FC;
extern unsigned int uStack_50;


ulonglong fn_8300B7E0(undefined8 param_1,int param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  uint in_r7;
  char in_r8;
  uint uVar5;
  ulonglong uVar6;
  double extraout_f1;
  undefined8 uStack_50;
  
  *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + 1;
  uVar6 = 1;
  if ((in_r8 == '\0') &&
     (((*(byte *)(param_2 + 0x3d) & 0x20) != 0 || (*(int *)(param_2 + 0x14) == 0)))) {
    uVar5 = (uint)*(ushort *)(param_2 + 0x32);
    *(short *)(param_2 + 0x9c) = *(short *)(param_2 + 0x9c) + 1;
    iVar3 = param_2;
    if (((*(uint *)(param_2 + 0x40) >> 9 & 1) != 0) && (uVar5 != 0)) {
      iVar3 = fn_830177C8(lbl_832642FC,param_2,9,0);
      uStack_50 = (ulonglong)extraout_f1;
      uVar5 = (uint)(((U64)(uStack_50) >> 48) & 0xFFFF);
    }
    if ((uVar5 != 0) && ((int)uVar5 < (int)((uint)*(ushort *)(param_2 + 0x9c) - (in_r7 & 0xffff))))
    {
      uStack_50 = uStack_50 & 0xffffffff;
      uVar6 = fn_82FF2D40(param_1,iVar3,0,*(undefined4 *)(param_2 + 0xc),
                            *(byte *)(param_2 + 0x3d) >> 7,&uStack_50);
    }
  }
  if ((*(int **)(param_2 + 0x14) != (int *)0x0) &&
     ((cVar4 = (**(code **)(**(int **)(param_2 + 0x14) + 0x74))(param_1), cVar4 == '\0' ||
      (uVar2 = uVar6 & 0xff, uVar6 = 1, uVar2 == 0)))) {
    uVar6 = 0;
  }
  if (((*(int *)(param_2 + 0x44) != 0) &&
      (piVar1 = *(int **)(*(int *)(param_2 + 0x44) + 4), piVar1 != (int *)0x0)) &&
     ((cVar4 = (**(code **)(*piVar1 + 0x74))(param_1), cVar4 == '\0' ||
      (uVar2 = uVar6 & 0xff, uVar6 = 1, uVar2 == 0)))) {
    uVar6 = 0;
  }
  if (*(short *)(param_2 + 0x18) == 1) {
    *(byte *)(param_2 + 0xa0) = *(byte *)(param_2 + 0xa0) & 0x1f | 0x20;
    fn_8300B720(param_2);
  }
  return uVar6;
}

