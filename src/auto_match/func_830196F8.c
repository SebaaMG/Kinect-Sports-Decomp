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
extern int fn_82FA5190();
extern unsigned int uStack00000018;


void fn_830196F8(undefined4 *param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uStack00000018;
  
  uVar6 = (param_2 & 0xffffffff) + (param_2 >> 0x20);
  iVar4 = (int)((uVar6 + ((uVar6 & 0xffffffff) / 0xc1) * -0xc1 + 1 & 0xffffffff) << 2);
  piVar2 = *(int **)(iVar4 + (int)param_1);
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      if (((ulonglong)(uint)piVar2[1] != param_2 >> 0x20) ||
         (bVar3 = true, (ulonglong)(uint)piVar2[2] != (param_2 & 0xffffffff))) {
        bVar3 = false;
      }
      if (bVar3) break;
      piVar1 = (int *)*piVar2;
      piVar5 = piVar2;
      piVar2 = piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (piVar2 != (int *)0x0) {
      if (piVar5 == (int *)0x0) {
        *(int *)(iVar4 + (int)param_1) = *piVar2;
      }
      else {
        *piVar5 = *piVar2;
      }
      uStack00000018 = param_2;
      fn_82FA5190(*param_1);
      param_1[0xc2] = param_1[0xc2] + -1;
    }
  }
  return;
}

