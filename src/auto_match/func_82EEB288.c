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
extern int fn_82A28568();
extern int fn_82A2A360();


void fn_82EEB288(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = fn_82A2A360();
  piVar3 = (int *)fn_82A28568(uVar2,0,uVar1);
  if (piVar3 != (int *)0x0) {
    puVar6 = (undefined4 *)0x0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0xc);
    uVar7 = 0;
    *piVar3 = (int)(((ulonglong)*(uint *)(param_1 + 0x28) + (longlong)(int)piVar3 + 0x1f >> 5 &
                    0xffffffff) << 5);
    puVar4 = puVar6;
    if (*(int *)(param_1 + 0x10) != 0) {
      do {
        iVar5 = *(int *)(param_1 + 0x18) * uVar7;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x14) + *piVar3);
        puVar6[1] = puVar4;
        *puVar6 = piVar3;
        puVar4 = puVar6;
      } while (uVar7 < *(uint *)(param_1 + 0x10));
    }
    piVar3[2] = (int)puVar6;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[1] = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}

