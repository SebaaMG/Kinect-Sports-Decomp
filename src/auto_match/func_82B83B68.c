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
extern int fn_82ABDD90();


void fn_82B83B68(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6
                  )

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  param_6 = param_6 & 7;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  uVar1 = param_4 & 0x7f;
  uVar4 = (((param_5 & 7) << 5 | param_6) << 7 | uVar1) << 7 | *(uint *)(param_1 + 8) & 0xffc6007f;
  *(uint *)(param_1 + 8) = uVar4;
  switch(param_4) {
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    if ((*(uint *)(param_1 + 0xc) & 0xeeee) == 0xeeee) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0xeeee;
    break;
  default:
    goto switchD_82b83bdc_caseD_9;
  case 10:
  case 0xb:
  case 0x2c:
  case 0x2d:
    if ((*(uint *)(param_1 + 0xc) & 0x4444) == 0x4444) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0x4444;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
    *(uint *)(param_1 + 8) = uVar4 | 0x40;
    if ((*(uint *)(param_1 + 0xc) & 0xeeee) == 0xeeee) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0xeeee;
    break;
  case 0x1d:
    if ((*(uint *)(param_1 + 0xc) & 0xe) == 0xe) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0xe;
    break;
  case 0x1e:
  case 0x37:
  case 0x38:
    *(uint *)(param_1 + 8) = uVar4 | 0x40;
    if ((*(uint *)(param_1 + 0xc) & 0xc) == 0xc) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0xc;
    break;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x48:
    if ((*(uint *)(param_1 + 0xc) & 0x2222) == 0x2222) {
      return;
    }
    uVar5 = (ushort)*(uint *)(param_1 + 0xc) | 0x2222;
    break;
  case 0x56:
  case 0x57:
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 0x400;
    return;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x62:
  case 0x65:
  case 0x66:
    *(uint *)(param_1 + 8) = uVar4 | 0x40;
    return;
  case 0x60:
    iVar3 = fn_82ABDD90(param_2,uVar1,param_5 & 7,param_6);
    iVar3 = iVar3 + param_1 + -0x14;
    *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfe01ffff | 0x1c80000;
    return;
  case 0x61:
  case 99:
  case 100:
    iVar3 = fn_82ABDD90(param_2,uVar1,param_5 & 7,param_6);
    puVar2 = (uint *)(iVar3 + param_1 + -0x18);
    *(undefined1 *)((int)puVar2 + 0xe) = 0xe4;
    *puVar2 = *puVar2 | 0x80000;
    puVar2[1] = puVar2[1] | 0xf1ff000;
    goto switchD_82b83bdc_caseD_9;
  }
  *(ushort *)(param_1 + 0xe) = uVar5;
switchD_82b83bdc_caseD_9:
  return;
}

