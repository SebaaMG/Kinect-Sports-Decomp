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
extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_8289DD28();
extern int fn_828E7D48();


undefined4 * fn_828E8548(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *apuStack_50 [20];
  
  puVar6 = *(undefined4 **)(param_2 + 4);
  lVar7 = 1;
  if (*(char *)((int)puVar6[1] + 0x1d) == '\0') {
    uVar1 = *(uint *)(param_3 + 0xc);
    puVar3 = (undefined4 *)puVar6[1];
    do {
      puVar6 = puVar3;
      uVar2 = puVar6[3];
      if (param_4 == '\0') {
        if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (*(uint *)(param_3 + 0x10) < (uint)puVar6[4]))))
        {
          lVar7 = 1;
        }
        else {
          lVar7 = 0;
        }
      }
      else if ((uVar2 < uVar1) ||
              ((uVar2 <= uVar1 && ((uint)puVar6[4] < *(uint *)(param_3 + 0x10))))) {
        lVar7 = 0;
      }
      else {
        lVar7 = 1;
      }
      if (lVar7 == 0) {
        puVar3 = (undefined4 *)puVar6[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar6;
      }
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  apuStack_50[0] = puVar6;
  if (lVar7 != 0) {
    if (puVar6 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar6 = (undefined4 *)fn_828E7D48(apuStack_50,param_2,1,puVar6,param_3);
      uVar4 = *puVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar4;
      return param_1;
    }
    fn_8289DD28(apuStack_50);
  }
  puVar3 = apuStack_50[0];
  if (((uint)apuStack_50[0][3] < *(uint *)(param_3 + 0xc)) ||
     (((uint)apuStack_50[0][3] <= *(uint *)(param_3 + 0xc) &&
      ((uint)apuStack_50[0][4] < *(uint *)(param_3 + 0x10))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    puVar6 = (undefined4 *)fn_828E7D48(apuStack_50,param_2,lVar7,puVar6,param_3);
    uVar4 = *puVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar4;
  }
  else {
    if (*(int *)(param_3 + 0x18) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

