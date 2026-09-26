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
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8278B290();
extern int fn_8278C528();
extern int fn_8278E8D0();
extern unsigned int lbl_82010C6C;


void fn_82790FA0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined **appuStack_30 [6];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar2 = fn_8278E8D0(param_2,param_3);
  }
  else {
    uVar1 = fn_8278C528(appuStack_30,*(int *)(param_1 + 0xc));
    iVar2 = fn_8278E8D0(param_2,uVar1);
    appuStack_30[0] = &lbl_82010C6C;
    fn_8278B290(appuStack_30);
    fn_8267C488(appuStack_30);
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_8267C498();
  }
  *(int *)(param_1 + 0xc) = iVar2;
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  if (iVar2 != 0) {
    fn_8267C498(iVar2);
  }
  return;
}

