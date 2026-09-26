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
extern int fn_82586B60();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82628EE0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 4) == 0x2d) {
    uStack_28 = 1;
    uStack_24 = 8;
    iVar2 = fn_82586B60(iVar2 + 8);
    puVar1 = *(undefined4 **)(param_2 + 0x314);
    for (puVar5 = *(undefined4 **)(param_2 + 0x310); puVar5 < puVar1; puVar5 = puVar5 + 2) {
      if (puVar5[1] == iVar2) {
        (**(code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,&uStack_28);
      }
    }
  }
  else {
    if (*(int *)(iVar2 + 4) != 0x37) {
      return 4;
    }
    if ((*(uint *)(iVar2 + 8) & 0xffff) != 0) {
      for (piVar4 = *(int **)(param_2 + 0x310); piVar4 < *(int **)(param_2 + 0x314);
          piVar4 = piVar4 + 2) {
        piVar3 = (int *)*piVar4;
        if ((uint)*(ushort *)(piVar3 + 0x22e) == (*(uint *)(iVar2 + 8) & 0xffff)) goto LAB_82628f4c;
      }
      piVar3 = (int *)0x0;
LAB_82628f4c:
      if (piVar3 != (int *)0x0) {
        uStack_30 = 0x16;
        uStack_2c = 8;
        (**(code **)(*piVar3 + 0xc))(piVar3,&uStack_30);
      }
    }
  }
  return 3;
}

