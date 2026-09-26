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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82C038C8();
extern int fn_82F691F0();


undefined8 fn_82C145D0(ulonglong *param_1,ulonglong param_2)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *apbStack_90 [36];
  
  uVar7 = *param_1;
  apbStack_90[0] = (byte *)0x0;
  uVar6 = 0;
  uVar5 = ((param_2 & 0xffffffff) + uVar7) - 0x18;
  if (*(int *)(param_1 + 0x1a) == 0) {
    puVar2 = (undefined4 *)fn_8265C940(8,0x248c8000);
    *(undefined4 **)(param_1 + 0x1a) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      uVar6 = 5;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      if (uVar5 < uVar7 + 2) {
        uVar6 = 6;
      }
      else {
        iVar3 = fn_82C038C8(param_1,uVar7,2,apbStack_90);
        if (iVar3 == 2) {
          lVar4 = (ulonglong)apbStack_90[0][1] * 0x100 + (ulonglong)*apbStack_90[0];
          *(short *)puVar2 = (short)lVar4;
          lVar4 = lVar4 * 0x10;
          apbStack_90[0] = apbStack_90[0] + 2;
          uVar7 = fn_8265C940(lVar4,0x248c8000);
          puVar2[1] = (int)uVar7;
          if ((uVar7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(uVar7,0,lVar4);
          }
          uVar6 = 5;
        }
        else {
          uVar6 = 3;
        }
      }
    }
    puVar1 = *(ushort **)(param_1 + 0x1a);
    if (puVar1 != (ushort *)0x0) {
      if (*(int *)(puVar1 + 2) != 0) {
        uVar8 = 0;
        if (*puVar1 != 0) {
          iVar3 = 0;
          do {
            fn_8265C990(*(undefined4 *)(*(int *)(puVar1 + 2) + iVar3 + 0xc),0x248c8000);
            uVar8 = uVar8 + 1;
            iVar3 = iVar3 + 0x10;
          } while (uVar8 < *puVar1);
        }
        fn_8265C990(*(undefined4 *)(puVar1 + 2),0x248c8000);
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      fn_8265C990(*(undefined4 *)(param_1 + 0x1a),0x248c8000);
      *(undefined4 *)(param_1 + 0x1a) = 0;
    }
  }
  *param_1 = uVar5;
  return uVar6;
}

