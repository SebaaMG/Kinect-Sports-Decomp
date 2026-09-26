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
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826B32D0();
extern unsigned int lbl_8200C4D4;
extern unsigned int lbl_82015D80;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


void fn_827AE128(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar6;
  undefined8 uVar3;
  int iVar5;
  ulonglong uVar4;
  undefined **ppuStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  cVar6 = fn_82695468(param_1,0x1f);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200ee38,0,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar5 = fn_82696958(uVar3,uVar1);
      if (iVar5 != 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
        uVar4 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar2 + 0x2a0),
                                  iVar2 + 0x88,0,0xffffffffffffffff);
        uStack_2c = *(uint *)(param_1 + 0x18);
        uStack_28 = (undefined4)uVar4;
        ppuStack_30 = (undefined **)&lbl_82015D80;
        (**(code **)(*(int *)(iVar5 + 0x10) + 0x20))
                  (iVar5 + 0x10,(ulonglong)uStack_2c + 0x78,&ppuStack_30,0,0);
        fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar4);
        ppuStack_30 = &lbl_8200C4D4;
        if ((uVar4 & 0xffffffff) != 0) {
          fn_826824B0(uVar4);
        }
      }
    }
  }
  return;
}

