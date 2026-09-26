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
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82747298(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar4;
  undefined1 uVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    iVar5 = fn_82696958(uVar3,uVar1);
    if ((iVar5 != 0) &&
       (iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 0x11)) {
      cVar7 = fn_82695468(param_1,0x11);
      dStack_60 = lbl_82005710;
      if (cVar7 == '\0') {
        fn_826954C0(param_1,0xffffffff8200eef4,0,0);
        return;
      }
      lVar4 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar4 = 0;
      }
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
      dStack_58 = dStack_60;
      dStack_50 = dStack_60;
      dStack_48 = dStack_60;
      dStack_40 = dStack_60;
      dStack_38 = dStack_60;
      dStack_30 = dStack_60;
      dStack_28 = dStack_60;
      fn_827459D8(lVar4,*(undefined4 *)(param_1 + 0x18),&dStack_60);
      fn_827459D8(iVar5,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      if ((((dStack_60 != dStack_40) || (dStack_50 != dStack_30)) || (dStack_58 != dStack_38)) ||
         (uVar8 = 1, dStack_48 != dStack_28)) {
        uVar8 = 0;
      }
      fn_826824B0(iVar5);
    }
  }
  puVar2 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar2);
  puVar2[4] = uVar8;
  *puVar2 = 2;
  return;
}

