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


void fn_82A4AAC0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  iVar2 = param_1[0xc];
  iVar1 = fn_82A1BB18();
  if ((iVar1 == *(int *)(iVar2 + 0xac)) || (param_1[0x1c] != 0)) {
    (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x54))(param_1);
    if (iVar2 == 4) {
      fn_82A406A0(param_1[0xc],1);
    }
    fn_82A41998(param_1[0xc],param_1);
    (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
    (**(code **)(**(int **)(param_1[0xc] + 0xb0) + 0x40))();
    (**(code **)(*param_1 + 0x50))(param_1);
    fn_82A403F0(param_1[0xc]);
    (**(code **)(**(int **)(param_1[0xc] + 0xb0) + 0x44))();
    (**(code **)(*param_1 + 0x4c))(param_1,0);
    fn_82A4F4E0();
  }
  return;
}

