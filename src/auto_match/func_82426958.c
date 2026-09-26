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
extern unsigned int lbl_82194C60;


void fn_82426958(int param_1,int param_2,uint *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == *(int **)(iVar4 + 0x2b20)) {
    if ((param_4 == 9) || (*(uint *)(param_2 + 0x14) <= *(uint *)(*piVar1 + 0x7c0))) {
      switch(param_4) {
      case 2:
      case 5:
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        iVar4 = 0x16;
        uVar3 = 0;
        break;
      case 3:
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        iVar4 = 0x19;
        uVar3 = 0;
        break;
      case 4:
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        iVar4 = 0x18;
        uVar3 = 0;
        break;
      case 6:
      case 7:
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        iVar4 = 0x13;
        uVar3 = 0;
        break;
      case 8:
        uVar3 = 0;
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        if (*(uint *)(*piVar1 + 0x7bc) < *param_3) {
          iVar4 = 0x10;
        }
        else {
          iVar4 = 0xf;
        }
        break;
      case 9:
        uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
        uVar3 = (ulonglong)*(uint *)(param_2 + 0x14) + 1;
        if ((uVar3 & 0xffffffff) == 1) {
          iVar4 = 9;
          uVar3 = 1;
        }
        else if ((uVar3 & 0xffffffff) == 2) {
          iVar4 = 10;
          uVar3 = 2;
        }
        else if ((uVar3 & 0xffffffff) == 3) {
          iVar4 = 0xb;
          uVar3 = 3;
        }
        else if ((uVar3 & 0xffffffff) == 0xc) {
          iVar4 = 0xd;
          uVar3 = 0xc;
        }
        else {
          iVar4 = 0xc;
        }
        break;
      case 10:
        if ((param_3[3] == 6) || (param_3[3] == 7)) {
          uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
          iVar4 = 0x15;
          uVar3 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
          iVar4 = 0x11;
          uVar3 = 0;
        }
        break;
      case 0xb:
      case 0xd:
        if ((param_3[3] == 6) || (param_3[3] == 7)) {
          uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
          iVar4 = 0x14;
          uVar3 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
          iVar4 = 0x12;
          uVar3 = 0;
        }
        break;
      case 0xc:
        return;
      default:
        return;
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar4 + 0x2b50);
      iVar4 = 0xe;
      uVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x82414990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((uint)(byte)(&lbl_82194C60)[iVar4] * 4 + -0x7dbeb66c))(uVar2,uVar3);
    return;
  }
  return;
}

