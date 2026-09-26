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
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_827D98C0();
extern int fn_82A1BB18();
extern int iRam83281104;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_8259AF78(int param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  int iStack_50;
  int iStack_4c;
  
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar1 + 1);
  fn_82517A50(param_6,param_4);
  *param_5 = param_3;
  if ((*param_4 == 0) || (iVar2 = fn_827D98C0(), iVar2 != iRam83281104)) {
    fn_8259BB38(&iStack_50,param_1 + 0x34,param_2);
    iVar2 = iStack_50;
    if (iStack_50 != *(int *)(param_1 + 0x38)) {
      iStack_50 = 0;
      iStack_4c = 0;
      fn_82517978(&iStack_50,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),1);
      fn_823F2E20(param_6,&iStack_50);
      if (iStack_4c != 0) {
        fn_822315A0();
      }
      *param_5 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

