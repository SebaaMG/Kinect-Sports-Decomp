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
extern unsigned int *auStack_50;
extern int fn_82695520();
extern int fn_82696330();
extern int fn_8269F500();


void fn_826993D0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_50 [80];
  
  uVar5 = (ulonglong)(uint)param_1[1];
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      piVar2 = *(int **)(iVar6 + *param_1);
      if ((*(byte *)((int)piVar2 + 0x66) & 0x80) != 0) {
        iVar4 = piVar2[0x20];
        if (iVar4 == 0) {
          iVar4 = fn_8269F500(piVar2);
        }
        if (iVar4 == 0) {
          iVar4 = (**(code **)(*piVar2 + 0x58))(piVar2);
          iVar4 = *(int *)(iVar4 + 0x78);
        }
        if (*(int *)(*(int *)(iVar4 + 8) + 0x10) != 0) {
          iVar1 = *param_2;
          uVar3 = fn_82695520(auStack_50,piVar2);
          (**(code **)(iVar1 + 4))(param_2,(int *)(iVar4 + 8),uVar3,0);
          fn_82696330(auStack_50);
        }
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 != 0);
  }
  return;
}

