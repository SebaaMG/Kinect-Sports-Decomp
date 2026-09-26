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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern int fn_828A1D70();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828E6160();
extern int fn_828E63C8();
extern int fn_828E78D8();
extern unsigned int uStack_34;
extern unsigned int uStack_40;


longlong fn_828E7FB0(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  char cVar3;
  int iVar2;
  uint auStack_50 [4];
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined4 uStack_34;
  
  uVar1 = fn_828E63C8();
  if (((uVar1 & 0xffffffff) == (ulonglong)*(uint *)(param_1 + 4)) ||
     (cVar3 = fn_828E6160(param_1,param_2,uVar1 + 0xc), cVar3 != '\0')) {
    uStack_40 = *param_2;
    fn_828B5580(auStack_3c,param_2 + 1);
    uStack_34 = 0;
    iVar2 = fn_828A1D70(param_1);
    if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar2 + 0xc) = uStack_40;
      fn_828B5580(iVar2 + 0x10,auStack_3c);
      *(undefined4 *)(iVar2 + 0x18) = uStack_34;
    }
    fn_828E78D8(auStack_50,param_1,uVar1,iVar2);
    uVar1 = (ulonglong)auStack_50[0];
    fn_828B55B0(auStack_3c);
  }
  return uVar1 + 0x18;
}

