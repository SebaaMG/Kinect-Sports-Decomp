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
extern int fn_829E9368();
extern int fn_829E9460();
extern int fn_829ECFA8();
extern int fn_829ECFE0();
extern int fn_82A28568();
extern unsigned int lbl_832179FC;


undefined8 fn_829E9668(int param_1,int param_2,ulonglong param_3)

{
  undefined4 uVar1;
  char cVar5;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  
  if ((((param_3 < 0x100000000) &&
       (cVar5 = fn_829E9368(param_2,param_3 & 0xffffffff), cVar5 == '\x01')) &&
      (*(int *)(param_2 + 0x20) == 0)) && (*(int *)(param_2 + 0x24) == 1)) {
    iVar4 = *(int *)(param_2 + 0x48);
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    if (*(int *)(param_1 + 0x20) != 0) {
      fn_829E9460(*(int *)(param_1 + 0x20),1);
    }
    iVar3 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x9c);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_829ECFE0();
    }
    *(int *)(param_1 + 0x20) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return 0xffffffff8007000e;
    }
    iVar4 = fn_829ECFA8(uVar2,iVar4 + param_2,uVar1);
    if (iVar4 == 1) {
      return 0;
    }
  }
  return 0xffffffff80004005;
}

