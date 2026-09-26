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
extern int fn_82FFCAC8();
extern unsigned int lbl_832642E0;


void fn_82FFCF20(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar2 = lbl_832642E0;
  iVar3 = lbl_832642E0 + 0x674;
  RtlEnterCriticalSection(0xffffffff8326434c);
  RtlEnterCriticalSection(iVar3);
  iVar4 = iVar2 + 0x690;
  uVar5 = 0;
  piVar6 = *(int **)(iVar2 + 0x690);
  while (piVar6 == (int *)0x0) {
    uVar5 = uVar5 + 1;
    if (0xc0 < uVar5) goto joined_r0x82ffcf8c;
    piVar6 = *(int **)(uVar5 * 4 + iVar4);
  }
  do {
    while (piVar6[7] != 0) {
      (**(code **)(*piVar6 + 4))(piVar6);
      fn_82FFCAC8(param_1,piVar6,1);
      piVar1 = (int *)piVar6[2];
      while ((piVar1 == (int *)0x0 && (uVar5 = uVar5 + 1, uVar5 < 0xc1))) {
        piVar1 = *(int **)(uVar5 * 4 + iVar4);
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      piVar6 = piVar1;
joined_r0x82ffcf8c:
      if (piVar6 == (int *)0x0) {
        RtlLeaveCriticalSection(iVar3);
        RtlLeaveCriticalSection(0xffffffff8326434c);
        return;
      }
    }
    piVar6 = (int *)piVar6[2];
    while (piVar6 == (int *)0x0) {
      uVar5 = uVar5 + 1;
      if (0xc0 < uVar5) goto joined_r0x82ffcf8c;
      piVar6 = *(int **)(uVar5 * 4 + iVar4);
    }
  } while( true );
}

