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
extern int fn_82FB1B58();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82160788;


undefined8 fn_82FB0C10(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  
  dVar7 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 4);
  if (lbl_82005710 < dVar7) {
    puVar4 = (undefined4 *)fn_82FB1B58(param_1 + 0x98);
    if (puVar4 == (undefined4 *)0x0) {
      return 2;
    }
    *puVar4 = *param_2;
    dVar3 = lbl_82160788;
    dVar7 = dVar7 * lbl_82160788;
    puVar4[1] = param_2[1];
    puVar4[2] = (int)((*(double *)(param_2 + 2) + *(double *)(param_2 + 4)) * dVar3);
    puVar4[3] = (int)dVar7;
    uVar1 = (uint)(*(double *)(param_2 + 8) * dVar3);
    trapWord(6,(ulonglong)uVar1,0);
    puVar4[4] = uVar1;
    uVar2 = (uint)(*(double *)(param_2 + 4) * dVar3);
    lVar5 = (ulonglong)uVar2 - (longlong)((int)uVar2 / (int)uVar1) * (longlong)(int)uVar1;
    iVar6 = (int)lVar5;
    puVar4[5] = iVar6;
    trapWord(5,(ulonglong)uVar1 &
               ~((((ulonglong)uVar2 & 0x7fffffff) << 1 | (ulonglong)(uVar2 >> 0x1f)) - 1),0xffff);
    if (lVar5 < 0) {
      puVar4[5] = uVar1 + iVar6;
    }
  }
  return 1;
}

