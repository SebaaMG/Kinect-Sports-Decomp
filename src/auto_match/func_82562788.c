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
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_828100D0();
extern unsigned int lbl_82193E50;


void fn_82562788(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fStack_30;
  float fStack_2c;
  undefined4 auStack_28 [2];
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  if ((*(uint *)(param_1 + 0xa8) & 1) == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x40U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
  }
  else {
    puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    fn_828100D0(auStack_20,&fStack_30,&fStack_2c,auStack_28,0);
    *(float *)(param_1 + 0x50) = -fStack_30;
    *(float *)(param_1 + 0x54) = fStack_2c + lbl_82193E50;
    *(undefined4 *)(param_1 + 0x58) = auStack_28[0];
  }
  *(undefined4 *)(param_1 + 0xd0) = 1;
  return;
}

