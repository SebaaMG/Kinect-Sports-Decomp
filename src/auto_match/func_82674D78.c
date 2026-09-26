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
extern int fn_82230300();
extern int fn_8251F2B0();
extern int fn_82550E48();
extern int fn_8260D428();
extern int fn_8265CA20();


undefined4 * fn_82674D78(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *apuStack_60 [24];
  
  puVar7 = (undefined4 *)(param_3 + 0xc);
  puVar2 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  uVar6 = 1;
  cVar1 = *(char *)((int)puVar2 + 0x2d);
  puVar5 = *(undefined4 **)(param_2 + 4);
  while (cVar1 == '\0') {
    if (param_4 == '\0') {
      puVar5 = puVar2 + 3;
      if (0xf < (uint)puVar2[8]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar6 = fn_8260D428(puVar7,0,*(undefined4 *)(param_3 + 0x1c),puVar5,puVar2[7]);
      uVar6 = (uVar6 & 0xffffffff) >> 0x1f;
    }
    else {
      puVar5 = puVar7;
      if (0xf < *(uint *)(param_3 + 0x20)) {
        puVar5 = (undefined4 *)*puVar7;
      }
      uVar6 = fn_8260D428(puVar2 + 3,0,puVar2[7],puVar5,*(undefined4 *)(param_3 + 0x1c));
      uVar6 = (uVar6 & 0xffffffff) >> 0x1f ^ 1;
    }
    if (uVar6 == 0) {
      puVar4 = (undefined4 *)puVar2[2];
    }
    else {
      puVar4 = (undefined4 *)*puVar2;
    }
    puVar5 = puVar2;
    puVar2 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x2d);
  }
  apuStack_60[0] = puVar5;
  if (uVar6 != 0) {
    if (puVar5 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar6 = 1;
      goto LAB_82674e70;
    }
    fn_8251F2B0(apuStack_60);
  }
  puVar2 = apuStack_60[0];
  puVar4 = puVar7;
  if (0xf < *(uint *)(param_3 + 0x20)) {
    puVar4 = (undefined4 *)*puVar7;
  }
  iVar3 = fn_8260D428(apuStack_60[0] + 3,0,apuStack_60[0][7],puVar4,*(undefined4 *)(param_3 + 0x1c)
                      );
  if (-1 < iVar3) {
    fn_82230300(puVar7,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82674e70:
  puVar2 = (undefined4 *)fn_82550E48(apuStack_60,param_2,uVar6,puVar5,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

