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
extern unsigned int *auStack_60;
extern int fn_82CE8E78();
extern int fn_830B6200();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_830996D0(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined4 auStack_60;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtCpuKdTreeAabb";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 0x24);
  if (0 < (int)*(uint *)(param_2 + 0x28)) {
    do {
      auStack_60 = *(undefined4 *)(iVar4 + 0x24);
      iVar6 = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      uVar8 = (ulonglong)*(uint *)(iVar4 + 0x20);
      if (0 < *(int *)(param_2 + 0x2c)) {
        piVar7 = (int *)(param_2 + 0x30);
        do {
          if (*piVar7 != 0) {
            lVar3 = fn_830B6200(*piVar7,iVar4,&auStack_60,uVar8);
            uVar8 = uVar8 - lVar3;
            *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + (int)lVar3;
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar6 < *(int *)(param_2 + 0x2c));
      }
      uVar5 = uVar5 - 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar5 != 0);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

