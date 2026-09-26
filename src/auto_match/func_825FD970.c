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
extern int fn_822315A0();
extern int fn_827D5070();


void fn_825FD970(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)fn_827D5070(*param_1);
  if (*piVar3 != 0) {
    *piVar3 = *piVar3 + (int)piVar3;
  }
  if (piVar3[1] != 0) {
    piVar3[1] = piVar3[1] + (int)piVar3;
  }
  iVar5 = 0;
  if (*(short *)(piVar3 + 2) != 0) {
    iVar6 = 0;
    do {
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(iVar6 + piVar3[1]);
      iVar6 = iVar6 + 8;
      *piVar4 = *piVar4 + (int)piVar3;
    } while (iVar5 < (int)(uint)*(ushort *)(piVar3 + 2));
  }
  puVar1 = (uint *)*piVar3;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    *puVar1 = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
              ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
    uVar2 = puVar1[1];
    puVar1[1] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
    uVar2 = puVar1[2];
    puVar1[2] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 |
                ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

