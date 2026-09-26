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
extern int fn_8287CAA8();
extern int fn_8287E918();
extern int fn_8287EFA0();


undefined4 * fn_8287F640(undefined4 *param_1,uint param_2,int param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *apuStack_50 [20];
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  uVar8 = 1;
  uVar5 = param_2;
  if (*(char *)((int)puVar4[1] + 0x101) == '\0') {
    uVar6 = (ulonglong)*(uint *)(param_3 + 0x10);
    uVar3 = param_4 & 0xff;
    puVar1 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar7 = (ulonglong)(uint)puVar4[4];
      if (uVar3 == 0) {
        param_4 = uVar6 - uVar7;
        uVar5 = -(uint)(uVar6 < uVar7);
        uVar8 = uVar5 & 1;
      }
      else {
        uVar8 = -((uVar7 < uVar6) - 1);
      }
      if ((uVar8 & 0xff) == 0) {
        puVar1 = (undefined4 *)puVar4[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x101) == '\0');
  }
  apuStack_50[0] = puVar4;
  if ((uVar8 & 0xff) != 0) {
    if (puVar4 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar4 = (undefined4 *)fn_8287EFA0(apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_8287CAA8(apuStack_50,uVar5,param_3,param_4);
  }
  puVar1 = apuStack_50[0];
  if ((uint)apuStack_50[0][4] < *(uint *)(param_3 + 0x10)) {
    puVar4 = (undefined4 *)fn_8287EFA0(apuStack_50,param_2,uVar8,puVar4,param_3);
    uVar2 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_8287E918(param_3 + 0x18);
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

