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
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82295A48();
extern int fn_82296328();
extern int fn_822969C8();
extern int fn_82296E38();
extern int fn_82297DB0();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_c0;


undefined8
fn_82295200(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
             char param_6)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  short sVar7;
  ulonglong uVar8;
  undefined4 ****ppppuVar9;
  longlong lVar10;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined4 ***apppuStack_b0 [4];
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*param_2 + 0x1c))();
  }
  else {
    iVar1 = **(int **)(param_4 + 0x30);
    uStack_c0 = CONCAT44(iVar1,(((U64)(uStack_c0) >> 32) & 0xFFFFFFFF));
    fn_8223F508(iVar1);
    piVar3 = (int *)fn_822969C8(&uStack_c0);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)fn_8223F5A0(iVar1);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    fn_82297DB0(apppuStack_b0,0,0);
    if (param_6 == '\0') {
      (**(code **)(*piVar3 + 0x10))(auStack_70,piVar3);
      fn_82295A48(apppuStack_b0,auStack_70);
      puVar5 = auStack_70;
    }
    else {
      (**(code **)(*piVar3 + 0x14))(auStack_90);
      fn_82295A48(apppuStack_b0,auStack_90);
      puVar5 = auStack_90;
    }
    fn_82297DB0(puVar5,1,0);
    uVar8 = (ulonglong)uStack_a0;
    if (((longlong)*(ulonglong *)(param_4 + 0x20) < 1) ||
       (uVar2 = *(ulonglong *)(param_4 + 0x20) & 0xffffffff, lVar10 = uVar2 - uVar8, uVar2 <= uVar8)
       ) {
      lVar10 = 0;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (undefined8 *)fn_82296328(auStack_b8,param_3,param_5,lVar10);
      param_3 = *puVar6;
      uVar8 = (ulonglong)uStack_a0;
      lVar10 = 0;
    }
    if (uStack_9c < 8) {
      apppuStack_b0[0] = apppuStack_b0;
    }
    uStack_c0 = param_3;
    if (uVar8 != 0) {
      uStack_c0 = ((((U64)(uStack_c0)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_3)) & ((U64)0xFFFFFFFF)) << 32));
      iVar1 = (((U64)(uStack_c0) >> 32) & 0xFFFFFFFF);
      ppppuVar9 = (undefined4 ****)apppuStack_b0[0];
      do {
        if ((iVar1 == 0) || (sVar7 = fn_82296E38(iVar1,*(undefined2 *)ppppuVar9), sVar7 == -1))
        {
          uStack_c0 = CONCAT17(1,(((U64)(uStack_c0) >> 8) & 0xFFFFFFFFFFFFFF));
        }
        uVar8 = uVar8 - 1;
        ppppuVar9 = (undefined4 ****)((int)ppppuVar9 + 2);
      } while (uVar8 != 0);
    }
    *(undefined8 *)(param_4 + 0x20) = 0;
    fn_82296328(param_1,uStack_c0,param_5,lVar10);
    fn_82297DB0(apppuStack_b0,1,0);
  }
  return param_1;
}

