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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8240D930();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_8258DE50();
extern int fn_8258DF98();
extern int fn_8258E3A8();
extern int fn_8265C990();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82A93F08();
extern int fn_82F68CC0();


undefined8 fn_825F0B68(int param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char acStack_80 [4];
  int aiStack_7c [3];
  undefined1 auStack_70 [112];
  
  if (((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) {
    param_4 = param_4 * 4;
    iVar2 = *(int *)(*(int *)(param_1 + 0xb8) + param_4);
    if (iVar2 != 0) {
      fn_82522ED8(iVar2);
      uVar4 = *(undefined4 *)(param_1 + 0xb4);
      uVar3 = fn_8240D930(*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_4));
      uVar3 = fn_82230110(auStack_70,uVar3);
      uVar1 = *(undefined4 *)(param_1 + 0xc0);
      fn_8258E3A8(aiStack_7c,uVar1,uVar3);
      lVar5 = (ulonglong)*(uint *)(aiStack_7c[0] + 0x2c) - 1;
      *(int *)(aiStack_7c[0] + 0x2c) = (int)lVar5;
      if (lVar5 == 0) {
        fn_8265C990(*(undefined4 *)(aiStack_7c[0] + 0x28),uVar4);
        *(undefined4 *)(aiStack_7c[0] + 0x28) = 0;
        fn_8258DF98(aiStack_7c,uVar1,aiStack_7c[0]);
      }
      fn_82230300(uVar3,1,0);
    }
    iVar2 = *(int *)(param_4 + *(int *)(param_1 + 0xb0));
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
      *(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)) = 0;
    }
    uVar4 = fn_8265C9E0(0x34);
    *(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)) = uVar4;
    fn_82F68CC0(*(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)),param_2,0x34);
    uVar4 = *(undefined4 *)(param_1 + 0xb4);
    acStack_80[0] = '\0';
    uVar3 = fn_8240D930(*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_4));
    uVar3 = fn_82230110(auStack_70,uVar3);
    lVar5 = fn_8258DE50(*(undefined4 *)(param_1 + 0xc0),uVar3,param_3 - 0x34,uVar4,acStack_80)
    ;
    if (lVar5 != 0) {
      if (acStack_80[0] == '\0') {
        fn_82F68CC0(lVar5,param_2 + 0x34,param_3 - 0x34);
      }
      fn_82A93F08(*(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)),lVar5,lVar5);
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x3c);
    }
    fn_8265CA20(*(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)));
    *(undefined4 *)(param_4 + *(int *)(param_1 + 0xb0)) = 0;
  }
  return 0;
}

