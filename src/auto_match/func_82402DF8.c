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
extern int fn_82359558();
extern int fn_82359C18();
extern int fn_82402CF8();
extern int fn_82455740();
extern unsigned int iStack_2c;
extern unsigned int lbl_821B7B74;


void fn_82402DF8(double param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuStack_30;
  int iStack_2c;
  undefined ***pppuStack_20;
  
  *(float *)(param_2 + 0x280) = (float)(param_1 + (double)*(float *)(param_2 + 0x280));
  if (*(int *)(param_2 + 0x294) == 0) {
    if (*(int *)(param_2 + 0x298) == 0) {
      if (*(int *)(param_2 + 0x29c) == 0) {
        if (*(int *)(param_2 + 0x2a0) == 0) {
          uVar1 = *(uint *)(param_2 + 0x27c);
          if (uVar1 != 0) {
            if (uVar1 != 1) {
              if (uVar1 < 3) {
                if (*(int *)(param_2 + 0x288) != 0) {
                  uVar2 = 3;
                  goto LAB_82402f7c;
                }
                if (*(int *)(param_2 + 0x28c) != 0) {
                  return;
                }
              }
              else {
                if (uVar1 == 3) {
                  if (*(int *)(param_2 + 0x288) != 0) {
                    return;
                  }
                  if (*(int *)(param_2 + 0x28c) != 0) {
                    /* WARNING: Subroutine does not return */
                    fn_82359558(*(undefined4 *)(param_2 + 0x240),
                                      *(undefined4 *)(param_2 + 0x10));
                  }
                  uVar3 = 0;
                  uVar2 = 0;
                  goto LAB_82402f80;
                }
                if (6 < uVar1) {
                  return;
                }
              }
            }
            uVar2 = 0;
            goto LAB_82402f7c;
          }
          if (*(int *)(param_2 + 0x288) == 0) {
            if (*(int *)(param_2 + 0x28c) == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            fn_82359558(*(undefined4 *)(param_2 + 0x240),*(undefined4 *)(param_2 + 0x10));
          }
        }
        else {
          if (*(int *)(param_2 + 0x2a4) == 0) {
            pppuStack_20 = &ppuStack_30;
            ppuStack_30 = &lbl_821B7B74;
            iStack_2c = param_2;
            fn_82455740((ulonglong)*(uint *)(param_2 + 0x240) + 0x7f0,&ppuStack_30);
            fn_82359C18(&ppuStack_30);
            *(undefined4 *)(param_2 + 0x2a4) = 1;
          }
          if (*(int *)(param_2 + 0x288) == 0) {
            return;
          }
        }
        uVar3 = 0;
        uVar2 = 3;
        goto LAB_82402f80;
      }
      uVar2 = 5;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 4;
  }
LAB_82402f7c:
  uVar3 = 1;
LAB_82402f80:
  fn_82402CF8(param_2,uVar2,uVar3);
  return;
}

