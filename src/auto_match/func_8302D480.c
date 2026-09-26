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
extern int fn_82FB9358();
extern int fn_82FB95B0();
extern int fn_8300CCD0();
extern int fn_8300CD08();


undefined8 fn_8302D480(int param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  piVar2 = *(int **)(param_1 + 0x88);
  if (*(short *)(param_1 + 0x11c) != 0) {
    puVar7 = (undefined4 *)(param_2 + 0x18);
    *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + -1;
    puVar3 = (undefined2 *)fn_82FB95B0(puVar7);
    if (puVar3 == (undefined2 *)0x0) {
      *(undefined2 *)(param_2 + 0x16) = 0;
      return 2;
    }
    *puVar3 = (short)param_3;
    fn_8300CCD0(param_2,param_3);
    uVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,param_3);
    *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - (uVar4 & 0xff);
    iVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    uVar4 = iVar5 + 0xffffU & 0xffff;
    uVar6 = (uint)*(ushort *)(param_1 + 0x11c);
    if (uVar4 <= *(ushort *)(param_1 + 0x11c)) {
      uVar6 = uVar4;
    }
    if (uVar6 < (uint)(*(int *)(param_2 + 0x1c) - (int)*puVar7 >> 1)) {
      uVar1 = *(undefined2 *)*puVar7;
      fn_8300CD08(param_2,uVar1);
      uVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,uVar1);
      *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + 1;
      *(uint *)(param_2 + 0x10) = (uVar4 & 0xff) + *(int *)(param_2 + 0x10);
      fn_82FB9358(puVar7,0);
    }
  }
  return 1;
}

