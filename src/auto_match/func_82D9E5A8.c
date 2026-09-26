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
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern int fn_82D9D718();
extern int fn_8309FA20();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E5A8(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar1 = *(int *)(iVar1 + 4);
  uStack_34 = lbl_82002C5C;
  puVar2 = (undefined4 *)((iVar1 + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  dVar5 = (double)fn_82D9D718(iVar1,param_5);
  puVar2 = (undefined4 *)*param_3;
  fStack_38 = (float)dVar5;
  uStack_40 = *puVar2;
  *param_3 = puVar2 + 4;
  dVar4 = (double)lbl_821AAD20;
  uStack_3c = puVar2[1];
  if (((dVar5 < dVar4) && (dVar4 < (double)(float)puVar2[2])) &&
     (lbl_8201DD74 < (float)((double)(float)puVar2[2] - dVar5))) {
    fStack_38 = (float)(dVar5 + (double)lbl_82015468);
    dVar5 = (double)fStack_38;
  }
  if (((dVar4 < dVar5) && ((double)(float)puVar2[2] < dVar4)) &&
     (lbl_8201DD74 < (float)(dVar5 - (double)(float)puVar2[2]))) {
    fStack_38 = (float)(dVar5 - (double)lbl_82015468);
    dVar5 = (double)fStack_38;
  }
  puVar2[2] = (float)dVar5;
  fn_8309FA20(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

