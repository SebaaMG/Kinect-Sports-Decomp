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


void fn_824BFB68(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if (0x1fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  if ((uint)(param_1[2] - *param_1 >> 3) < param_2) {
    puVar2 = (undefined4 *)0x0;
    if ((param_2 != 0) &&
       (puVar2 = (undefined4 *)fn_8265C9E0(((ulonglong)param_2 & 0x1fffffff) << 3),
       puVar2 == (undefined4 *)0x0)) {
      uStack_2c = 0;
      ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_30);
    }
    puVar1 = (undefined4 *)param_1[1];
    puVar3 = puVar2;
    for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 2) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
      }
      puVar3 = puVar3 + 2;
    }
    iVar5 = *param_1;
    iVar4 = param_1[1] - iVar5;
    if (iVar5 != 0) {
      for (; iVar5 != param_1[1]; iVar5 = iVar5 + 8) {
      }
      fn_8265CA20();
    }
    *param_1 = (int)puVar2;
    param_1[2] = (int)(puVar2 + param_2 * 2);
    param_1[1] = (int)(puVar2 + (iVar4 >> 3) * 2);
  }
  return;
}

