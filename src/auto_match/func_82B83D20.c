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
extern int fn_82ABDA10();
extern int fn_82ABDD90();
extern int fn_82ABE780();


undefined8 fn_82B83D20(int param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar7;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  
  switch(*(uint *)(param_1 + 8) >> 7 & 0x7f) {
  case 0x53:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_3,0x12c0);
  case 0x54:
    param_2[1] = param_2[1] & 0xffff0fff | 0x7000;
    iVar4 = fn_82ABDD90(param_3,0x54,0,0);
    *param_2 = (*(uint *)(iVar4 + param_1 + -0x14) & 0x1f) << 0x10 | *param_2 & 0xffe0ffff;
    return 1;
  case 0x55:
    iVar4 = fn_82ABDD90(param_3,0x55,0,0);
    piVar3 = (int *)(iVar4 + param_1 + -0x14);
    iVar4 = *piVar3;
    uVar2 = *(undefined4 *)((piVar3[1] & 0xfffffffcU) + 0x1c);
    param_2[1] = param_2[1] & 0xffff0fff | 0x8000;
    iVar5 = fn_82ABDD90(param_3,0x54,0,0);
    *param_2 = (*(uint *)(iVar5 + iVar4 + -0x14) & 0x1f) << 0x10 | *param_2 & 0xffe0ffff;
    uVar6 = fn_82ABE780(uVar2);
    uVar8 = *param_2;
    *param_2 = uVar6 & 0x1fff | uVar8 & 0xffffe000;
    *param_2 = (*(uint *)(param_1 + 8) & 0x20000) << 4 | uVar6 & 0x1fff | uVar8 & 0xffdfe000;
    param_2[1] = ~*(uint *)(param_1 + 8) >> 8 & 0x400 | param_2[1] & 0xfffffbff;
    return 0;
  case 0x56:
  case 0x57:
    uVar8 = param_2[1];
    param_2[1] = uVar8 & 0xffff9fff | 0x9000;
    param_2[1] = *(uint *)(param_1 + 8) >> 8 & 0x400 | uVar8 & 0xffff9bff | 0x9000;
    uVar8 = *param_2;
    if ((*(uint *)(param_1 + 8) & 0x3f80) == 0x2b00) {
LAB_82b83db4:
      uVar8 = uVar8 | 0x2000;
      goto LAB_82b83e1c;
    }
    goto LAB_82b83e18;
  case 0x58:
    uVar8 = param_2[1] & 0xffff0fff | 0xa000;
    break;
  case 0x59:
  case 0x5a:
    uVar8 = param_2[1];
    param_2[1] = uVar8 & 0xffffbfff | 0xb000;
    param_2[1] = *(uint *)(param_1 + 8) >> 8 & 0x400 | uVar8 & 0xffffbbff | 0xb000;
    if ((*(uint *)(param_1 + 8) & 0x3f80) == 0x2c80) {
      uVar8 = *param_2;
      goto LAB_82b83db4;
    }
    if ((*(uint *)(param_1 + 8) & 0x380000) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc);
      cVar7 = fn_82ABDA10(iVar4);
      if (cVar7 == '\0') {
        for (puVar1 = *(uint **)(iVar4 + 4); (puVar1 != (uint *)0x0 && ((*puVar1 & 0xe000000) == 0))
            ; puVar1 = (uint *)puVar1[2]) {
        }
        param_2[1] = *puVar1 >> 0xf & 0x3fc | param_2[1] & 0xfffffc03;
        return 1;
      }
    }
    uVar8 = *param_2;
LAB_82b83e18:
    uVar8 = uVar8 | 0x4000;
LAB_82b83e1c:
    *param_2 = uVar8;
    return 1;
  case 0x5b:
    uVar8 = param_2[1] & 0xffffcbff | 0xc200;
    break;
  case 0x5c:
  case 0x5d:
    uVar8 = param_2[1] & 0xffffcdff | 0xc400;
    break;
  case 0x5e:
    param_2[1] = param_2[1] & 0xffffcfff | 0xc600;
    iVar4 = fn_82ABDD90(param_3,0x5e,0,0);
    *param_2 = *param_2 & 0xfffffff8 | *(uint *)(iVar4 + param_1 + -0xc) & 7;
    return 0;
  case 0x5f:
    uVar8 = param_2[1] | 0xf000;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_3,0xdac,0xffffffff820dbef8);
  }
  param_2[1] = uVar8;
  return 0;
}

