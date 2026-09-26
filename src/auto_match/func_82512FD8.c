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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_82512FD8(int *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  uVar3 = (uint)param_2;
  if (0x15555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)((param_1[2] - *param_1) / 0xc) < uVar3) {
    puVar2 = (undefined4 *)0x0;
    if ((uVar3 != 0) &&
       (puVar2 = (undefined4 *)fn_8265C9E0(param_2 * 0xc), puVar2 == (undefined4 *)0x0)) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    puVar1 = (undefined4 *)param_1[1];
    puVar4 = puVar2;
    for (puVar7 = (undefined4 *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 3) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar7;
        puVar4[1] = puVar7[1];
        puVar4[2] = puVar7[2];
      }
      puVar4 = puVar4 + 3;
    }
    iVar6 = *param_1;
    iVar5 = param_1[1] - iVar6;
    if (iVar6 != 0) {
      for (; iVar6 != param_1[1]; iVar6 = iVar6 + 0xc) {
      }
      fn_8265CA20();
    }
    *param_1 = (int)puVar2;
    param_1[2] = (int)(puVar2 + uVar3 * 3);
    param_1[1] = (int)(puVar2 + (iVar5 / 0xc) * 3);
  }
  return;
}

