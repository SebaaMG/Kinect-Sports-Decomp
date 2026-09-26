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
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();
extern int fn_82DA30B8();
extern unsigned int lbl_821423BC;


void fn_82DB6110(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)param_1[0x12];
  *param_1 = &lbl_821423BC;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(param_1 + 0xf,*(undefined4 *)(iVar3 + 0x10));
  fn_82BA02A8(param_1 + 0xf);
  iVar3 = fn_82CE5410();
  piVar2 = *(int **)(iVar3 + 0x10);
  param_1[0xd] = 0;
  if ((param_1[0xe] & 0x80000000) == 0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_1[0xc],param_1[0xe] & 0x3fffffff,0x70);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  fn_82DA30B8(param_1);
  return;
}

