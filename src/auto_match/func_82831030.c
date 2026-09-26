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
extern int fn_828301D0();
extern int fn_82830D60();
extern int fn_82830DF0();


undefined4 * fn_82831030(undefined4 *param_1,int param_2,longlong param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar4;
  undefined4 *puVar3;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *apuStack_60 [24];
  
  lVar5 = param_3 + 0xc;
  puVar3 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  uVar6 = 1;
  cVar4 = *(char *)((int)puVar3 + 0x21);
  puVar2 = *(undefined4 **)(param_2 + 4);
  while (cVar4 == '\0') {
    if (param_4 == '\0') {
      uVar6 = fn_828301D0(param_2,lVar5,puVar3 + 3);
    }
    else {
      cVar4 = fn_828301D0(param_2,puVar3 + 3,lVar5);
      uVar6 = (ulonglong)(cVar4 == '\0');
    }
    if ((uVar6 & 0xff) == 0) {
      puVar1 = (undefined4 *)puVar3[2];
    }
    else {
      puVar1 = (undefined4 *)*puVar3;
    }
    puVar2 = puVar3;
    puVar3 = puVar1;
    cVar4 = *(char *)((int)puVar1 + 0x21);
  }
  apuStack_60[0] = puVar2;
  if ((uVar6 & 0xff) != 0) {
    if (puVar2 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar6 = 1;
      goto LAB_828310f0;
    }
    fn_82830D60(apuStack_60);
  }
  puVar3 = apuStack_60[0];
  cVar4 = fn_828301D0(param_2,apuStack_60[0] + 3,lVar5);
  if (cVar4 == '\0') {
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_828310f0:
  puVar3 = (undefined4 *)fn_82830DF0(apuStack_60,param_2,uVar6,puVar2,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

