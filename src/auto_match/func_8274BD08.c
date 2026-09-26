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
extern int fn_8267C4F0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826972E0();
extern int fn_826A7398();


void fn_8274BD08(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar4;
  int *piVar5;
  undefined8 uVar3;
  undefined1 uVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar4 = fn_826A7398();
    piVar5 = (int *)(**(code **)(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x1b);
    uVar6 = 0;
    if (piVar5 != (int *)0x0) {
      iVar4 = *piVar5;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      dVar7 = (double)fn_826972E0(uVar3,uVar1);
      uVar6 = (**(code **)(iVar4 + 4))(piVar5,(longlong)dVar7 & 0xffffffff);
    }
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    puVar2[4] = uVar6;
    *puVar2 = 2;
    if (piVar5 != (int *)0x0) {
      fn_8267C4F0(piVar5);
    }
  }
  return;
}

