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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack00000030 ((*(U64*)&iStack00000030))
#define _uStack00000038 ((*(U64*)&uStack00000038))
extern int fn_829F2758();
extern int fn_829F27B8();
extern unsigned int iStack00000030;
extern unsigned int iStack00000034;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_82079F74;
extern unsigned int uStack00000038;
extern unsigned int uStack_68;


void fn_829F2968(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iStack00000030;
  int iStack00000034;
  uint uStack00000038;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  
  iStack00000030 = (int)((ulonglong)param_4 >> 0x20);
  iVar1 = iStack00000030;
  iStack00000034 = (int)param_4;
  iVar2 = iStack00000034;
  uStack00000038 = (uint)((ulonglong)param_5 >> 0x20);
  uStack_68 = uStack00000038;
  puVar4 = (undefined4 *)(param_1 + 0x5c);
  piVar5 = (int *)&lbl_82079F74;
  _iStack00000030 = param_4;
  _uStack00000038 = param_5;
  do {
    iStack_70 = piVar5[-1] * param_7 + iVar1;
    iStack_6c = *piVar5 * param_7 + iVar2;
    fn_829F2758(&iStack_70,&iStack_6c);
    uVar3 = fn_829F27B8(param_2,param_3,CONCAT44(iStack_70,iStack_6c),(ulonglong)uStack_68 << 0x20
                          ,param_6,300,0x50,param_1);
    piVar5 = piVar5 + 2;
    puVar4 = puVar4 + 1;
    *puVar4 = uVar3;
    param_1 = param_1 + 0xc;
  } while ((int)piVar5 < -0x7df8604c);
  return;
}

