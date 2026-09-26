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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82F53548();
extern int fn_82F564D8();
extern int fn_82F59C30();
extern int fn_82F59F48();
extern int fn_8306ED28();
extern int fn_8306ED30();
extern unsigned int lbl_821AAD20;


void fn_82F511A8(int param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_70 [4];
  float fStack_6c;
  undefined1 auStack_60 [96];
  
  fVar2 = lbl_821AAD20;
  if (param_5 == 0) {
    *param_2 = lbl_821AAD20;
    *param_3 = fVar2;
    fStack_78 = fVar2;
  }
  else {
    uVar5 = **(undefined4 **)(param_1 + 4);
    fn_82F564D8(auStack_70,uVar5,4);
    iVar3 = fn_82F564D8(auStack_60,uVar5,8);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    dVar4 = (double)lbl_821AAD20;
    fStack_6c = lbl_821AAD20;
    fn_82F53548();
    uVar5 = **(undefined4 **)(param_1 + 4);
    fn_82F564D8(auStack_60,uVar5,0xc);
    iVar3 = fn_82F564D8(auStack_70,uVar5,0x10);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    fn_8306ED30();
    puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    fStack_6c = (float)dVar4;
    fn_82F53548();
    fn_8306ED28();
    fn_82F53548();
    fn_82F59F48();
    fn_82F59C30(&fStack_80);
    *param_2 = fStack_80;
    *param_3 = fStack_7c;
  }
  *param_4 = fStack_78;
  return;
}

