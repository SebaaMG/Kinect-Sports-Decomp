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
extern int fn_829EC230();
extern int fn_82A28568();
extern unsigned int lbl_82079AD0;
extern unsigned int lbl_832179FC;


undefined8
fn_829E8E50(int param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,int param_5,
             uint param_6,int param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) != 0) {
    piVar1 = *(int **)(param_1 + 0x2c);
    if ((piVar1 != (int *)0x0) && (1 < piVar1[3])) {
      (**(code **)(*piVar1 + 8))();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x14);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[3] = 1;
        *puVar2 = &lbl_82079AD0;
      }
      *(undefined4 **)(param_1 + 0x2c) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 4) = 0x8007000e;
        return 0xffffffff8007000e;
      }
    }
    uVar3 = fn_829EC230(puVar2,param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    *(int *)(param_1 + 0x1c) = param_5 * param_7;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(int *)(param_1 + 0x18) = param_5;
    *(int *)(param_1 + 0x20) = param_7;
    *(uint *)(param_1 + 0x24) = param_6;
    if ((param_2 & 0x3f) == 0) {
      iVar4 = ((uint)LZCOUNT(param_6 & 0x3f) >> 5) + 3;
    }
    else if ((param_2 & 0xf) == 0) {
      iVar4 = ((uint)LZCOUNT(param_6 & 0xf) >> 5) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x30) = iVar4;
    *(undefined4 *)(param_1 + 8) = param_8;
  }
  return 0;
}

