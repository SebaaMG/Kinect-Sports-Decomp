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
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826F6E98(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  uStack_30 = *(undefined4 *)(param_1 + 0x9e4);
  uStack_2c = 8;
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0xc))
                            (*(int *)(param_1 + 0x100) + 8,0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x9e4),&uStack_30);
  }
  piVar2 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0xc))
                            (*(int *)(param_1 + 0x100) + 8,0x22);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x9e4),&uStack_30);
  }
  piVar3 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 0x100) + 8) + 0xc))
                            (*(int *)(param_1 + 0x100) + 8,0x23);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x18))(piVar3,*(undefined4 *)(param_1 + 0x9e4),&uStack_30);
    fn_8267C4F0(piVar3);
  }
  if (piVar2 != (int *)0x0) {
    fn_8267C4F0(piVar2);
  }
  if (piVar1 != (int *)0x0) {
    fn_8267C4F0(piVar1);
  }
  return;
}

