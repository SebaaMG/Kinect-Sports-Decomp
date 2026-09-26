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
extern int fn_825089A0();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828D2DB8();


void fn_828B03C0(int param_1)

{
  int iVar1;
  char cVar4;
  int *piVar3;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    return;
  }
  if (((*(int *)(iVar1 + 0xc) == 2) &&
      (cVar4 = fn_828ACCE8(*(undefined4 *)(iVar1 + 8)), cVar4 != '\0')) &&
     (cVar4 = fn_828AD740(*(undefined4 *)(iVar1 + 8)), cVar4 == '\0')) {
    fn_828D2DB8(iVar1,9);
    return;
  }
  if (*(int *)(iVar1 + 0xc) != 9) {
    piVar3 = (int *)fn_825089A0();
    (**(code **)(*piVar3 + 0xc))();
    *(undefined4 *)(iVar1 + 0xc) = 10;
    piVar3 = (int *)fn_825089A0();
    uVar2 = (**(code **)(*piVar3 + 0xc))();
    *(undefined8 *)(iVar1 + 0x10) = uVar2;
  }
  return;
}

