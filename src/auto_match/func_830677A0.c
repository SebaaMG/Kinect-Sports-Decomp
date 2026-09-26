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
extern unsigned int *auStack_b0;
extern int fn_82F66768();
extern int fn_83065B90();
extern int fn_83065BA8();
extern int fn_830676A8();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_830677A0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined1 auStack_b0 [176];
  
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(int *)(param_1 + 0x18) = param_2 / *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (*(int *)(param_1 + 4) != 0) {
    fn_830676A8();
  }
  iVar1 = fn_82F66768(auStack_b0,0x80,param_3,&stack0x00000028);
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0xc) - iVar1;
    puVar2 = (undefined1 *)fn_83065B90(iVar1 + 1);
    puVar3 = puVar2;
    if (0 < iVar1) {
      puVar3 = puVar2 + -1;
      for (iVar4 = iVar1; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x2e;
      }
      puVar3 = puVar2 + iVar1;
    }
    *puVar3 = 0;
    fn_830676A8(param_1,auStack_b0);
    fn_830676A8(param_1,puVar2);
    fn_83065BA8(puVar2);
  }
  else {
    fn_830676A8(param_1,auStack_b0);
  }
  return;
}

