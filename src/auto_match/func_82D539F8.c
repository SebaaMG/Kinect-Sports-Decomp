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
#define TBLr 0
extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_82CE66E8();
extern int fn_82D53618();
extern int fn_82D71B20();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138A1C;
extern unsigned int lbl_8323B4A0;


longlong fn_82D539F8(undefined4 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar6;
  uint *puVar7;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [128];
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82138A1C;
    puVar1[3] = "StQueryTree";
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 4;
  }
  puVar7 = (uint *)fn_82CE5410();
  uVar2 = *puVar7;
  *puVar7 = uVar2 + 0x4000;
  fn_82CE66E8(auStack_80,param_1 + 8);
  uVar4 = fn_82D53618(*param_1,param_1[1],auStack_80,param_1 + 0x1c,param_1[3],0,
                          (ulonglong)uVar2,0x1000);
  uVar5 = (**(code **)(**(int **)param_1[1] + 0x10))();
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = "StNarrow";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  fn_82D71B20(param_3,param_1,uVar5,((uVar4 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)uVar2,
                  param_5);
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  puVar7 = (uint *)fn_82CE5410();
  *puVar7 = uVar2;
  return param_3 + 0x10;
}

