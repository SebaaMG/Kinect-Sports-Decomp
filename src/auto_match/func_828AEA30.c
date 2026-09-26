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
extern int fn_82239010();
extern int fn_825178E0();
extern int fn_828B01F8();
extern unsigned int uStack_60;


void fn_828AEA30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 uStack_60;
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  fn_828B01F8(param_1 + 0x278);
  piVar5 = (int *)(param_1 + 0x10c);
  lVar4 = 4;
  do {
    iVar2 = *piVar5;
    if (piVar5[-1] != iVar2) {
      uVar3 = fn_825178E0(iVar2,iVar2,piVar5[-1],uStack_60);
      fn_82239010(uVar3,*piVar5,piVar5 + 2,uStack_60);
      *piVar5 = (int)uVar3;
    }
    iVar2 = piVar5[0x10];
    if (piVar5[0xf] != iVar2) {
      uVar3 = fn_825178E0(iVar2,iVar2,piVar5[0xf],uStack_60);
      fn_82239010(uVar3,piVar5[0x10],piVar5 + 0x12,uStack_60);
      piVar5[0x10] = (int)uVar3;
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 4;
  } while (lVar4 != 0);
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  return;
}

