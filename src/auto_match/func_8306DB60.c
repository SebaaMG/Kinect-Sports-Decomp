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
extern int fn_8306D610();
extern int fn_8306D898();
extern int fn_8306ED70();
extern int fn_83075590();
extern int fn_83075790();
extern int fn_83075D40();
extern int fn_83075D80();
extern int fn_83075DA0();
extern int fn_83075DA8();


void fn_8306DB60(int param_1,int *param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  
  if ((param_2 == (int *)0x0) || (uVar1 = 1, *param_2 != 2)) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x1a90) = uVar1;
  iVar5 = param_1 + 0xa40;
  fn_83075DA0(iVar5,param_3);
  fn_83075DA8(iVar5,*(undefined1 *)(param_1 + 0x1a90));
  if (*(char *)(param_1 + 0x1a90) == '\0') {
    fn_8306D610(param_1);
  }
  else {
    uVar3 = 0;
    do {
      fn_8306ED70();
      fn_83075D80(iVar5,uVar3);
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < 0x14);
    fn_8306D898(param_1,iVar5);
    fn_83075590(param_1 + 0xcd0,param_2,iVar5);
    *(char *)(param_1 + 0x1a91) = '\x01' - (*(int *)(param_4 + 0xc) == 0);
    fn_83075790(param_1,iVar5);
    lVar4 = 0;
    pfVar2 = (float *)(param_1 + 0x19fc);
    do {
      dVar6 = (double)fn_83075D40(iVar5,lVar4);
      lVar4 = lVar4 + 1;
      pfVar2 = pfVar2 + 1;
      *pfVar2 = (float)dVar6;
    } while ((int)lVar4 < 0x14);
  }
  *(undefined1 *)(param_1 + 0x1a93) = 1;
  return;
}

