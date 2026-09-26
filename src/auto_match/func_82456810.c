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
extern int fn_8228E658();
extern int fn_823210A8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_4c;


void fn_82456810(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 3) < param_2) {
    puVar3 = (undefined4 *)0x0;
    if ((param_2 != 0) &&
       (puVar3 = (undefined4 *)fn_8265C9E0(param_2 & 0x1fffffff), puVar3 == (undefined4 *)0x0)
       ) {
      uStack_4c = 0;
      ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_50);
    }
    uVar1 = param_1[1];
    puVar4 = puVar3;
    for (uVar5 = (ulonglong)*param_1; (uVar5 & 0xffffffff) != (ulonglong)uVar1; uVar5 = uVar5 + 8) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        fn_8228E658(puVar4,uVar5);
      }
      puVar4 = puVar4 + 2;
    }
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (uVar1 != 0) {
      fn_823210A8();
      fn_8265CA20(*param_1);
    }
    *param_1 = (uint)puVar3;
    param_1[2] = (uint)(puVar3 + param_2 * 2);
    param_1[1] = (uint)(puVar3 + ((int)(uVar2 - uVar1) >> 3) * 2);
  }
  return;
}

