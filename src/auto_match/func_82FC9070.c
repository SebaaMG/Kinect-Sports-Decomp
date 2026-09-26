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
extern int fn_82F691F0();
extern int fn_82FBC888();
extern unsigned int iStack_2c;
extern unsigned int uStack_4c;


undefined8 fn_82FC9070(int param_1,int *param_2,uint param_3)

{
  undefined4 uVar2;
  ulonglong uVar1;
  uint uVar3;
  double dVar4;
  undefined4 uStack_4c;
  undefined4 auStack_40 [5];
  int iStack_2c;
  
  auStack_40[0] = 0;
  dVar4 = (double)param_3;
  uVar3 = 4;
  do {
    uStack_4c = (undefined4)(longlong)((double)*(float *)(uVar3 + 0x831bc6bc) * dVar4);
    uVar2 = fn_82FBC888(uStack_4c);
    *(undefined4 *)((int)auStack_40 + uVar3) = uVar2;
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x18);
  *(int *)(param_1 + 0x14) = iStack_2c;
  uVar1 = (**(code **)(*param_2 + 4))(param_2,iStack_2c << 2);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0x34;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) * 4 + (int)uVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0);
}

