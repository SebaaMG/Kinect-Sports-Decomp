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
extern int fn_82230040();
extern int fn_82468D38();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_3c;


undefined4 * fn_82468E48(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  bVar2 = false;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = (int)(param_2[2] - param_2[1]) / 0x14;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (uVar1 != 0) {
    if (0xccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = fn_8265C9E0((longlong)(int)uVar1 * 0x14);
      if (uVar3 == 0) {
        uStack_3c = 0;
        ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_40);
      }
    }
    param_1[1] = uVar3;
    param_1[2] = uVar3;
    bVar2 = true;
    param_1[3] = uVar1 * 0x14 + uVar3;
  }
  if (bVar2) {
    uVar4 = (ulonglong)(uint)param_2[1];
    uVar1 = param_2[2];
    uVar5 = (ulonglong)(uint)param_1[1];
    if (uVar4 != uVar1) {
      do {
        if ((uVar5 & 0xffffffff) != 0) {
          fn_82468D38(uVar5,uVar4);
        }
        uVar4 = uVar4 + 0x14;
        uVar5 = uVar5 + 0x14;
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar1);
    }
    param_1[2] = (int)uVar5;
  }
  return param_1;
}

