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
extern unsigned int *auStack_50;
extern int fn_825AE4F0();
extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828B5650();


undefined4 * fn_825AE1A0(undefined4 *param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 auStack_50 [80];
  
  lVar5 = param_3 + 0xc;
  uVar6 = 1;
  puVar3 = *(undefined4 **)(param_2 + 4);
  puVar7 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x19) == '\0') {
    uVar6 = fn_828B5650(lVar5,puVar7 + 3);
    puVar3 = puVar7;
    if ((uVar6 & 0xff) == 0) {
      puVar7 = (undefined4 *)puVar7[2];
    }
    else {
      puVar7 = (undefined4 *)*puVar7;
    }
  }
  puVar7 = puVar3;
  if ((uVar6 & 0xff) != 0) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar6 = 1;
      goto LAB_825ae224;
    }
    if (*(char *)((int)puVar3 + 0x19) == '\0') {
      puVar7 = (undefined4 *)*puVar3;
      if (*(char *)((int)puVar7 + 0x19) == '\0') {
        puVar2 = (undefined4 *)puVar7[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x19) == '\0') {
          puVar7 = puVar1;
          puVar2 = (undefined4 *)puVar1[2];
        }
      }
      else {
        puVar2 = (undefined4 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x19) == '\0' &&
               (puVar7 == (undefined4 *)*puVar1))) {
          puVar7 = puVar1;
          puVar2 = (undefined4 *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x19) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (undefined4 *)puVar3[2];
    }
  }
  cVar4 = fn_828B5650(puVar7 + 3,lVar5);
  if (cVar4 == '\0') {
    fn_828B55B0(lVar5);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_825ae224:
  puVar3 = (undefined4 *)fn_825AE4F0(auStack_50,param_2,uVar6,puVar3,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

