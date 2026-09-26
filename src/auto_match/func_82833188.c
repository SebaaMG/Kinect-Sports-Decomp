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
extern int fn_82832430();
extern int fn_82832FC0();


undefined4 * fn_82833188(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  undefined4 *apuStack_50 [20];
  
  puVar2 = *(undefined4 **)(param_2 + 4);
  bVar6 = 1;
  if (*(char *)((int)puVar2[1] + 0x1d) == '\0') {
    uVar5 = *(uint *)(param_3 + 0x10);
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      uVar4 = puVar2[4];
      if (param_4 == '\0') {
        if (uVar5 == uVar4) {
          uVar4 = *(uint *)(param_3 + 0x14);
          uVar3 = puVar2[5];
          if (uVar4 == uVar3) {
            uVar4 = *(uint *)(param_3 + 0xc);
            uVar3 = puVar2[3];
          }
          bVar7 = uVar3 <= uVar4;
        }
        else {
          bVar7 = uVar4 <= uVar5;
        }
        bVar6 = -!bVar7;
      }
      else if (uVar4 == uVar5) {
        uVar4 = puVar2[5];
        uVar3 = *(uint *)(param_3 + 0x14);
        if (uVar4 == uVar3) {
          uVar4 = puVar2[3];
          uVar3 = *(uint *)(param_3 + 0xc);
        }
        bVar6 = uVar3 <= uVar4;
      }
      else {
        bVar6 = uVar5 <= uVar4;
      }
      bVar6 = bVar6 & 1;
      if (bVar6 == 0) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x1d) == '\0');
  }
  apuStack_50[0] = puVar2;
  if (bVar6 != 0) {
    if (puVar2 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar6 = 1;
      goto LAB_82833294;
    }
    fn_82832430(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (apuStack_50[0][4] == *(uint *)(param_3 + 0x10)) {
    uVar5 = apuStack_50[0][5];
    uVar4 = *(uint *)(param_3 + 0x14);
    if (uVar5 == uVar4) {
      uVar5 = apuStack_50[0][3];
      uVar4 = *(uint *)(param_3 + 0xc);
    }
    bVar7 = uVar4 <= uVar5;
  }
  else {
    bVar7 = *(uint *)(param_3 + 0x10) <= (uint)apuStack_50[0][4];
  }
  if (bVar7) {
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82833294:
  puVar2 = (undefined4 *)fn_82832FC0(apuStack_50,param_2,bVar6,puVar2,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

