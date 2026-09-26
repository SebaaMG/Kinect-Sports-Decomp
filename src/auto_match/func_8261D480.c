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
extern unsigned int fStack_2c;
extern int fn_8255DA40();
extern int fn_82577EE0();
extern unsigned int lbl_82193D04;


undefined8 fn_8261D480(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  double extraout_f1;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float afStack_40 [4];
  undefined1 auStack_30 [4];
  float fStack_2c;
  
  if ((*(int *)(param_1 + 0x628) == 0) && (*(int *)(param_1 + 0x624) == 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    iVar4 = fn_8255DA40();
    dVar5 = (double)(float)((double)fStack_2c - extraout_f1);
    iVar4 = *(int *)(*(int *)(iVar4 + 0x4c) + 0x8c4);
    if (((iVar4 == 0) ||
        (dVar6 = extraout_f1, iVar4 = fn_82577EE0(iVar4,auStack_30,afStack_40,0), iVar4 == 0))
       || (uVar3 = 1, afStack_40[0] <= (float)(dVar6 * (double)lbl_82193D04 + dVar5))) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

