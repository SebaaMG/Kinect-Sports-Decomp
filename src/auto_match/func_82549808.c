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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82555328();
extern int fn_82573EE0();
extern int fn_825B05A0();
extern int fn_825B5718();
extern int fn_82837AC8();
extern int fn_82837AE0();
extern unsigned int lbl_821954B0;


void fn_82549808(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar4;
  ulonglong uVar3;
  int iVar5;
  longlong lVar6;
  double dVar7;
  
  iVar4 = fn_8251F720();
  *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x1c0;
  fn_825B05A0(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x48),param_3);
  uVar3 = fn_82573EE0(iVar4,0xc);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82555328(uVar3,param_3,param_2);
  }
  puVar1 = *(undefined4 **)(*(int *)(iVar4 + 0x10) + 0x48);
  iVar5 = fn_82837AE0(*puVar1);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_82837AC8(*puVar1);
  }
  dVar2 = lbl_821954B0;
  if (iVar5 != 0) {
    lVar6 = 4;
    do {
      *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 0x94;
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      dVar7 = (double)*(uint *)(param_3 + 0x30);
      if ((double)(*(uint *)(param_3 + 0x30) - 0x10) < 0.0) {
        dVar7 = dVar2;
      }
      *(int *)(param_3 + 0x30) = (int)(longlong)dVar7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar5 = fn_82573EE0(iVar4,0);
  if (iVar5 != 0) {
    fn_82573EE0(iVar4);
    iVar5 = fn_825B5718();
    *(int *)(param_3 + 0x20) = iVar5 + *(int *)(param_3 + 0x20);
  }
  iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x44);
  if (iVar5 != 0) {
    fn_82549808(iVar5,param_2,param_3);
  }
  fn_8251FA58(iVar4);
  return;
}

