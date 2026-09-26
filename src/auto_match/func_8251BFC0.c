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
extern int fn_822315A0();
extern int fn_8251C118();
extern int fn_8251C300();
extern int fn_8260D428();
extern int fn_8265CA20();


undefined4 * fn_8251BFC0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *apuStack_50 [20];
  
  puVar5 = (undefined4 *)(param_3 + 0xc);
  uVar4 = 1;
  puVar1 = *(undefined4 **)(param_2 + 4);
  puVar6 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar6 + 0x35) == '\0') {
    puVar1 = puVar6 + 3;
    if (0xf < (uint)puVar6[8]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    uVar4 = fn_8260D428(puVar5,0,*(undefined4 *)(param_3 + 0x1c),puVar1,puVar6[7]);
    uVar4 = (uVar4 & 0xffffffff) >> 0x1f;
    puVar1 = puVar6;
    if (uVar4 == 0) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  apuStack_50[0] = puVar1;
  if (uVar4 != 0) {
    if (puVar1 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar4 = 1;
      goto LAB_8251c068;
    }
    fn_8251C300(apuStack_50);
  }
  puVar6 = apuStack_50[0];
  puVar3 = puVar5;
  if (0xf < *(uint *)(param_3 + 0x20)) {
    puVar3 = (undefined4 *)*puVar5;
  }
  iVar2 = fn_8260D428(apuStack_50[0] + 3,0,apuStack_50[0][7],puVar3,*(undefined4 *)(param_3 + 0x1c)
                      );
  if (-1 < iVar2) {
    if (*(int *)(param_3 + 0x2c) != 0) {
      fn_822315A0();
    }
    fn_82230300(puVar5,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_8251c068:
  puVar1 = (undefined4 *)fn_8251C118(apuStack_50,param_2,uVar4,puVar1,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar1;
  return param_1;
}

