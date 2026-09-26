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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8223C478();
extern int fn_822CB8B0();
extern int fn_8287C4A0();
extern int fn_828E9F18();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195740;
extern unsigned int lbl_82195B48;
extern unsigned int lbl_82195B50;
extern unsigned int lbl_831D1430;


void fn_822CB608(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  longlong lVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong alStack_50 [2];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)((int)alStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  dVar3 = (double)fn_8287C4A0(auStack_30,&fStack_40);
  if (dVar3 < lbl_82195518) {
    dVar3 = (double)lbl_831D1430 + dVar3;
  }
  if (lbl_82195740 <= dVar3) {
    dVar3 = (double)lbl_831D1430 - dVar3;
    fStack_40 = -fStack_40;
    fStack_3c = -fStack_3c;
    fStack_38 = -fStack_38;
  }
  alStack_50[0] = (longlong)(dVar3 * lbl_82195B48 * lbl_82195B50);
  lVar2 = alStack_50[0];
  if (alStack_50[0] == 0x100) {
    lVar2 = 0xff;
  }
  fn_8223C478(param_1,8,0);
  fn_828E9F18(param_1,lVar2,8);
  fn_822CB8B0(param_1,&fStack_40);
  return;
}

