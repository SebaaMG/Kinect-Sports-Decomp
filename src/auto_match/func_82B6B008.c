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


undefined4 *
fn_82B6B008(longlong param_1,int param_2,code *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar2 = param_2 + 7U & 0xfffffff8;
  puVar3 = (undefined4 *)(*param_3)(param_5,0x20);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_3;
    iVar1 = (int)param_1;
    puVar3[1] = param_4;
    puVar3[2] = (int)param_5;
    puVar3[4] = uVar2;
    piVar4 = (int *)(*param_3)(param_5,(longlong)(iVar1 + 1) * (longlong)(int)uVar2);
    if (piVar4 == (int *)0x0) {
      (*param_4)(param_5,puVar3);
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[3] = piVar4;
      puVar3[5] = iVar1;
      puVar3[6] = iVar1;
      puVar3[7] = 0;
      if (0 < iVar1) {
        do {
          *piVar4 = (int)((int)piVar4 + uVar2);
          param_1 = param_1 + -1;
          piVar4 = (int *)((int)piVar4 + uVar2);
        } while (param_1 != 0);
      }
    }
  }
  return puVar3;
}

