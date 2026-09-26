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
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82B18438();
extern int fn_82B841E8();
extern int fn_82B8AC10();


undefined8 fn_82B8B0B8(undefined8 param_1,int param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  
  uVar1 = *(uint *)(param_2 + 8) >> 7 & 0x7f;
  if (uVar1 == 0x75) {
LAB_82b8b270:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((*(uint *)(param_2 + 8) >> 0x12 & 1) == (param_4 & 0xff)) {
      if (uVar1 == 0x57) {
        uVar1 = *(uint *)(param_2 + 8);
        iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        uVar1 = *(uint *)(param_2 + 0x1c);
        uVar3 = *(undefined4 *)(iVar5 + param_2 + -0x10);
        fn_82B8AC10(param_1,param_2,0,1);
        iVar5 = fn_82B841E8(param_1,(ulonglong)uVar1,(ulonglong)uVar1 + 0x20,0x56,0,0);
        uVar1 = *(uint *)(iVar5 + 8);
        iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        *(undefined4 *)(iVar4 + iVar5 + -0x10) = uVar3;
        return 0;
      }
      if (uVar1 != 0x5a) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820d8a3c);
      }
      uVar1 = *(uint *)(param_2 + 8);
      iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      iVar5 = *(int *)(param_2 + 0x1c);
      piVar7 = (int *)(iVar5 + 0xc);
      iVar4 = *(int *)(iVar4 + param_2 + -0x10);
      piVar2 = *(int **)(iVar5 + 0xc);
      while (piVar2 != (int *)0x0) {
        if (*piVar2 != iVar4) {
          fn_82B18438(param_1,iVar5);
          uVar6 = 1;
        }
        if ((int *)*piVar7 == piVar2) {
          piVar7 = piVar2 + 2;
        }
        piVar2 = (int *)*piVar7;
      }
    }
    else {
      if (uVar1 == 0x55) goto LAB_82b8b270;
      if (uVar1 == 0x57) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820dbf30);
      }
      if (uVar1 != 0x5a) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdac,0xffffffff820d8a3c);
      }
      uVar1 = *(uint *)(param_2 + 8);
      iVar5 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      fn_82B18438(param_1,*(undefined4 *)(param_2 + 0x1c),
                        *(undefined4 *)(iVar5 + param_2 + -0x10));
      uVar6 = 1;
    }
    fn_82B8AC10(param_1,param_2,0,1);
  }
  return uVar6;
}

