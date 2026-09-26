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
extern unsigned int *auStack_30;
extern int fn_827D1B48();
extern int fn_827D36E8();
extern unsigned int uStack_31;


undefined8 fn_827D3760(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 uStack_31;
  undefined1 auStack_30 [48];
  
  if ((param_1 == (int *)0x0) || (piVar1 = (int *)param_1[7], piVar1 == (int *)0x0)) {
    return 0xfffffffffffffffe;
  }
  if ((param_1[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffffffffffb;
  }
  if (*piVar1 != 0x1d) {
    lVar4 = 0;
    uVar2 = piVar1[0xf] & 7;
    *piVar1 = 0x1d;
    uVar6 = piVar1[0xf] - uVar2;
    piVar1[0xe] = piVar1[0xe] << uVar2;
    piVar1[0xf] = uVar6;
    if (7 < uVar6) {
      puVar7 = &uStack_31;
      do {
        iVar3 = piVar1[0xf];
        lVar4 = lVar4 + 1;
        uVar2 = piVar1[0xe];
        piVar1[0xf] = iVar3 - 8U;
        piVar1[0xe] = uVar2 >> 8;
        puVar7 = puVar7 + 1;
        *puVar7 = (char)uVar2;
      } while (7 < iVar3 - 8U);
    }
    piVar1[0x1a] = 0;
    fn_827D36E8(piVar1 + 0x1a,auStack_30,lVar4);
  }
  iVar3 = fn_827D36E8(piVar1 + 0x1a,*param_1,param_1[1]);
  iVar5 = param_1[2] + iVar3;
  *param_1 = *param_1 + iVar3;
  param_1[1] = param_1[1] - iVar3;
  param_1[2] = iVar5;
  if (piVar1[0x1a] != 4) {
    return 0xfffffffffffffffd;
  }
  iVar3 = param_1[5];
  fn_827D1B48(param_1);
  param_1[2] = iVar5;
  param_1[5] = iVar3;
  *piVar1 = 0xb;
  return 0;
}

