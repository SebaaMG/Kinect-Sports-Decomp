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
extern int fn_82A1BB18();
extern int fn_82A403F0();
extern int fn_82A406A0();
extern int fn_82A41998();
extern int fn_82A4F4E0();


void fn_82A4AAA0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 4);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x34);
  iVar2 = fn_82A1BB18();
  if ((iVar2 == *(int *)(iVar3 + 0xac)) || (*(int *)(param_1 + 0x74) != 0)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c)
    ;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x54))(piVar1);
    if (iVar3 == 4) {
      fn_82A406A0(*(undefined4 *)(param_1 + 0x34),1);
    }
    fn_82A41998(*(undefined4 *)(param_1 + 0x34),piVar1);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c)
    ;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 0xb0) + 0x40))();
    (**(code **)(*piVar1 + 0x50))(piVar1);
    fn_82A403F0(*(undefined4 *)(param_1 + 0x34));
    (**(code **)(**(int **)(*(int *)(param_1 + 0x34) + 0xb0) + 0x44))();
    (**(code **)(*piVar1 + 0x4c))(piVar1,0);
    fn_82A4F4E0();
  }
  return;
}

