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
extern unsigned int *auStack_60;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_82554D38();
extern int fn_82554E20();
extern int fn_825551A8();
extern int fn_82558B08();
extern int fn_82638D10();
extern int fn_827D6968();
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A24;


void fn_825BC7F0(int param_1,undefined8 param_2)

{
  short sVar1;
  char cVar4;
  int iVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  undefined1 auStack_60 [96];
  
  fn_825200F0(auStack_60);
  cVar4 = fn_827D6968(lbl_83265A24,auStack_60,0xffffffffffffffff);
  if ((cVar4 != '\0') && (iVar2 = fn_8251F720(param_2,1), iVar2 != 0)) {
    sVar1 = *(short *)(iVar2 + 0xc);
    iVar5 = iVar2;
    while (sVar1 != 0) {
      if (*(ushort *)(iVar5 + 0xc) == 0x37) {
        iVar6 = param_1 + 0x8dc;
        uVar3 = fn_82554D38();
        *(undefined4 *)((*(int *)(param_1 + 0x8f0) + 1) * 4 + iVar6) = uVar3;
        fn_82554E20(*(undefined4 *)((*(int *)(param_1 + 0x8f0) + 1) * 4 + iVar6),iVar5 + 0x10)
        ;
        fn_82558B08();
        fn_825551A8(*(undefined4 *)((*(int *)(param_1 + 0x8f0) + 1) * 4 + iVar6),0);
        fn_82638D10(lbl_8320A898,1);
        fn_82558B08();
        *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8f0) + 1;
      }
      iVar5 = *(int *)(&lbl_821CAB38 + (uint)*(ushort *)(iVar5 + 0xc) * 4) + iVar5;
      sVar1 = *(short *)(iVar5 + 0xc);
    }
    fn_8251FA58(iVar2);
  }
  return;
}

