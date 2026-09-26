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
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_824CADA0(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x5555555 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((ulonglong)(uint)((int)(param_1[2] - *param_1) / 0x30) < (param_2 & 0xffffffff)) {
    uVar2 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      uVar2 = fn_8265C9E0(param_2 * 0x30);
      if (uVar2 == 0) {
        uStack_4c = 0;
        ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_50);
      }
    }
    uVar5 = *param_1;
    uVar1 = param_1[1];
    if (uVar5 != uVar1) {
      puVar4 = (undefined4 *)(uVar2 + 0x20);
      do {
        if (puVar4 != (undefined4 *)0x20) {
          fn_8223B688(puVar4 + -8,uVar5);
          puVar4[-1] = *(undefined4 *)(uVar5 + 0x1c);
          *puVar4 = *(undefined4 *)(uVar5 + 0x20);
          puVar4[1] = *(undefined4 *)(uVar5 + 0x24);
          puVar4[2] = *(undefined4 *)(uVar5 + 0x28);
          puVar4[3] = *(undefined4 *)(uVar5 + 0x2c);
        }
        uVar5 = uVar5 + 0x30;
        puVar4 = puVar4 + 0xc;
      } while (uVar5 != uVar1);
    }
    uVar5 = *param_1;
    uVar3 = (ulonglong)uVar5;
    uVar1 = param_1[1];
    if (uVar3 != 0) {
      if (uVar3 != uVar1) {
        do {
          fn_82230300(uVar3,1,0);
          uVar3 = uVar3 + 0x30;
        } while ((uVar3 & 0xffffffff) != (ulonglong)uVar1);
      }
      fn_8265CA20(*param_1);
    }
    *param_1 = uVar2;
    param_1[2] = (int)param_2 * 0x30 + uVar2;
    param_1[1] = ((int)(uVar1 - uVar5) / 0x30) * 0x30 + uVar2;
  }
  return;
}

