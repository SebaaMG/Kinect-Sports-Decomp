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
extern int fn_8265CA20();
extern int fn_8289DC80();
extern int fn_8289E128();


undefined4 *
fn_828C81A0(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *apuStack_50 [20];
  
  puVar6 = *(undefined4 **)((int)param_2 + 4);
  uVar10 = 1;
  uVar7 = param_2;
  uVar8 = param_3;
  if (*(char *)((int)puVar6[1] + 0x11) == '\0') {
    uVar1 = *(uint *)((int)param_3 + 0xc);
    uVar9 = (ulonglong)uVar1;
    uVar5 = param_4 & 0xff;
    puVar3 = (undefined4 *)puVar6[1];
    do {
      puVar6 = puVar3;
      uVar2 = puVar6[3];
      uVar10 = (ulonglong)uVar2;
      if (uVar5 == 0) {
        param_5 = uVar9 - uVar10;
        param_4 = ~(ulonglong)(uVar2 ^ uVar1);
        uVar8 = (param_4 & 0xffffffff) >> 0x1f;
        uVar7 = uVar8 + (uVar10 <= uVar9);
        uVar10 = uVar7 & 1;
      }
      else {
        param_4 = (ulonglong)((int)uVar2 >> 0x1f);
        param_5 = (ulonglong)(uVar1 >> 0x1f);
        uVar8 = uVar10 - uVar9;
        uVar10 = param_5 + param_4 + (ulonglong)(uVar9 <= uVar10);
      }
      if ((uVar10 & 0xff) == 0) {
        puVar3 = (undefined4 *)puVar6[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar6;
      }
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  apuStack_50[0] = puVar6;
  if ((uVar10 & 0xff) != 0) {
    if (puVar6 == (undefined4 *)**(undefined4 **)((int)param_2 + 4)) {
      puVar6 = (undefined4 *)fn_8289E128(apuStack_50,param_2,1,puVar6,param_3);
      uVar4 = *puVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar4;
      return param_1;
    }
    fn_8289DC80(apuStack_50,uVar7,uVar8,param_4,param_5);
  }
  puVar3 = apuStack_50[0];
  if ((int)apuStack_50[0][3] < *(int *)((int)param_3 + 0xc)) {
    puVar6 = (undefined4 *)fn_8289E128(apuStack_50,param_2,uVar10,puVar6,param_3);
    uVar4 = *puVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar4;
  }
  else {
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

