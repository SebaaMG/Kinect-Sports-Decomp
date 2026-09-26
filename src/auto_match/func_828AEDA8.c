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
extern int fn_82882300();
extern int fn_828823E0();
extern int fn_82897BD0();
extern int fn_828A1B60();
extern unsigned int lbl_8200D8C4;


void fn_828AEDA8(int param_1)

{
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar6;
  uint uVar7;
  double dVar8;
  
  piVar3 = (int *)fn_825089A0();
  dVar8 = (double)(**(code **)(*piVar3 + 8))();
  bVar6 = false;
  uVar7 = *(uint *)(param_1 + 0xb4) + 1;
  if (((float)uVar7 * lbl_8200D8C4 <= (float)(dVar8 - (double)*(float *)(param_1 + 0xb8))) &&
     (*(uint *)(param_1 + 0xb4) < 5)) {
    bVar6 = true;
    *(uint *)(param_1 + 0xb4) = uVar7;
  }
  if (bVar6) {
    *(float *)(param_1 + 0xb8) = (float)dVar8;
    *(undefined1 *)(param_1 + 0xb3) = 1;
    iVar4 = fn_82897BD0(param_1);
    if ((iVar4 != -1) && (cVar5 = fn_82882300(), cVar5 == '\0')) {
      uVar1 = fn_828A1B60(*(undefined4 *)(param_1 + 0x50));
      uVar2 = fn_82897BD0(param_1);
      fn_828823E0(uVar2,uVar1);
    }
  }
  return;
}

