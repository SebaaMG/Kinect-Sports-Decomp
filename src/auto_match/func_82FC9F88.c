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
extern int fn_82FC9E88();
extern unsigned int lbl_8216E060;


undefined8 fn_82FC9F88(uint *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar2;
  ulonglong uVar1;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  iVar4 = 0;
  puVar3 = param_1 + 0x33;
  pfVar6 = (float *)&lbl_8216E060;
  lVar5 = 0x10;
  do {
    uVar2 = fn_82FC9E88((longlong)((float)*param_1 * *pfVar6) & 0xffffffff);
    if (uVar2 < param_1[1]) {
      uVar2 = param_1[1];
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
    *puVar3 = uVar2;
    iVar4 = uVar2 + iVar4;
    pfVar6 = pfVar6 + 1;
  } while (lVar5 != 0);
  param_1[3] = iVar4 * 4;
  uVar1 = (**(code **)(*param_2 + 4))(param_2);
  param_1[2] = (uint)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0x34;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,param_1[3]);
}

