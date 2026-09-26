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
extern int fn_82ADDE40();
extern int fn_82ADE7E8();
extern int fn_82ADEE50();
extern int fn_82ADF288();
extern int fn_82AE5AC8();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_82ADF598(int param_1,int param_2,ulonglong param_3,int param_4,ulonglong param_5)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar5;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(ulonglong *)
        (*(int *)((int)((param_5 + 4 & 0xffffffff) << 2) + param_2) +
        ((uint)param_3 >> 3 & 0x1ffffff8)) & 1L << (param_3 & 0x3f)) == 0) {
    puVar6 = (ulonglong *)(*(int *)(param_1 + 0x2a0) * param_4 * 8 + *(int *)(param_1 + 0x2ac));
    puVar4 = puVar6 + *(int *)(param_1 + 0x2a0);
    if (puVar6 < puVar4) {
      iVar3 = *(int *)((int)((param_5 & 0xffffffff) << 2) + param_2) - (int)puVar6;
      do {
        if ((*(ulonglong *)(iVar3 + (int)puVar6) & *puVar6) != 0) {
          bVar1 = true;
          goto LAB_82adf654;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar4);
    }
    bVar1 = false;
LAB_82adf654:
    if (!bVar1) {
      if ((*(uint *)(param_2 + 0xc0) & 0x40000000) != 0) {
        uVar7 = 0;
        do {
          if (*(longlong *)((param_4 * 5 + uVar7 + 1) * 8 + *(int *)(param_1 + 0x2a4)) != 0) {
            bVar1 = true;
            goto LAB_82adf69c;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        bVar1 = false;
LAB_82adf69c:
        if (bVar1) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x318);
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          if (uVar5 == 0) {
            uVar5 = 0x20;
          }
          aiStack_70[0] = param_1;
          if (uVar5 < 0x40) {
            fn_82AE5AC8(aiStack_70,uVar5,0x40 - uVar5);
          }
          uVar2 = fn_82ADE7E8(param_1);
          fn_82ADEE50(param_1,uVar2,param_3,param_4,1);
          iVar3 = fn_82ADF288(param_1,param_2,uVar2,param_5,*(uint *)(param_2 + 0xc0) & 7,0,0,
                                aiStack_70);
          fn_82ADDE40(param_1,uVar2);
          if (iVar3 == -1) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

