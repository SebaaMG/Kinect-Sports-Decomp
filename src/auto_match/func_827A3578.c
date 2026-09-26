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
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A1508();
extern int fn_827A8738();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


uint fn_827A3578(int param_1,int param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_a0;
  uint uStack_9c;
  
  uVar3 = fn_827A1508(*(undefined4 *)(param_1 + 8));
  if (((int)uVar3 == -1) ||
     (piVar4 = (int *)fn_827A8738((ulonglong)*(uint *)(param_1 + 8) + 0x24,uVar3),
     piVar4 == (int *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar5 = piVar4[2];
    if ((*piVar4 < 0) && (uVar5 = uVar5 & 0xffffff, uVar5 == 0xffffff)) {
      uVar5 = 0xffffffff;
    }
    uVar7 = param_2 - uVar5;
    fn_82756F70(&uStack_a0);
    while( true ) {
      if ((uStack_a0 == 0) || (bVar1 = false, uStack_9c <= uStack_a0)) {
        bVar1 = true;
      }
      if (((bVar1) || ((*(ushort *)(uStack_a0 + 4) & 0xf000) != 0)) ||
         ((*(byte *)(uStack_a0 + 6) & 1) != 0)) break;
      fn_827555D8(&uStack_a0);
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar2 = uStack_a0;
      uVar5 = uVar9 + uVar5;
      if ((uStack_a0 == 0) || (bVar1 = false, uStack_9c <= uStack_a0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      uVar9 = (uint)(*(ushort *)(uStack_a0 + 4) >> 0xc);
      uVar8 = uVar8 + uVar9;
      fn_827555D8(&uStack_a0);
      uVar6 = uVar2;
    } while (uVar8 <= uVar7);
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar5;
    }
    fn_82756488(&uStack_a0);
  }
  return uVar6;
}

