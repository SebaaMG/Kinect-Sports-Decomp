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
extern int fn_8288BAE8();
extern int fn_828935C0();
extern int fn_82893620();


undefined4 * fn_82894D38(undefined4 *param_1,uint param_2,int param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 *apuStack_50 [20];
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  puVar8 = (uint *)(param_3 + 0xc);
  uVar9 = 1;
  uVar5 = param_2;
  if (*(char *)((int)puVar4[1] + 0x4d) == '\0') {
    uVar6 = (ulonglong)*puVar8;
    uVar3 = param_4 & 0xff;
    puVar1 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar7 = (ulonglong)(uint)puVar4[3];
      if (uVar3 == 0) {
        param_4 = uVar6 - uVar7;
        uVar5 = -(uint)(uVar6 < uVar7);
        uVar9 = uVar5 & 1;
      }
      else {
        uVar9 = -((uVar7 < uVar6) - 1);
      }
      if ((uVar9 & 0xff) == 0) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x4d) == '\0');
  }
  apuStack_50[0] = puVar4;
  if ((uVar9 & 0xff) != 0) {
    if (puVar4 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar4 = (undefined4 *)fn_82893620(apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_8288BAE8(apuStack_50,uVar5,param_3,param_4);
  }
  puVar1 = apuStack_50[0];
  if ((uint)apuStack_50[0][3] < *puVar8) {
    puVar4 = (undefined4 *)fn_82893620(apuStack_50,param_2,uVar9,puVar4,param_3);
    uVar2 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_828935C0(param_2 + 0xd,puVar8);
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

