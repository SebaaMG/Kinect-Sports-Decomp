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
extern int fn_82CE5410();
extern int fn_82CE5458();
extern int fn_82CEA160();
extern int fn_82DEAEB8();


void fn_82DEAF60(double param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  char acStack_40 [4];
  float afStack_3c [15];
  
  uVar3 = (ulonglong)*(uint *)(param_3 + 0x98);
  if (uVar3 == 0) {
    iVar1 = fn_82CE5410();
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x30);
    *(undefined2 *)(iVar1 + 4) = 0x30;
    uVar3 = fn_82DEAEB8(iVar1,param_2,param_3);
  }
  afStack_3c[0] = (float)param_1;
  fn_82CE5458(acStack_40,afStack_3c);
  cVar2 = acStack_40[0];
  if (acStack_40[0] == '\0') {
    cVar2 = '\x01';
  }
  acStack_40[0] = cVar2;
  iVar1 = fn_82CE5410();
  fn_82CEA160(uVar3 + 0x1c,*(undefined4 *)(iVar1 + 0x10),param_4,cVar2);
  return;
}

