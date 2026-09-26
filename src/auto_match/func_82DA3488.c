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
extern int fn_82DAE9A0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


undefined8 fn_82DA3488(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  
  fVar6 = lbl_8200133C;
  if (*(float *)(param_1 + 0x20) != lbl_8200133C) {
    if (ABS(*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x18)) < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x18);
    }
  }
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar5 = fVar2;
  if ((fVar1 != fVar6) && (fVar5 = fVar1, fVar2 - fVar1 < 0.0)) {
    fVar5 = fVar2;
  }
  *(float *)(param_1 + 0x14) = fVar5;
  if ((fVar1 <= fVar5) && (*(int *)(*(int *)(param_1 + 0xc) + 0x16c) != 0)) {
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar7 + 4);
    if (puVar3 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar3 = "TtPostSimCb";
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar7 + 4) = puVar3 + 3;
    }
    fn_82DAE9A0(*(undefined4 *)(param_1 + 0xc));
    iVar7 = KeTlsGetValue(lbl_8323B4A0);
    puVar3 = *(undefined4 **)(iVar7 + 4);
    if (puVar3 < *(undefined4 **)(iVar7 + 0xc)) {
      *puVar3 = &lbl_82132BC4;
      uVar4 = TBLr;
      puVar3[1] = (int)uVar4;
      *(undefined4 **)(iVar7 + 4) = puVar3 + 3;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

