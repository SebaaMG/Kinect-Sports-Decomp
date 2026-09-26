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
extern int fn_828AD740();
extern int fn_828B0498();
extern int fn_828B0528();
extern int fn_828B0DB8();
extern int fn_828B0E40();
extern int fn_828B0FE8();
extern int fn_828B13E8();
extern int fn_828B1468();


undefined8 fn_828D8FD8(int param_1,undefined1 param_2)

{
  char cVar3;
  int iVar2;
  undefined8 uVar1;
  
  cVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  if ((((cVar3 == '\0') ||
       (cVar3 = fn_828B0528(*(undefined4 *)(param_1 + 0x14)), cVar3 == '\0')) ||
      (iVar2 = fn_828B0FE8(param_1), iVar2 != 0)) ||
     (cVar3 = fn_828AD740(*(undefined4 *)(param_1 + 0x14)), cVar3 != '\0')) {
    uVar1 = 0;
  }
  else {
    iVar2 = fn_828B0DB8(param_1);
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if (iVar2 == 0) {
      fn_828B0E40(*(undefined4 *)(param_1 + 0x14),0);
      fn_828B1468(param_1,7);
      uVar1 = 1;
    }
    else {
      fn_828B0498(param_1,iVar2);
      fn_828B13E8(param_1,0,0);
      *(undefined1 *)(param_1 + 0x1c) = param_2;
      fn_828B0E40(*(undefined4 *)(param_1 + 0x14),*(undefined1 *)(iVar2 + 0x26));
      fn_828B1468(param_1,1);
      uVar1 = 1;
    }
  }
  return uVar1;
}

