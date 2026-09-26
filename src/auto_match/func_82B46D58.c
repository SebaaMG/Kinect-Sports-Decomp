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
extern int fn_82B467D8();
extern int fn_82B46988();


int fn_82B46D58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 1)) {
    if (*(int *)(param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iVar6 = 0;
    for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar3 = fn_82B467D8(param_1,iVar1,iVar3,0xffffffff8202df2c);
      iVar7 = iVar6;
      if (((((*(uint *)(param_1 + 0x28) & 0x10000) != 0) && (*(int *)(iVar1 + 4) == 0x1b)) &&
          (*(int *)(iVar1 + 0x30) == 5)) &&
         (((iVar4 = *(int *)(iVar1 + 0x34), iVar7 = iVar3, iVar4 == 2 || (iVar4 == 4)) ||
          ((iVar4 == 6 || (iVar4 == 0xe)))))) {
        iVar4 = fn_82B46988(param_1);
        *(undefined4 *)(iVar4 + 0x10) = 1;
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar3 + 0xc);
          iVar2 = iVar3;
          while (iVar6 != 0) {
            iVar2 = *(int *)(iVar2 + 0xc);
            iVar6 = *(int *)(iVar2 + 0xc);
          }
          iVar6 = fn_82B467D8(param_1,iVar4,0,0xffffffff8202df2c);
          *(int *)(iVar2 + 0xc) = iVar6;
        }
        else {
          uVar5 = fn_82B467D8(param_1,*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),
                                0xffffffff8202df2c);
          *(undefined4 *)(iVar6 + 0xc) = uVar5;
          *(int *)(iVar6 + 8) = iVar4;
        }
      }
      iVar6 = iVar7;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

