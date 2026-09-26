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
extern int fn_826957D0();
extern int fn_82697610();
extern int fn_827A2738();
extern int fn_827A4240();
extern int fn_827A4850();


void fn_8272DC58(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar5;
  undefined2 uVar6;
  ulonglong uVar4;
  ushort uVar7;
  int *piVar8;
  byte bStack_30;
  byte abStack_2f [47];
  
  piVar8 = (int *)(*(int *)(param_1 + 8) + -0x68);
  if (*(int *)(param_1 + 8) == 0) {
    piVar8 = (int *)0x0;
  }
  if (*(int *)(piVar8[0x28] + 0x114) != 0) {
    uVar7 = *(ushort *)(*(int *)(piVar8[0x28] + 0x114) + 0x68);
    if (((uVar7 & 1) == 0) || ((uVar7 >> 1 & 1) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar5 = fn_82697610(uVar3,uVar1);
      if (uVar5 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar5 = fn_82697610(uVar3,uVar1);
        abStack_2f[0] = (byte)(uVar5 >> 0x10) | 0x80;
        fn_827A4850(*(undefined4 *)(piVar8[0x28] + 0x114),uVar5 & 0xffff,abStack_2f);
        if ((uVar5 & 0xffff) == 0x2d) {
          if (*(int *)(piVar8[0x28] + 0x114) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(ushort *)(*(int *)(piVar8[0x28] + 0x114) + 0x68) >> 7 & 1;
          }
          (**(code **)(*piVar8 + 0x164))(piVar8,uVar7 == 0);
        }
      }
      else if (uVar5 == 1) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar4 = fn_82697610(uVar3,uVar1);
        bStack_30 = (byte)(uVar4 >> 0x10) | 0x80;
        fn_827A2738(*(undefined4 *)(piVar8[0x28] + 0x114),uVar4 & 0xffff,&bStack_30);
      }
      else if (uVar5 < 3) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(piVar8[0x28] + 0x114);
        uVar3 = fn_826957D0(param_1,1);
        uVar6 = fn_82697610(uVar3,uVar1);
        fn_827A4240(uVar2,uVar6);
      }
    }
  }
  return;
}

