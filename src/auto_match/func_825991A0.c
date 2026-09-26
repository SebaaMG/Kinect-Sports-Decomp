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
extern int fn_82522DF8();
extern int fn_82598DF0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE5410();
extern int fn_82CE93A0();
extern int fn_82CE93F8();
extern int fn_82D80A60();
extern int fn_82D80A68();
extern int fn_82D80A78();
extern int fn_82D81720();
extern int fn_82D818E0();
extern int fn_82D842D0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_83296E18;
extern unsigned int uStack_3c;


void fn_825991A0(double param_1,double param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  char cVar5;
  undefined4 *puVar4;
  undefined1 auStack_50 [20];
  undefined4 uStack_3c;
  
  iVar2 = fn_82599308();
  if ((*(int *)(iVar2 + 4) == 0) && ((param_4 & 0xffffffff) != 0)) {
    fn_82CE93A0(auStack_50);
    uStack_3c = 0xb;
    iVar2 = fn_82CE5410();
    uVar1 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x1c0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82CE93F8(uVar1,auStack_50);
    }
    iVar2 = fn_82599308();
    *(undefined4 *)(iVar2 + 4) = uVar3;
    iVar2 = fn_82599308();
    fn_82D80A78(*(undefined4 *)(iVar2 + 4));
    fn_82598DF0(auStack_50);
  }
  if ((double)(float)(param_2 * (double)lbl_8218E8FC) < param_1) {
    param_1 = (double)(float)(param_2 * (double)lbl_8218E8FC);
  }
  fn_82D80A60(param_1,param_3);
  fn_82D818E0(param_3);
  while( true ) {
    cVar5 = fn_82D80A68(param_3);
    if (cVar5 != '\0') break;
    if ((param_4 & 0xffffffff) == 0) {
      fn_82D81720(param_2,param_3);
    }
    else {
      iVar2 = fn_82599308();
      fn_82D842D0(param_2,param_3,*(undefined4 *)(iVar2 + 4),param_4);
    }
  }
  puVar4 = (undefined4 *)fn_82522DF8(0x40);
  *puVar4 = 5;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar4[1] = uVar3;
  puVar4[2] = 0;
  sync(1);
  fn_82BFE128(lbl_83296E18,puVar4);
  return;
}

