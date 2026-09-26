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
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826C59F8();
extern int fn_826D2B68();
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;


/* WARNING: Type propagation algorithm not settling */

void fn_826D3B58(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  double dVar6;
  int aiStack_90 [2];
  longlong lStack_88;
  int aiStack_80 [16];
  int iStack_40;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (1 < *(int *)(param_1 + 0x1c))) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    aiStack_90[1] = 0x10001;
    uVar4 = fn_826957D0(param_1,1);
    dVar6 = (double)fn_826972E0(uVar4,uVar2);
    lStack_88 = (longlong)(int)dVar6;
    fn_82681BF8((double)lbl_821AAD20,aiStack_80,aiStack_90 + 1,
                    (ulonglong)(uint)(int)dVar6 + 0x4000,1,0xffffffff831552e0,1,0xffffffff83155190);
    if ((-1 < iStack_40) && (iStack_40 < 0x7efffffe)) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(aiStack_90,uVar4,uVar2,0xffffffffffffffff,0);
      piVar5 = (int *)fn_826D2B68(lVar3,aiStack_80,aiStack_90,0,0,0xffffffffffffffff,1,0);
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar5[1] + 1;
      }
      lVar3 = (ulonglong)*(uint *)(aiStack_90[0] + 8) - 1;
      *(int *)(aiStack_90[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_90[0]);
      }
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x14))(piVar5,0);
        fn_82696480(*(undefined4 *)(param_1 + 4),
                          -(uint)((*(byte *)((int)piVar5 + 0x66) & 0x80) != 0) & (uint)piVar5);
        fn_8267C498(piVar5);
      }
    }
    if (aiStack_80[0] != 0) {
      fn_8267C498();
    }
  }
  return;
}

