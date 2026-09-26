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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_20;
extern int fn_82AA66A8();
extern int fn_82F6DCE0();


uint fn_82B46050(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    iVar7 = *(int *)(param_2 + 0x10);
    if ((*(uint *)(param_1 + 0x28) & 0x40000) == 0) {
      switch(iVar7) {
      case 0:
        uVar6 = *(uint *)(param_2 + 0x18);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      case 2:
        uVar6 = *(int *)(param_2 + 0x18) + 0x40;
        break;
      case 3:
        uVar6 = *(int *)(param_2 + 0x18) + 0x2d0;
        break;
      case 4:
      case 6:
      case 8:
      case 9:
        uVar6 = *(int *)(param_2 + 0x18) + 0x270;
        break;
      case 10:
        uVar6 = *(int *)(param_2 + 0x18) + 0x2b0;
        break;
      case 0xe:
        uVar6 = *(int *)(param_2 + 0x18) + 0x160;
        break;
      case 0xf:
        uVar6 = *(int *)(param_2 + 0x18) + 0x140;
        break;
      case 0x13:
        uVar6 = *(int *)(param_2 + 0x18) + 0x2d1;
      }
      iVar8 = uVar6 * 0x28;
      uVar3 = *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xc));
      iVar7 = 0;
      uVar4 = CONCAT44(uVar3,uVar3);
      while ((uVar4 & 7) == 5) {
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar8 = iVar8 + -0x28;
        uVar6 = uVar6 - 1;
        iVar7 = iVar7 + 1;
        uVar3 = *(undefined4 *)(iVar8 + *(int *)(param_1 + 0xc));
        uVar4 = CONCAT44(uVar3,uVar3);
      }
      *param_3 = iVar7;
    }
    else {
      if (iVar7 == 2) {
        uVar6 = 0;
        if (*(uint *)(param_1 + 0x10) != 0) {
          iVar7 = 0;
          do {
            uVar2 = *(uint *)(iVar7 + *(int *)(param_1 + 0xc));
            if ((uVar2 & 0x80000) != 0) {
              uVar1 = *(uint *)(iVar7 + *(int *)(param_1 + 0xc) + 4);
              uVar5 = uVar1 >> 4 & 7;
              if ((uVar5 == 2) || (uVar5 == 7)) {
                uVar2 = uVar2 >> 0x14 & 0x1ff;
                if ((uVar2 <= *(uint *)(param_2 + 0x18)) &&
                   (*(uint *)(param_2 + 0x18) < (uVar1 >> 0x10 & 0x1ff) + uVar2)) {
                  return uVar6;
                }
              }
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 0x28;
          } while (uVar6 < *(uint *)(param_1 + 0x10));
        }
        fn_82F6DCE0(auStack_20,10,0xffffffff820d87f0,*(undefined4 *)(param_2 + 0x18));
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdc1,auStack_20);
      }
      if (iVar7 != 4) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xde2);
      }
      if ((*(uint *)(param_2 + 0x18) < 0x20) || (0x25 < *(uint *)(param_2 + 0x18))) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdd4);
      }
      *param_3 = 0;
      uVar6 = (*(int *)(param_1 + 600) + *(int *)(param_2 + 0x18)) - 0x20;
    }
  }
  else {
    iVar7 = *(int *)(param_2 + 0x18) + -1;
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar7 = 0;
    }
    *param_3 = iVar7;
    iVar7 = *(int *)(param_2 + 0x2c);
    if ((iVar7 == 0) || (*(int *)(iVar7 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    uVar6 = *(uint *)(iVar7 + 0x10);
  }
  return uVar6;
}

