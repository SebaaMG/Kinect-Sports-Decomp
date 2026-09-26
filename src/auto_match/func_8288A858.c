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
extern int fn_825089A0();
extern int fn_8288A4B0();
extern int fn_8288A658();


undefined4 * fn_8288A858(undefined4 *param_1,uint param_2,int param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 *apuStack_50 [20];
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  uVar9 = 1;
  uVar6 = param_2;
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
    uVar3 = param_4 & 0xff;
    puVar1 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar8 = (ulonglong)(uint)puVar4[3];
      if (uVar3 == 0) {
        param_4 = uVar7 - uVar8;
        uVar6 = -(uint)(uVar7 < uVar8);
        uVar9 = uVar6 & 1;
      }
      else {
        uVar9 = -((uVar8 < uVar7) - 1);
      }
      if ((uVar9 & 0xff) == 0) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  apuStack_50[0] = puVar4;
  if ((uVar9 & 0xff) != 0) {
    if (puVar4 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar4 = (undefined4 *)fn_8288A658(apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_8288A4B0(apuStack_50,uVar6,param_3,param_4);
  }
  puVar1 = apuStack_50[0];
  if ((uint)apuStack_50[0][3] < *(uint *)(param_3 + 0xc)) {
    puVar4 = (undefined4 *)fn_8288A658(apuStack_50,param_2,uVar9,puVar4,param_3);
    uVar2 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    piVar5 = (int *)fn_825089A0();
    (**(code **)(*piVar5 + 0x28))(piVar5,param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

