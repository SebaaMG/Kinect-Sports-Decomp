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
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_8259BB38();
extern int fn_827D9718();
extern int fn_827D98C0();
extern int fn_82A1E650();
extern int iRam83281100;
extern int iRam83281104;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_825BEB78(int param_1,undefined8 param_2,ulonglong param_3,int *param_4,int *param_5,
                  undefined8 param_6)

{
  int iVar2;
  longlong lVar1;
  int iStack_40;
  int iStack_3c;
  
  fn_82517A50(param_6,param_4);
  *param_5 = (int)param_3;
  iVar2 = fn_82A1E650(*(undefined4 *)(param_1 + 0x1b4),0);
  if (iVar2 != 0x102) {
    if (((*param_4 == 0) || (iVar2 = fn_827D98C0(), iVar2 != iRam83281104)) &&
       ((((param_3 & 0xffffffff) == 0 || (*param_4 == 0)) ||
        ((lVar1 = fn_827D9718(param_3), lVar1 < *(longlong *)(*(int *)(param_1 + 0x5c) + 0x10)
         && (iVar2 = fn_827D98C0(*param_4), iVar2 == iRam83281100)))))) {
      fn_8259BB38(&iStack_40,param_1 + 0x1c4,param_2);
      if (iStack_40 != *(int *)(param_1 + 0x1c8)) {
        iVar2 = iStack_40 + 0x10;
        iStack_40 = 0;
        *param_5 = iVar2;
        iStack_3c = 0;
        fn_82517978(&iStack_40,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
        fn_823F2E20(param_6,&iStack_40);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

