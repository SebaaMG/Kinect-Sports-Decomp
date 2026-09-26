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
extern int fn_8226D318();
extern int fn_82547938();
extern int fn_82547950();
extern int fn_825521C8();
extern int fn_826310E0();
extern int fn_82637A98();
extern int fn_82637AF8();
extern int fn_82637B30();
extern int fn_82637BC0();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_826381E0();
extern int fn_82638288();
extern int fn_826382C8();
extern int fn_82638300();
extern int fn_82638330();
extern int fn_82638368();
extern int fn_826383D0();
extern int fn_82638400();
extern int fn_82638438();
extern int fn_82638470();
extern int fn_826384A0();
extern int fn_826384C0();
extern int fn_826384E0();
extern int fn_82638500();
extern int fn_82638520();
extern int fn_82638540();
extern int fn_82638790();
extern int fn_82638D10();
extern int fn_82639068();
extern int fn_826392A0();
extern int fn_826392D0();
extern int fn_82639300();
extern int fn_82639330();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A7E0();
extern int fn_8263A820();
extern int fn_8263C910();
extern int fn_8263CBB0();
extern int fn_8263DE70();
extern int fn_8263FB38();
extern int fn_8266FB78();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_8c;


void fn_82670438(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined4 uStack_8c;
  int aiStack_80 [32];
  
  iVar1 = fn_82F6A544();
  if ((*(int *)(iVar1 + 0xf0) != 0) && (*(int *)(iVar1 + 0xac) == 0)) {
    iVar2 = fn_8266FB78();
    if (iVar2 != 0) {
      if (*(int *)(iVar1 + 0xfc) < *(int *)(iVar1 + 0x100)) {
        iVar2 = RtlTryEnterCriticalSection();
        if (iVar2 == 0) {
          *(int *)(iVar1 + 0xfc) = *(int *)(iVar1 + 0xfc) + 1;
          goto LAB_82670a08;
        }
        *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(iVar1 + 0x100);
      }
      else {
        RtlEnterCriticalSection(iVar1 + 0x108);
      }
      fn_82638288(param_2,0);
      fn_826384A0(param_2,1);
      fn_826384C0(param_2,0xff);
      fn_826384E0(param_2,0xff);
      fn_826382C8(param_2,0);
      fn_82638330(param_2,0);
      fn_82638368(param_2,0);
      fn_82638300(param_2,7);
      fn_82638400(param_2,0);
      fn_82638438(param_2,0);
      fn_82638470(param_2,0);
      fn_826383D0(param_2,7);
      fn_82638500(param_2,0);
      fn_82638520(param_2,0xff);
      fn_82638540(param_2,0xff);
      fn_826392A0(param_2,0);
      fn_826392D0(param_2,0);
      fn_82639300(param_2,0);
      fn_82639330(param_2,0);
      fn_82638D10(param_2,1);
      for (puVar4 = *(undefined4 **)(iVar1 + 0x34);
          (*(int *)(iVar1 + 0xe8) == 0 && (puVar4 != *(undefined4 **)(iVar1 + 0x38)));
          puVar4 = puVar4 + 2) {
        (*(code *)*puVar4)(puVar4[1]);
      }
      if (*(int *)(iVar1 + 0xb8) != 0) {
        fn_8263A7E0(param_2,0);
        fn_8263A820(param_2);
        fn_82639EA8(param_2,iVar1 + 0xbc);
        if (*(int *)(iVar1 + 0xf8) == 0) {
          dVar5 = (double)(**(code **)(**(int **)(iVar1 + 0xc) + 0x18))();
          uStack_8c = (undefined4)(longlong)dVar5;
          uVar3 = uStack_8c;
          dVar5 = (double)(**(code **)(**(int **)(iVar1 + 0xc) + 0x1c))();
          uStack_8c = (undefined4)(longlong)dVar5;
          aiStack_80[0] = fn_8226D318(uVar3,uStack_8c,0x18280186,0);
          aiStack_80[0] = 0x800 - aiStack_80[0];
          aiStack_80[1] = 0;
          aiStack_80[2] = 0;
          aiStack_80[3] = 0;
          uVar3 = fn_8263C910(uVar3,uStack_8c,0x18280186,0,aiStack_80);
          *(undefined4 *)(iVar1 + 0xf8) = uVar3;
        }
        fn_8263A1B8(param_2,0,*(undefined4 *)(iVar1 + 0xf8));
        fn_82638790(param_2,0xf);
        fn_8263DE70((double)lbl_82002AE0,param_2,0,0,1,0);
        (**(code **)(**(int **)(iVar1 + 0x10) + 0x90))();
        fn_8263FB38((double)lbl_821AAD20,param_2,0,0,**(undefined4 **)(iVar1 + 0xb8),0,0,0,0);
        fn_82547938(param_2,2);
        fn_825521C8(param_2,0x16);
        fn_82547950(param_2,3);
        fn_82637AF8(param_2,0);
        fn_82637B30(param_2,0);
        fn_82637BC0(param_2,0);
        fn_82637C50(param_2,6);
        fn_82637CE0(param_2,7);
        fn_826310E0(param_2,0,0xffffffff8329ead0,4,0x8000000000000000);
        fn_82638D10(param_2,0);
        fn_82637A98(param_2,0);
        fn_826381E0(param_2,0);
        fn_82639528(param_2,0,1);
        fn_82639380(param_2,0,1);
        fn_82639068(param_2,1);
        (**(code **)(**(int **)(iVar1 + 0xc) + 0x18))();
        (**(code **)(**(int **)(iVar1 + 0xc) + 0x1c))();
                    /* WARNING: Subroutine does not return */
        fn_8263CBB0(param_2,0,**(undefined4 **)(iVar1 + 0xb8),0x80000000);
      }
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x90))();
      for (puVar4 = *(undefined4 **)(iVar1 + 0x44);
          (*(int *)(iVar1 + 0xe8) == 0 && (puVar4 != *(undefined4 **)(iVar1 + 0x48)));
          puVar4 = puVar4 + 2) {
        (*(code *)*puVar4)(puVar4[1]);
      }
      RtlLeaveCriticalSection(iVar1 + 0x108);
    }
  }
LAB_82670a08:
  fn_82F6A590();
  return;
}

