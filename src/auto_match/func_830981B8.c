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
extern int fn_82CE5410();
extern int fn_82CE8E78();
extern int fn_830855B0();
extern int fn_83097440();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_830981B8(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  struct { undefined4 first; uint second; } stack_pair_50;

  uint uStack_48;
  undefined **appuStack_40 [4];
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtCpuKdTreeBuildSetup";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  stack_pair_50.second = *(uint *)(param_2 + 0x5c);
  stack_pair_50.first = *(undefined4 *)(param_2 + 0x50);
  uStack_48 = stack_pair_50.second | 0x80000000;
  fn_83097440(appuStack_40,&stack_pair_50.first,0);
  fn_830855B0(appuStack_40,*(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c),
                    *(undefined4 *)(param_2 + 0x54));
  uVar3 = fn_82CE8E78(param_1,param_2,param_2,0);
  appuStack_40[0] = &lbl_8212FC60;
  iVar4 = fn_82CE5410();
  stack_pair_50.second = 0;
  if ((uStack_48 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_50.first,uStack_48 & 0x3fffffff,4);
  }
  stack_pair_50.first = 0;
  uStack_48 = 0x80000000;
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return uVar3;
}

