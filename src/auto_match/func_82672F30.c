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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_826721A0();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_5c;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_60;


undefined8
fn_82672F30(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar2;
  longlong lVar1;
  undefined8 uVar3;
  undefined4 uStack_60;
  int iStack_5c;
  
  uVar3 = 0;
  uStack_60 = 0;
  iVar2 = fn_82A1BB18();
  if (iVar2 == lbl_831E7B44) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x48))
              (*(int **)(param_1 + 0x10),5,param_2,param_3,param_4,param_5,1);
  }
  else if (*(int *)(param_1 + 0xe8) == 0) {
    lVar1 = fn_8265C9E0(0x40);
    if (lVar1 != 0) {
      uStack_60 = 0;
      iStack_5c = 0;
      fn_82517978(&uStack_60,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      uVar3 = fn_826721A0(lVar1,&uStack_60,param_2,param_3,param_4,param_5,param_6);
      if (iStack_5c != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar3);
  }
  return 1;
}

