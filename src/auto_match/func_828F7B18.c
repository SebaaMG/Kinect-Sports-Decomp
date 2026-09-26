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
extern unsigned int *auStack_150;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F4440();
extern int fn_828F4578();
extern int fn_828F5A30();
extern int fn_828F6FA8();
extern int fn_828F7AD0();
extern int fn_828FA8D8();
extern int fn_828FBB60();
extern int fn_82A1F4F8();
extern int fn_82A9F7E8();


longlong fn_828F7B18(int param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_150 [336];
  
  piVar6 = (int *)(param_1 + 0x280);
  lVar1 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(uint *)(param_1 + 0x2a0) | 0xc,piVar6
                           );
  if ((int)lVar1 < 0) {
    return lVar1;
  }
  if (*piVar6 == 10) {
    uVar7 = 0;
  }
  else {
    if (*piVar6 != 0xb) {
      fn_828F7AD0(param_1,0xffffffff82029464);
      return -0x7fffbffb;
    }
    uVar7 = 1;
  }
  puVar8 = *(undefined1 **)(param_1 + 0x288);
  if ((*(int *)(param_1 + 0x27c) == 0) && (*(int *)(*(int *)(param_1 + 0x278) + 0x18) == 0)) {
    uVar7 = 0x5e1;
    uVar5 = 0xffffffff82029568;
LAB_828f7bb4:
    fn_828FA8D8(param_1 + 0x18,piVar6,uVar7,uVar5);
    *(undefined4 *)(param_1 + 0x54) = 1;
    lVar1 = -0x7fffbffb;
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x274);
    uVar2 = 0;
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x5c);
        uVar2 = uVar2 + 1;
      } while (iVar3 != 0);
      if (0x1f < uVar2) {
        uVar7 = 0x5e2;
        uVar5 = 0xffffffff8202954c;
        goto LAB_828f7bb4;
      }
    }
    if ((*(int *)(param_1 + 0x27c) == 0) &&
       ((uVar2 = fn_82A1F4F8(puVar8), uVar2 == 0xffffffff || ((uVar2 & 0x10) != 0)))) {
      fn_828F6FA8(auStack_150,0x104,0xffffffff821b0c70,
                    *(undefined4 *)(*(int *)(param_1 + 0x274) + 0x50),puVar8);
      puVar8 = auStack_150;
    }
    iVar3 = fn_8265C940(0x60,0x24810000);
    if (iVar3 == 0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)fn_828F4440();
    }
    if (puVar4 == (uint *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = fn_828F4578(puVar4,puVar8,0,param_1,piVar6,param_1 + 0x18,
                            *(undefined4 *)(param_1 + 0x27c),uVar7);
      if (lVar1 < 0) {
        *(undefined4 *)(param_1 + 0x54) = 1;
        *(undefined4 *)(param_1 + 0x50) = 1;
        fn_828F5A30(puVar4);
        fn_8265C990(puVar4,0x24810000);
      }
      else {
        puVar4[0x17] = *(uint *)(param_1 + 0x274);
        *(uint **)(param_1 + 0x274) = puVar4;
        if ((*(int *)(param_1 + 0x2b0) != 0) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x14), iVar3 != 0)) {
          fn_82A9F7E8(iVar3,puVar4[0x13],(ulonglong)*puVar4,
                          (ulonglong)puVar4[1] - (ulonglong)*puVar4);
        }
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}

