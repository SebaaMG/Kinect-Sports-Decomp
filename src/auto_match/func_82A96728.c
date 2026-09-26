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
extern unsigned int *auStack_40;
extern unsigned int *auStack_4c;
extern int fn_82AA75B8();
extern unsigned int iStack_44;
extern unsigned int uStack_50;


void fn_82A96728(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  uint uStack_50;
  uint auStack_4c [2];
  int iStack_44;
  undefined1 auStack_40 [64];
  
  piVar5 = (int *)(param_2 + 0xc);
  piVar3 = &iStack_44;
  lVar4 = 4;
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010010;
  puVar2[1] = in_register_00010014;
  puVar2[2] = in_register_00010018;
  puVar2[3] = in_vr1;
  do {
    piVar3 = piVar3 + 1;
    uStack_50 = *piVar3 << (piVar5[8] & 0x3fU) & piVar5[4];
    fn_82AA75B8(auStack_4c,&uStack_50,0x40001);
    iVar1 = *piVar5;
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 1;
    *(uint *)(iVar1 * 4 + param_1) = auStack_4c[0] | *(uint *)(iVar1 * 4 + param_1);
  } while (lVar4 != 0);
  return;
}

