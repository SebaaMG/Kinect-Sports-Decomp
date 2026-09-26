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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696958();
extern int fn_82743C08();
extern int fn_82745128();
extern int fn_827451A8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


void fn_82746280(int param_1)

{
  undefined4 uVar1;
  char cVar4;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar5;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    cVar4 = fn_82695468(param_1,0x11);
    if (cVar4 == '\0') {
      fn_826954C0(param_1,0xffffffff8200eef4,0,0);
    }
    else {
      lVar5 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
      if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
        lVar5 = 0;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      lVar3 = fn_82696958(uVar2,uVar1);
      if (lVar3 == 0) {
        fn_82745128(lVar5,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff831f1308);
      }
      else {
        dStack_40 = lbl_82005710;
        dStack_38 = lbl_82005710;
        dStack_30 = lbl_82005710;
        dStack_28 = lbl_82005710;
        fn_827459D8(lVar5,*(undefined4 *)(param_1 + 0x18),&dStack_40);
        fn_82743C08(*(undefined4 *)(param_1 + 0x18),lVar3,&dStack_50);
        dStack_40 = dStack_40 - dStack_50;
        dStack_30 = dStack_30 + dStack_50;
        dStack_38 = dStack_38 - dStack_48;
        dStack_28 = dStack_28 + dStack_48;
        fn_827451A8(lVar5,*(undefined4 *)(param_1 + 0x18),&dStack_40);
      }
    }
  }
  return;
}

