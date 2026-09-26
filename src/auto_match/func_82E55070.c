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
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E55008();
extern int fn_82EE2EE8();
extern int fn_82F691F0();
extern unsigned int stack0x00000000;


undefined8 fn_82E55070(int param_1,undefined4 *param_2)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  fn_82E50CB8(param_1 + 8);
  if (*(uint *)(param_1 + 0x58) < 0x7f) {
    puVar2 = (undefined4 *)fn_82E50BE8(0xc,0,0,0,0);
    uVar4 = 0xffffffff8007000e;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
      uVar6 = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      uVar1 = fn_82E50BE8(0x14,0,0,0,0);
      *puVar2 = (int)uVar1;
      uVar6 = uVar4;
      if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar1,0,0x14);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      uVar7 = uVar6;
      if (-1 < (int)uVar6) {
        if (&stack0x00000000 != (undefined1 *)0x50) {
          uVar5 = *(undefined4 *)(param_1 + 0x58);
        }
        iVar3 = fn_82EE2EE8(param_1 + 0x54,*(undefined4 *)(param_1 + 0x58),puVar2);
        uVar7 = uVar4;
        if (iVar3 != 0) {
          uVar4 = uVar6;
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = uVar5;
          }
          goto LAB_82e5517c;
        }
      }
      fn_82E55008(puVar2,1);
      uVar4 = uVar7;
    }
  }
  else {
    uVar4 = 0xffffffffc00d36b2;
  }
LAB_82e5517c:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

