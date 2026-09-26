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
extern int fn_825371C0();
extern int fn_8265CA20();
extern int fn_828647A8();


undefined4 * fn_82537040(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 auStack_50 [80];
  
  puVar5 = (undefined4 *)(param_3 + 0xc);
  uVar6 = 1;
  puVar3 = *(undefined4 **)(param_2 + 4);
  puVar7 = (undefined4 *)(*(undefined4 **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x31) == '\0') {
    uVar6 = fn_828647A8(puVar5,puVar7 + 3);
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
      goto LAB_825370c4;
    }
    if (*(char *)((int)puVar3 + 0x31) == '\0') {
      puVar7 = (undefined4 *)*puVar3;
      if (*(char *)((int)puVar7 + 0x31) == '\0') {
        puVar2 = (undefined4 *)puVar7[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x31) == '\0') {
          puVar7 = puVar1;
          puVar2 = (undefined4 *)puVar1[2];
        }
      }
      else {
        puVar2 = (undefined4 *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x31) == '\0' &&
               (puVar7 == (undefined4 *)*puVar1))) {
          puVar7 = puVar1;
          puVar2 = (undefined4 *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x31) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (undefined4 *)puVar3[2];
    }
  }
  cVar4 = fn_828647A8(puVar7 + 3,puVar5);
  if (cVar4 == '\0') {
    (**(code **)*puVar5)(puVar5,0);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_825370c4:
  puVar3 = (undefined4 *)fn_825371C0(auStack_50,param_2,uVar6,puVar3,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

