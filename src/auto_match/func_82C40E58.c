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
extern unsigned int *auStack_34;
extern int fn_82C40BA0();
extern int fn_82C40C70();
extern int fn_82C40D20();
extern int fn_82C40DC8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_82C40E58(int param_1,int param_2,short *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short sVar7;
  ulonglong uVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  short *psStack_38;
  uint auStack_34 [13];
  
  if (*(short *)(param_1 + 0x22) != 0) {
    uVar8 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + 0xd2);
      uVar2 = *(undefined2 *)(param_1 + 0x22);
      auStack_34[0] = (uint)uVar1;
      psStack_38 = (short *)((int)((uVar8 & 0xffffffff) << 1) + (int)param_3);
      iVar3 = (int)((uVar8 & 0xffffffff) << 2);
      uStack_40 = *(undefined4 *)((int)uVar8 * 0x6f0 + *(int *)(param_1 + 0x140) + 0x38);
      sVar7 = *psStack_38;
      uStack_3c = *(undefined4 *)(iVar3 + param_2);
      *psStack_38 = 0;
      uVar6 = (longlong)sVar7 + (ulonglong)uVar1;
      uVar4 = *(uint *)(iVar3 + *(int *)(param_1 + 0x164));
      if ((int)auStack_34[0] < (int)uVar4) {
        uVar5 = (ulonglong)uVar4;
        if ((int)uVar6 <= (int)uVar4) {
          uVar5 = uVar6;
        }
        if (*(int *)(param_1 + 0x100) < (int)uVar4) {
          return 0xffffffff80004005;
        }
        iVar3 = *(int *)(param_1 + 0x60);
        if (iVar3 == 0x3d) {
          fn_82C40DC8(param_1,auStack_34,uVar5,&psStack_38,&uStack_3c,&uStack_40,uVar2);
        }
        else if (iVar3 == 0x4e) {
          fn_82C40D20();
        }
        else if (iVar3 == 0x5e) {
          fn_82C40C70();
        }
        else {
          fn_82C40BA0();
        }
      }
      sVar7 = (short)uVar8 + 1;
      uVar8 = (ulonglong)sVar7;
    } while ((int)sVar7 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  if (*(ushort *)(param_1 + 0x22) != 0) {
    sVar7 = 0;
    do {
      sVar7 = sVar7 + 1;
    } while ((int)sVar7 < (int)(uint)*(ushort *)(param_1 + 0x22));
  }
  *(short *)(param_1 + 0xd2) = *param_3 + *(short *)(param_1 + 0xd2);
  return 0;
}

