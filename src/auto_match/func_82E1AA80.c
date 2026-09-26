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
extern int fn_82CE5338();
extern int fn_82CE5410();


void fn_82E1AA80(undefined8 param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (0 < (int)param_3) {
    piVar6 = (int *)(param_2 + 8);
    do {
      iVar3 = 0;
      iVar4 = piVar6[-1];
      if (0 < *piVar6) {
        puVar5 = (undefined4 *)(iVar4 + -4);
        do {
          puVar5 = puVar5 + 2;
          uVar1 = *puVar5;
          iVar2 = fn_82CE5410();
          fn_82CE5338(*(undefined4 *)(iVar2 + 0x10),uVar1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar6);
      }
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),iVar4);
      iVar4 = piVar6[-2];
      iVar3 = fn_82CE5410();
      fn_82CE5338(*(undefined4 *)(iVar3 + 0x10),iVar4);
      param_3 = param_3 + -1;
      piVar6 = piVar6 + 5;
    } while (param_3 != 0);
  }
  iVar4 = fn_82CE5410();
  fn_82CE5338(*(undefined4 *)(iVar4 + 0x10),param_2);
  return;
}

