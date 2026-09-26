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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8255BB98();
extern int fn_8255BFC0();
extern int fn_825BBCA0();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;


undefined8 fn_8255C2E8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar4;
  undefined8 uVar3;
  char cVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd48);
  piVar4 = (int *)fn_8255BB98(auStack_40,uVar1);
  iVar2 = *piVar4;
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if ((iVar2 == 0) || ((param_3 != 0 && ((*(uint *)(param_3 + 0x94) & 0x2000000) == 0)))) {
    uVar3 = 1;
  }
  else if (*(short *)(param_1 + 10) == 0) {
    piVar4 = (int *)fn_8255BB98(auStack_38,uVar1);
    uVar1 = *(undefined4 *)(*piVar4 + 8);
    if (iStack_34 != 0) {
      fn_822315A0(iStack_34);
    }
    cVar5 = fn_828ACCE8(uVar1);
    if ((cVar5 != '\0') && (cVar5 = fn_828AD740(uVar1), cVar5 != '\0')) {
      return 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8255BFC0(*(undefined4 *)(param_2 + 0x2fc));
    uVar3 = fn_825BBCA0(param_2,uVar3);
  }
  return uVar3;
}

