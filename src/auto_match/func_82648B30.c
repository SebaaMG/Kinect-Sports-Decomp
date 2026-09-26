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
extern int fn_8265C940();
extern int fn_8265C990();


undefined8 fn_82648B30(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *param_3 = 0;
  iVar3 = *(int *)(param_1 + 0x5510);
  piVar1 = (int *)(param_1 + 0x5510);
  while( true ) {
    piVar2 = piVar1;
    if ((iVar3 != -1) || (piVar1[1] != -1)) goto LAB_82648bd8;
    piVar2 = (int *)piVar1[3];
    if (piVar2 == (int *)0x0) break;
    iVar3 = *piVar2;
    piVar1 = piVar2;
  }
  piVar2 = (int *)fn_8265C940(0x1780,0x64800000);
  if (piVar2 != (int *)0x0) {
    iVar3 = fn_8265C940(0x1000,0xffffffffbc800000);
    piVar2[2] = iVar3;
    if (iVar3 != 0) {
      piVar1[3] = (int)piVar2;
LAB_82648bd8:
      uVar5 = 0;
      do {
        if (*(char *)(uVar5 + (int)piVar2) != -1) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
      uVar4 = 0;
      do {
        if ((*(byte *)(uVar5 + (int)piVar2) >> (uVar4 & 0x3f) & 1) == 0) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      *param_2 = piVar2;
      *(byte *)(uVar5 + (int)piVar2) = (byte)(1 << (uVar4 & 0x3f)) | *(byte *)(uVar5 + (int)piVar2);
      *param_3 = (uVar5 * 8 + uVar4) * 0x40 + piVar2[2];
      return 0;
    }
    fn_8265C990(piVar2,0x24800000);
  }
  return 0xffffffff8007000e;
}

