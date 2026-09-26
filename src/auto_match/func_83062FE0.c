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
extern int fn_8305D620();
extern int fn_8305D990();
extern int fn_8305DC18();
extern int fn_8305E0F8();
extern int fn_8305E6F8();
extern int fn_8305EC98();
extern int fn_8305F770();
extern int fn_8305F7A0();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_830604F0();
extern int fn_83060570();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83065C58();
extern int fn_83065E60();
extern int fn_83067658();
extern int fn_8306AAF0();
extern int fn_8306BF60();


undefined8 fn_83062FE0(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_60 [96];
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar3 = fn_830604F0(param_2);
    *(int *)(param_1 + 0xc4) = iVar3 + *(int *)(param_1 + 0xc4);
    iVar3 = fn_8305F770(param_2);
    iVar5 = param_1 + 0x34;
    *(int *)(param_1 + 200) = iVar3 + *(int *)(param_1 + 200);
    uVar1 = fn_8305F770(iVar5);
    lVar6 = 0;
    iVar3 = fn_8305F770(param_2);
    if (0 < iVar3) {
      do {
        uVar2 = fn_8305F7A0(param_2,lVar6);
        fn_83060570(iVar5,uVar2);
        lVar6 = lVar6 + 1;
        iVar3 = fn_8305F770(param_2);
      } while ((int)lVar6 < iVar3);
    }
    fn_8306BF60();
    fn_83060380(auStack_60,param_2);
    fn_83060CB0(auStack_60);
    while (cVar4 = fn_830603C0(auStack_60), cVar4 == '\0') {
      uVar2 = fn_830603D0(auStack_60);
      lVar6 = fn_83065E60();
      lVar7 = lVar6 + 0x10;
      fn_8305E0F8(lVar7,iVar5);
      fn_8305EC98(lVar7,uVar2);
      cVar4 = fn_8305E6F8((double)*(float *)(param_1 + 0x30),lVar7);
      if (cVar4 == '\0') {
        if ((param_4 & 0xffffffff) == 0) {
          return 0;
        }
        uVar2 = 0xffffffff8217e740;
        uVar1 = 0xffffffff8217e794;
LAB_83063164:
        fn_83067658(param_4,uVar1,uVar2);
        return 0;
      }
      cVar4 = fn_8305DC18(lVar7);
      if (cVar4 == '\0') {
        if ((param_4 & 0xffffffff) == 0) {
          return 0;
        }
        uVar1 = 0xffffffff8217e7f0;
        uVar2 = 0xffffffff8217e7a0;
        goto LAB_83063164;
      }
      cVar4 = fn_8305D990(lVar7);
      if (cVar4 == '\0') {
        fn_83065C58(lVar6);
      }
      else {
        fn_8306AAF0(param_3,lVar6);
        if ((int)uVar1 != 0) {
          fn_8305D620(lVar7,uVar1);
        }
      }
      fn_83060CD0(auStack_60);
    }
  }
  return 1;
}

