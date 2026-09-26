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
extern int fn_8289DD28();
extern int fn_828B55B0();
extern int fn_828B5650();
extern int fn_828E6160();
extern int fn_828E6F48();


undefined4 * fn_828E7708(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char cVar7;
  undefined4 *puVar6;
  longlong lVar8;
  undefined4 *apuStack_60 [24];
  
  puVar6 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  lVar8 = 1;
  cVar7 = *(char *)((int)puVar6 + 0x1d);
  puVar5 = *(undefined4 **)(param_2 + 4);
  while (cVar7 == '\0') {
    uVar1 = *(uint *)(param_3 + 0xc);
    uVar2 = puVar6[3];
    if (param_4 == '\0') {
      if ((uVar1 < uVar2) ||
         ((uVar1 <= uVar2 && (cVar7 = fn_828B5650(param_3 + 0x10,puVar6 + 4), cVar7 != '\0')))) {
        lVar8 = 1;
      }
      else {
        lVar8 = 0;
      }
    }
    else if ((uVar2 < uVar1) ||
            ((uVar2 <= uVar1 && (cVar7 = fn_828B5650(puVar6 + 4,param_3 + 0x10), cVar7 != '\0'))))
    {
      lVar8 = 0;
    }
    else {
      lVar8 = 1;
    }
    if (lVar8 == 0) {
      puVar3 = (undefined4 *)puVar6[2];
    }
    else {
      puVar3 = (undefined4 *)*puVar6;
    }
    puVar5 = puVar6;
    puVar6 = puVar3;
    cVar7 = *(char *)((int)puVar3 + 0x1d);
  }
  apuStack_60[0] = puVar5;
  if (lVar8 != 0) {
    if (puVar5 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      puVar6 = (undefined4 *)fn_828E6F48(apuStack_60,param_2,1,puVar5,param_3);
      uVar4 = *puVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar4;
      return param_1;
    }
    fn_8289DD28(apuStack_60);
  }
  puVar6 = apuStack_60[0];
  cVar7 = fn_828E6160(param_2,apuStack_60[0] + 3,(uint *)(param_3 + 0xc));
  if (cVar7 == '\0') {
    fn_828B55B0(param_3 + 0x10);
    fn_8265CA20(param_3);
    *param_1 = puVar6;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    puVar6 = (undefined4 *)fn_828E6F48(apuStack_60,param_2,lVar8,puVar5,param_3);
    uVar4 = *puVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar4;
  }
  return param_1;
}

