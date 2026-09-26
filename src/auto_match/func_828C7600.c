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
extern int fn_825089A0();
extern int fn_8287C3E8();
extern int fn_8288B6C0();
extern int fn_8288F1E8();
extern int fn_82894560();
extern int fn_8289F350();
extern int fn_828B5580();
extern unsigned int lbl_82026230;


undefined8 fn_828C7600(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar6;
  ulonglong uVar4;
  char cVar8;
  int *piVar7;
  undefined8 uVar5;
  double dVar9;
  undefined1 auStack_20 [8];
  
  iVar6 = fn_8289F350(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x8c));
  if ((*(char *)(param_1 + 0xa4) == '\0') || (bVar3 = true, iVar6 == 0)) {
    bVar3 = false;
  }
  *(bool *)(param_1 + 0xa4) = bVar3;
  if (bVar3) {
    uVar4 = fn_8288F1E8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x80);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_82894560(uVar4,*(undefined1 *)(param_1 + 0xa5),*(undefined4 *)(param_1 + 0x88),
                        *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x8c),
                        param_1 + 0x90);
      return 1;
    }
    cVar8 = fn_8287C3E8((double)*(float *)(param_1 + 0xa0));
    if (cVar8 != '\0') {
      piVar7 = (int *)fn_825089A0();
      dVar9 = (double)(**(code **)(*piVar7 + 8))();
      *(float *)(param_1 + 0xa0) = (float)dVar9;
    }
    piVar7 = (int *)fn_825089A0();
    dVar9 = (double)(**(code **)(*piVar7 + 8))();
    if ((float)(dVar9 - (double)*(float *)(param_1 + 0xa0)) <= lbl_82026230) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x6c);
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    uVar5 = fn_828B5580(auStack_20,param_1 + 0x80);
    fn_8288B6C0(uVar1,uVar5,uVar2);
  }
  return 1;
}

