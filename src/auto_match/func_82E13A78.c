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
extern int fn_82CE3E48();
extern int fn_82CE5410();
extern int fn_82CFFFC8();
extern int fn_82D00020();
extern int fn_82D00060();
extern int fn_82D002A8();
extern int fn_82D002F0();
extern int fn_82D003F0();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214B274;


void fn_82E13A78(undefined4 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char acStack_30 [48];
  
  puVar4 = param_1 + 5;
  *param_1 = &lbl_8214B274;
  uVar2 = fn_82CFFFC8(puVar4);
  fn_82D002F0(acStack_30,puVar4,uVar2);
  while (acStack_30[0] != '\0') {
    fn_82D00020(puVar4,uVar2);
    fn_82CE3E48();
    uVar2 = fn_82D00060(puVar4,uVar2);
    fn_82D002F0(acStack_30,puVar4,uVar2);
  }
  fn_82D002A8(puVar4);
  fn_82D003F0(puVar4);
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1[2],param_1[4] & 0x3fffffff,4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = &lbl_8212FC60;
  return;
}

