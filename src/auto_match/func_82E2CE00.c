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
extern unsigned int *auStack_2c;
extern int fn_82E28AA8();
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack_30;


undefined4 fn_82E2CE00(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_30;
  uint auStack_2c [11];
  
  piVar5 = (int *)(param_1 + -4);
  uVar4 = 0;
  (**(code **)(*(int *)(param_1 + -4) + 0x70))(piVar5);
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar2 = fn_82E4FE08(0x8b0);
    *(int *)(param_1 + 0x30) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,0x8b0);
    }
  }
  else {
    uStack_30 = 0;
    auStack_2c[0] = 0;
    iVar3 = fn_82E28AA8(piVar5,&uStack_30,auStack_2c);
    uVar1 = uStack_30;
    if (-1 < iVar3) {
      if (auStack_2c[0] < 0x8b1) {
        fn_82F68CC0(*(undefined4 *)(param_1 + 0x30),uStack_30);
        fn_82E4FE40(uVar1);
        uVar4 = *(undefined4 *)(param_1 + 0x30);
      }
      else {
        fn_82E4FE40(uStack_30);
      }
    }
  }
  (**(code **)(*piVar5 + 0x74))(piVar5);
  return uVar4;
}

