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
extern int fn_82CE8E78();
extern int fn_830AE0E8();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;


void fn_82DC4F30(uint *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(undefined4 **)(iVar5 + 4);
  if (puVar6 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar6 = "LtIntegrate";
    puVar6[3] = "StSolve";
    uVar4 = TBLr;
    puVar6[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar6 + 4;
  }
  iVar5 = *(int *)(param_3 + 0x2c);
  uVar1 = *(undefined4 *)(iVar5 + 8);
  uVar2 = *(undefined4 *)(iVar5 + 0xc);
  iVar3 = *(int *)(iVar5 + 0x10);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(*param_1 + 0x2f8);
  if (*(int *)(param_3 + 0x20) == 0) {
    uVar7 = ((ulonglong)*(uint *)(iVar5 + 0x18) + 0xf & 0xffffffff) >> 4;
    if ((int)uVar7 != 0) {
      puVar6 = (undefined4 *)(iVar3 + -4);
      do {
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
        *puVar6 = 0;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  fn_830AE0E8((ulonglong)*param_1 + 0x1e0,*(undefined4 *)(param_3 + 0x20),
                    *(undefined4 *)(param_3 + 0x28),uVar2,uVar1);
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar6 = *(undefined4 **)(iVar5 + 4);
  if (puVar6 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar6 = &lbl_8202CF7C;
    uVar4 = TBLr;
    puVar6[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar6 + 3;
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

