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
extern int fn_82FAE140();
extern int fn_82FAE150();
extern int fn_82FAE168();
extern unsigned int lbl_8216CC20;


undefined8 fn_82FA97D0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[4] = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x60);
    iVar2 = fn_82FAE140(uVar1);
    dVar3 = lbl_8216CC20;
    param_2[1] = (int)((double)(longlong)iVar2 * lbl_8216CC20);
    iVar2 = fn_82FAE168(uVar1);
    param_2[2] = (int)((double)(longlong)iVar2 * dVar3);
    iVar2 = fn_82FAE150(uVar1);
    param_2[3] = (int)((double)(longlong)iVar2 * dVar3);
    *param_2 = (int)((double)(longlong)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0xc)) * dVar3)
    ;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x68);
    if (iVar2 < 1) {
      param_2[4] = 0;
    }
    else {
      param_2[4] = (int)((double)(longlong)iVar2 * dVar3);
    }
  }
  return 1;
}

