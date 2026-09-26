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
extern int fn_8228E7E8();
extern int fn_8265C9E0();


void fn_822A96A8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + param_2 * 0x10);
  piVar5 = (int *)(iVar2 + 0x44);
  if (piVar5 != (int *)0x0) {
    if ((*piVar5 != 0) && (iVar2 != -0x48)) {
      uVar4 = (ulonglong)*(uint *)(iVar2 + 0x48);
      if (uVar4 != (uVar4 - 1) + (ulonglong)(uVar4 == 0)) {
        uVar4 = fn_8265C9E0(0x98);
        if ((uVar4 & 0xffffffff) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = fn_8228E7E8((double)*(float *)(iVar2 + 0x40),uVar4,
                                  *(undefined4 *)(param_1 + 4),piVar5,(uint *)(iVar2 + 0x48),
                                  param_1 + 0x24,iVar2 + 0x4c,iVar2 + 0x50);
        }
        puVar1 = *(undefined4 **)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(int *)(param_1 + 0x30) = param_2;
      }
    }
  }
  return;
}

