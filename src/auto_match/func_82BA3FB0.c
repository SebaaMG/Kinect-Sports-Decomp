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
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BA08F8();
extern int fn_82BC4BC0();
extern int fn_82BC4CB0();
extern int fn_82BC5080();


undefined4 fn_82BA3FB0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0);
    puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x2c);
    *puVar2 = uVar1;
    if (puVar2 + 1 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82BC4BC0(puVar2 + 1,param_1);
    }
    fn_82BC5080(iVar3,*(undefined4 *)(param_1 + 0xa4));
    fn_82BA08F8(param_1,*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c));
    fn_82BC4CB0(iVar3);
    fn_82B7BEB0(*(undefined4 *)(iVar3 + -4),iVar3 + -4);
  }
  return *(undefined4 *)(param_1 + 0x98);
}

