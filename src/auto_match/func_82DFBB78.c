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


void fn_82DFBB78(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_30 [48];
  
  puVar1 = (undefined1 *)(**(code **)(*param_2 + 0x18))(auStack_30,param_2);
  *(undefined1 *)((int)param_5 + 0xd) = *puVar1;
  dVar4 = (double)(**(code **)(*param_2 + 0x10))(param_2,param_4,param_5);
  param_5[1] = (float)dVar4;
  dVar4 = (double)(**(code **)(*param_2 + 0x14))(param_2,param_4,param_5);
  *param_5 = (float)dVar4;
  iVar2 = 0;
  if (0 < param_2[0xb]) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(float *)((int)param_5[2] + iVar3) = *(float *)(param_2[10] + iVar3) * param_5[1];
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_2[0xb]);
  }
  (**(code **)(*param_2 + 0x1c))(param_1,param_2);
  return;
}

