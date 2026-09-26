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
extern unsigned int *auStack_30;
extern int fn_826F4E18();


void fn_826F4EC0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [48];
  
  if (*(int *)(param_1 + 0x2e8) == 1) {
    iVar1 = **(int **)(param_1 + 0x2ec);
    uVar4 = fn_826F4E18(auStack_30,param_1,param_1 + 0x2fc);
    pcVar2 = *(code **)(iVar1 + 0x44);
    piVar3 = *(int **)(param_1 + 0x2ec);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x20);
    iVar1 = *piVar3;
    uVar4 = fn_826F4E18(auStack_30,param_1,*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0);
    (**(code **)(iVar1 + 8))(piVar3,uVar4);
    piVar3 = *(int **)(param_1 + 0x20);
    iVar1 = *piVar3;
    uVar4 = fn_826F4E18(auStack_30,param_1,param_1 + 0x308);
    pcVar2 = *(code **)(iVar1 + 0xc);
  }
  (*pcVar2)(piVar3,uVar4);
  return;
}

