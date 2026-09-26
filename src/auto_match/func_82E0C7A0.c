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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82E0E0A8();
extern int fn_82E12A48();
extern unsigned int lbl_8214A854;


void fn_82E0C7A0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[0x1e];
  *param_1 = &lbl_8214A854;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x1d] != 0) {
    fn_82E0E0A8(param_1[0x1d],1);
  }
  fn_82CE4118(param_1[6]);
  if (param_1[0x1f] != 0) {
    fn_82CE4118();
  }
  param_1[0x1f] = 0;
  iVar3 = fn_82CE5410();
  piVar2 = *(int **)(iVar3 + 0x10);
  param_1[10] = 0;
  if ((param_1[0xb] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[9],param_1[0xb] & 0x3fffffff,4);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  fn_82E12A48(param_1);
  return;
}

