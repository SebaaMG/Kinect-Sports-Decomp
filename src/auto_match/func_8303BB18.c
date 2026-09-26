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
extern int fn_83004FC0();
extern unsigned int lbl_832642E0;


void fn_8303BB18(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    for (param_2 = (undefined4 *)*param_2; param_2 != (undefined4 *)0x0;
        param_2 = (undefined4 *)*param_2) {
      uVar1 = param_2[1];
      iVar3 = lbl_832642E0 + 4;
      RtlEnterCriticalSection(iVar3);
      for (piVar2 = *(int **)((uVar1 % 0xc1 + 7) * 4 + iVar3); piVar2 != (int *)0x0;
          piVar2 = (int *)piVar2[2]) {
        if (piVar2[3] == uVar1) {
          piVar2[1] = piVar2[1] + 1;
          RtlLeaveCriticalSection(iVar3);
          fn_83004FC0(piVar2,*(undefined4 *)(param_1 + 0x2c),0);
          (**(code **)(*piVar2 + 8))(piVar2);
          goto LAB_8303bbdc;
        }
      }
      RtlLeaveCriticalSection(iVar3);
LAB_8303bbdc:;}
  }
  return;
}

