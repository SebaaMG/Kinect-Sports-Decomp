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
extern int fn_8288A4B0();
extern int fn_828DF458();
extern int fn_828E0270();


undefined4 * fn_828DF768(undefined4 *param_1,int param_2,longlong param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar5;
  undefined4 *puVar4;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *apuStack_60 [24];
  
  lVar6 = param_3 + 0xc;
  puVar4 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  uVar7 = 1;
  cVar5 = *(char *)((int)puVar4 + 0x15);
  puVar3 = *(undefined4 **)(param_2 + 4);
  while (cVar5 == '\0') {
    if (param_4 == '\0') {
      uVar7 = fn_828E0270(lVar6,puVar4 + 3);
    }
    else {
      cVar5 = fn_828E0270(puVar4 + 3,lVar6);
      uVar7 = (ulonglong)(cVar5 == '\0');
    }
    if ((uVar7 & 0xff) == 0) {
      puVar1 = (undefined4 *)puVar4[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar4;
    }
    puVar3 = puVar4;
    puVar4 = puVar1;
    cVar5 = *(char *)((int)puVar1 + 0x15);
  }
  apuStack_60[0] = puVar3;
  if ((uVar7 & 0xff) != 0) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar4 = (undefined4 *)fn_828DF458(apuStack_60,param_2,1,puVar3,param_3);
      uVar2 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_8288A4B0(apuStack_60);
  }
  puVar4 = apuStack_60[0];
  cVar5 = fn_828E0270(apuStack_60[0] + 3,lVar6);
  if (cVar5 == '\0') {
    fn_8265CA20(param_3);
    *param_1 = puVar4;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    puVar4 = (undefined4 *)fn_828DF458(apuStack_60,param_2,uVar7,puVar3,param_3);
    uVar2 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  return param_1;
}

