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
extern int fn_8260D428();
extern int fn_8265CA20();
extern int fn_828A7378();
extern int fn_828C1F70();
extern int fn_828C2EF8();


undefined4 * fn_828C30F8(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *apuStack_60 [24];
  
  puVar8 = (undefined4 *)(param_3 + 0xc);
  puVar3 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  uVar7 = 1;
  cVar1 = *(char *)((int)puVar3 + 0x39);
  puVar6 = *(undefined4 **)(param_2 + 4);
  while (cVar1 == '\0') {
    if (param_4 == '\0') {
      puVar6 = puVar3 + 3;
      if (0xf < (uint)puVar3[8]) {
        puVar6 = (undefined4 *)*puVar6;
      }
      uVar7 = fn_8260D428(puVar8,0,*(undefined4 *)(param_3 + 0x1c),puVar6,puVar3[7]);
      uVar7 = (uVar7 & 0xffffffff) >> 0x1f;
    }
    else {
      puVar6 = puVar8;
      if (0xf < *(uint *)(param_3 + 0x20)) {
        puVar6 = (undefined4 *)*puVar8;
      }
      uVar7 = fn_8260D428(puVar3 + 3,0,puVar3[7],puVar6,*(undefined4 *)(param_3 + 0x1c));
      uVar7 = (uVar7 & 0xffffffff) >> 0x1f ^ 1;
    }
    if (uVar7 == 0) {
      puVar5 = (undefined4 *)puVar3[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar3;
    }
    puVar6 = puVar3;
    puVar3 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x39);
  }
  apuStack_60[0] = puVar6;
  if (uVar7 != 0) {
    if (puVar6 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar3 = (undefined4 *)fn_828C2EF8(apuStack_60,param_2,1,puVar6,param_3);
      uVar2 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_828C1F70(apuStack_60);
  }
  puVar3 = apuStack_60[0];
  puVar5 = puVar8;
  if (0xf < *(uint *)(param_3 + 0x20)) {
    puVar5 = (undefined4 *)*puVar8;
  }
  iVar4 = fn_8260D428(apuStack_60[0] + 3,0,apuStack_60[0][7],puVar5,*(undefined4 *)(param_3 + 0x1c)
                      );
  if (iVar4 < 0) {
    puVar3 = (undefined4 *)fn_828C2EF8(apuStack_60,param_2,uVar7,puVar6,param_3);
    uVar2 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_828A7378(param_2 + 0xd,puVar8);
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return param_1;
}

