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
extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82693108();
extern int fn_82693208();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831F129C;
extern unsigned int uStack_60;


undefined4 *
fn_826916F0(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 uVar5;
  undefined4 *puVar4;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uStack_60;
  int aiStack_5c [23];
  
  lVar10 = (ulonglong)lbl_831E7E60 + 0x2c4;
  RtlEnterCriticalSection(lVar10);
  uVar8 = (ulonglong)(uint)param_1[0x88];
  if ((uVar8 == 0) || (((uint)param_1[0x83] + param_2 & 0xffffffff) <= uVar8)) {
LAB_8269177c:
    *param_4 = 0;
    puVar4 = (undefined4 *)fn_826912E0(param_1[2],0x20);
    if (puVar4 == (undefined4 *)0x0) {
LAB_82691930:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)((int)puVar4 + 0xe) = 0;
      puVar4[4] = 0;
      puVar4[2] = 0x20;
      *(undefined2 *)(puVar4 + 3) = 9;
      puVar4[5] = *param_1;
      puVar4[6] = 0;
      puVar4[7] = 0;
      if ((param_2 & 0xffffffff) != 0) {
        uVar8 = (**(code **)(*(int *)param_1[1] + 0x10))
                          ((int *)param_1[1],param_2,param_3,aiStack_5c,&uStack_60);
        puVar4[7] = (int)uVar8;
        if ((uVar8 & 0xffffffff) == 0) {
          fn_826913D8(param_1[2],puVar4,puVar4[2]);
          goto LAB_82691768;
        }
        uVar7 = param_3;
        if ((param_3 & 0xffffffff) < 0x1001) {
          uVar7 = 0x1000;
        }
        lVar11 = ((uVar8 + uVar7) - 1 & ~(uVar7 - 1)) - uVar8;
        if ((uStack_60 & 0xffff0000) == 0) {
          if ((uStack_60 & 0xff00) == 0) {
            uVar9 = (ushort)(byte)(&lbl_8200E1B0)[uStack_60 & 0xff];
          }
          else {
            uVar9 = (byte)(&lbl_8200E1B0)[uStack_60 >> 8 & 0xff] + 8;
          }
        }
        else if ((uStack_60 & 0xff000000) == 0) {
          uVar9 = (byte)(&lbl_8200E1B0)[uStack_60 >> 0x10 & 0xff] + 0x10;
        }
        else {
          uVar9 = (byte)(&lbl_8200E1B0)[uStack_60 >> 0x18] + 0x18;
        }
        uVar3 = (uint)lVar11;
        puVar4[7] = (int)uVar8 + uVar3;
        puVar4[6] = aiStack_5c[0] - uVar3;
        *(ushort *)((int)puVar4 + 0xe) = uVar9 & 0xff;
        puVar4[4] = uVar3 | 0x80000000;
        cVar6 = fn_82693108(lbl_831F129C);
        if (cVar6 == '\0') {
          (**(code **)(*(int *)param_1[1] + 0x14))
                    ((int *)param_1[1],(ulonglong)(uint)puVar4[7] - lVar11,
                     (ulonglong)(uint)puVar4[6] + lVar11,
                     1 << (*(ushort *)((int)puVar4 + 0xe) & 0x3f));
          (**(code **)(*(int *)param_1[1] + 0x14))((int *)param_1[1],puVar4[7],param_2,param_3);
          fn_826913D8(param_1[2],puVar4,puVar4[2]);
          goto LAB_82691930;
        }
        fn_82693208(lbl_831F129C,puVar4[7],puVar4[6],puVar4);
      }
      uVar2 = param_1[0x6c];
      *puVar4 = param_1 + 0x6b;
      puVar4[1] = uVar2;
      *(undefined4 **)param_1[0x6c] = puVar4;
      param_1[0x6c] = puVar4;
      param_1[0x83] = (puVar4[4] & 0x7fffffff) + puVar4[6] + param_1[0x83];
      *param_4 = 1;
    }
    RtlLeaveCriticalSection(lVar10);
  }
  else {
    piVar1 = (int *)param_1[0x89];
    if (piVar1 == (int *)0x0) goto LAB_8269177c;
    uVar5 = (**(code **)(*piVar1 + 4))(piVar1,*param_1,((uint)param_1[0x83] - uVar8) + param_2);
    *param_4 = uVar5;
LAB_82691768:
    RtlLeaveCriticalSection(lVar10);
    puVar4 = (undefined4 *)0x0;
  }
  return puVar4;
}

