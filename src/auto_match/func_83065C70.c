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
extern int fn_8265C9E0();
extern int fn_83066180();
extern int fn_83066210();
extern int fn_83066358();
extern unsigned int lbl_8217E8AC;
extern unsigned int lbl_8217E8B4;
extern unsigned int *lbl_83265080;


void fn_83065C70(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  
  lbl_83265080 = (undefined4 *)fn_8265C9E0(0x1c);
  *lbl_83265080 = param_1;
  lbl_83265080[1] = param_2;
  puVar4 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_8217E8AC;
  }
  lbl_83265080[2] = puVar4;
  puVar4 = (undefined4 *)fn_8265C9E0(4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_8217E8B4;
  }
  puVar2 = lbl_83265080;
  piVar1 = lbl_83265080 + 2;
  lbl_83265080[3] = puVar4;
  *(undefined4 *)(*piVar1 + 4) = param_1;
  *(undefined4 *)(puVar2[2] + 8) = param_2;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066180(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[4] = uVar5;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066210(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[5] = uVar5;
  uVar3 = fn_8265C9E0(0x18);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_83066358(uVar3,lbl_83265080[2],lbl_83265080[3]);
  }
  lbl_83265080[6] = uVar5;
  return;
}

