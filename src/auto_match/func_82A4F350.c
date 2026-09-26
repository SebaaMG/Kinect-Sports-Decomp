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
extern int fn_82A49AC8();
extern int fn_82A4ED78();
extern int fn_82A5ED20();


void fn_82A4F350(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int *param_5)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = *(ushort *)(*param_3 + 0xe);
  iVar6 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < iVar6) {
    psVar4 = (short *)*param_3;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = uVar1;
    if (*psVar4 == -2) {
      uVar10 = *(undefined4 *)(psVar4 + 10);
      uVar8 = psVar4[9];
    }
    psVar5 = (short *)*param_5;
    if (*psVar5 == -2) {
      uVar9 = *(undefined4 *)(psVar5 + 10);
    }
    sVar2 = psVar5[1];
    sVar3 = psVar4[1];
    uVar7 = fn_82A49AC8();
    fn_82A4ED78(param_1,uVar7,sVar3,sVar2,uVar1 >> 3,uVar8,uVar10,uVar9);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(uint *)(param_1 + 0xcc) = *(uint *)(*param_5 + 4) / 1000;
  }
  return;
}

