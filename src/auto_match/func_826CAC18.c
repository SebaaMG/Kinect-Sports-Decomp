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
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_826C59F8();
extern int fn_826C8590();
extern int fn_826CAB68();
extern int fn_827583F8();
extern unsigned int lbl_82005CCC;
extern unsigned char lbl_8200BED8[];
extern unsigned int lbl_821AAD20;


void fn_826CAC18(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  double dVar7;
  
  iVar5 = fn_826C59F8();
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_826C8590(iVar5,1);
      fn_827583F8(*(undefined4 *)(iVar5 + 0x1b8));
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar4 = fn_82697700(uVar3,uVar1);
      uVar6 = uVar4 | 0xff000000;
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        dVar7 = (double)fn_826972E0(uVar3,uVar1);
        fVar2 = (float)dVar7 * (float)(((U64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF);
        if (lbl_82005CCC <= (float)dVar7 * (float)(((U64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF)) {
          fVar2 = lbl_82005CCC;
        }
        if (fVar2 < 0.0) {
          fVar2 = lbl_821AAD20;
        }
        uVar6 = ((longlong)fVar2 & 0xffU) << 0x18 | uVar4 & 0xffffff;
      }
      fn_826CAB68(iVar5,uVar6);
    }
  }
  return;
}

