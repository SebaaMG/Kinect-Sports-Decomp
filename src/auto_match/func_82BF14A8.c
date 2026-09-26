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
extern int fn_82BE1A10();
extern int fn_82BE1FF0();
extern int fn_82BE5240();
extern int fn_82BF4F80();
extern int fn_82BF5120();
extern int fn_82BF52A0();


void fn_82BF14A8(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  fn_82BE1A10();
  iVar2 = fn_82BE1FF0();
  if (((param_4 == 0) || (iVar2 == 0)) || (iVar2 = *(int *)(iVar2 + 0x4c), iVar2 == 0)) {
    fn_82BE5240(param_1,0x261,0xffffffff82196582);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(iVar1 + 0x24);
    }
    if (uVar4 < 0x400) {
      if (*(uint *)(param_4 + 0x18) != 0) {
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar1 + 0x18);
        }
        trapWord(6,(ulonglong)*(ushort *)(param_4 + 0x1c),0);
        fn_82BF4F80((double)(*(float *)(param_4 + 0x20) / (float)*(ushort *)(param_4 + 0x24)),
                          iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                          *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x40),
                          *(undefined8 *)(param_4 + 0x48),
                          (ulonglong)*(uint *)(param_4 + 0x18) /
                          (ulonglong)*(ushort *)(param_4 + 0x1c) & 0xffff);
      }
    }
    else {
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 0x24);
      }
      if (uVar4 < 0x800) {
        if (*(uint *)(param_4 + 0x18) != 0) {
          if (iVar1 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(iVar1 + 0x18);
          }
          trapWord(6,(ulonglong)*(ushort *)(param_4 + 0x1c),0);
          fn_82BF4F80((double)(*(float *)(param_4 + 0x20) / (float)*(ushort *)(param_4 + 0x24)
                                    ),iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                            *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x40),
                            *(undefined8 *)(param_4 + 0x48),
                            (ulonglong)*(uint *)(param_4 + 0x18) /
                            (ulonglong)*(ushort *)(param_4 + 0x1c) & 0xffff);
        }
      }
      else {
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(iVar1 + 0x24);
        }
        if (uVar4 < 0x1000) {
          if (*(ushort *)(param_4 + 0x2c) != 0) {
            if (iVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(iVar1 + 0x18);
            }
            fn_82BF5120((double)(*(float *)(param_4 + 0x28) /
                                      (float)*(ushort *)(param_4 + 0x2c)),iVar2,
                              (param_3 != 0) + '\x01',param_2,uVar3,*(undefined4 *)(param_4 + 0x34),
                              *(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x48));
          }
        }
        else {
          if (iVar1 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(iVar1 + 0x24);
          }
          if ((uVar4 < 0x2000) && (*(uint *)(param_4 + 0x18) != 0)) {
            if (iVar1 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(iVar1 + 0x18);
            }
            trapWord(6,(ulonglong)*(ushort *)(param_4 + 0x1c),0);
            fn_82BF52A0(iVar2,(param_3 != 0) + '\x01',param_2,uVar3,
                              *(undefined4 *)(param_4 + 0x34),*(undefined8 *)(param_4 + 0x40),
                              *(undefined8 *)(param_4 + 0x48),
                              (ulonglong)*(uint *)(param_4 + 0x18) /
                              (ulonglong)*(ushort *)(param_4 + 0x1c) & 0xffff);
          }
        }
      }
    }
  }
  return;
}

